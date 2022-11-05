/*
 * timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
#include "LED_BLINKY_timer.h"
#include "buttons_reading.h"
#include "10second_timer.h"
#include "auto_count_down_timer.h"
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /* INC_TIMER_H_ */
