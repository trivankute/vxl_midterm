/*
 * LED_BLINKY_timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "LED_BLINKY_timer.h"

int LED_BLINKY_flag=0;
int LED_BLINKY_counter=0;

void setTimer_LED_BLINKY(int duration){
	LED_BLINKY_counter = duration/time_interupt_duration;
	LED_BLINKY_flag = 0;
}
void LED_BLINKY_timer_run(void){
	if(LED_BLINKY_counter>0)
	{
		LED_BLINKY_counter--;
		if(LED_BLINKY_counter<=0)
		{
			LED_BLINKY_flag = 1;
		}
	}
}
