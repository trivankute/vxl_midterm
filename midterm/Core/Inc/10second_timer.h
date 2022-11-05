/*
 * 10second_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#ifndef INC_10SECOND_TIMER_H_
#define INC_10SECOND_TIMER_H_

#include "global.h"
extern int _10second_timer_flag;
int _10second_timer_counter;

void setTimer_10second(int duration);
void _10second_timer_run(void);

#endif /* INC_10SECOND_TIMER_H_ */
