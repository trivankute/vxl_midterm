/*
 * buttons_reading.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */

#ifndef INC_BUTTONS_READING_H_
#define INC_BUTTONS_READING_H_

#include "global.h"
#define DURATION_FOR_ENTER_AUTO_INC_OR_DEC 3000
#define DURATION_FOR_AUTO_INC_OR_DEC 1000
#define BUTTON_IS_PRESSED 0
#define BUTTON_IS_RELEASED 1
extern int btn0_flag;
extern int btn0_long_flag;
extern int first_enter_auto_mode_0;

extern int btn1_flag;
extern int btn1_long_flag;
extern int first_enter_auto_mode_1;

extern int btn2_flag;
extern int btn2_long_flag;
extern int first_enter_auto_mode_2;

void button_reading0 ( void );
void button_reading1 ( void );
void button_reading2 ( void );


#endif /* INC_BUTTONS_READING_H_ */
