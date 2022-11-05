/*
 * auto_count_down_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#ifndef INC_AUTO_COUNT_DOWN_TIMER_H_
#define INC_AUTO_COUNT_DOWN_TIMER_H_

#include "global.h"
extern int auto_count_down_flag;
int auto_count_down_counter;

void setTimer_auto_count_down(int duration);
void auto_count_down_timer_run(void);

#endif /* INC_AUTO_COUNT_DOWN_TIMER_H_ */
