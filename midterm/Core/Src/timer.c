/*
 * timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#include "timer.h"
#include "main.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM2) {
		LED_BLINKY_timer_run();
		button_reading0();
		button_reading1();
		button_reading2();
		_10second_timer_run();
		auto_count_down_timer_run();
	}
}


