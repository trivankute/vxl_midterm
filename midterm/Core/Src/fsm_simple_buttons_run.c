/*
 * fsm_simple_buttons_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "fsm_simple_buttons_run.h"
#include "main.h"

void fsm_simple_buttons_run(void) {
	switch(status) {
	case DEFAULT:
		display7SEG(counter_value);
		if(is_button0_pressed() == 1)
		{
			status = INC_PRESSED;
			setTimer_10second(10000);
			counter_value++;
			if(counter_value==10) counter_value= 0;
		}
		if(is_button1_pressed() == 1)
		{
			status = DEC_PRESSED;
			setTimer_10second(10000);
			counter_value--;
			if(counter_value==-1) counter_value= 9;
		}
		if(is_button2_pressed() == 1)
		{
			status = RESET_PRESSED;
			counter_value=0;
		}
		break;
	case INC_PRESSED:
		display7SEG(counter_value);
		if(is_button0_pressed() == 1)
		{
			status = INC_PRESSED;
			setTimer_10second(10000);
			counter_value++;
			if(counter_value==10) counter_value= 0;
		}
		if(is_button1_pressed() == 1)
		{
			status = DEC_PRESSED;
			setTimer_10second(10000);
			counter_value--;
			if(counter_value==-1) counter_value= 9;
		}
		if(is_button2_pressed() == 1)
		{
			status = RESET_PRESSED;
			counter_value=0;
		}
		if(_10second_timer_flag == 1) {
			status = AUTO_COUNT_DOWN;
			setTimer_auto_count_down(1000);
			_10second_timer_flag = 0;
		}
		break;
	case DEC_PRESSED:
		display7SEG(counter_value);
		if(is_button0_pressed() == 1)
		{
			status = INC_PRESSED;
			setTimer_10second(10000);
			counter_value++;
			if(counter_value==10) counter_value= 0;
		}
		if(is_button1_pressed() == 1)
		{
			status = DEC_PRESSED;
			setTimer_10second(10000);
			counter_value--;
			if(counter_value==-1) counter_value= 9;
		}
		if(is_button2_pressed() == 1)
		{
			status = RESET_PRESSED;
			counter_value=0;
		}
		if(_10second_timer_flag == 1) {
			status = AUTO_COUNT_DOWN;
			setTimer_auto_count_down(1000);
			_10second_timer_flag = 0;
		}
		break;
	case RESET_PRESSED:
		status=DEFAULT;
		break;
	case AUTO_COUNT_DOWN:
		display7SEG(counter_value);
		if(auto_count_down_flag == 1)
		{
			counter_value--;
			if(counter_value==0)
				status=DEFAULT;
			else
			setTimer_auto_count_down(1000);
		}
		if(is_button0_pressed() == 1)
		{
			status = INC_PRESSED;
			counter_value++;
			if(counter_value==10) counter_value= 0;
		}
		if(is_button1_pressed() == 1)
		{
			status = DEC_PRESSED;
			counter_value--;
			if(counter_value==-1) counter_value= 9;
		}
		if(is_button2_pressed() == 1)
		{
			status = RESET_PRESSED;
			counter_value=0;
		}
		break;
	default:
		break;
	}
}
