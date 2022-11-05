/*
 * auto_count_down_timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "auto_count_down_timer.h"

int auto_count_down_flag = 0;
int auto_count_down_counter = 0;

void setTimer_auto_count_down(int duration) {
	auto_count_down_counter = duration/time_interupt_duration;
	auto_count_down_flag = 0;
}
void auto_count_down_timer_run(void) {
	if(auto_count_down_counter>0)
	{
		auto_count_down_counter--;
		if(auto_count_down_counter<=0){
			auto_count_down_flag = 1;
		}
	}
}
