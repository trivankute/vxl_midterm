/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

// tim2 is 100Hz so time interupt-duration is 10Hz
#define time_interupt_duration 10
// all define FSM_status and variables for main program
#define DEFAULT 0
#define INC_PRESSED 1
#define DEC_PRESSED 2
#define RESET_PRESSED 3
#define AUTO_COUNT_DOWN 4

//#define
//#define
extern int status;
extern int counter_value;

#endif /* INC_GLOBAL_H_ */
