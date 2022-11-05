/*
 * LED_BLINKY_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#ifndef INC_LED_BLINKY_TIMER_H_
#define INC_LED_BLINKY_TIMER_H_

#include "global.h"
extern int LED_BLINKY_flag;
int LED_BLINKY_counter;

void setTimer_LED_BLINKY(int duration);
void LED_BLINKY_timer_run(void);

#endif /* INC_LED_BLINKY_TIMER_H_ */
