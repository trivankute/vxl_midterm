/*
 * 10second_timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "10second_timer.h"

int _10second_timer_flag = 0;
int _10second_timer_counter = 0;

void setTimer_10second(int duration) {
	_10second_timer_counter = duration/time_interupt_duration;
	_10second_timer_flag = 0;
}
void _10second_timer_run(void){
	if(_10second_timer_counter>0)
	{
		_10second_timer_counter--;
		if(_10second_timer_counter<=0)
		{
			_10second_timer_flag=1;
		}
	}
}
