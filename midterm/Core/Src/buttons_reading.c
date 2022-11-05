/*
 * buttons_reading.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "buttons_reading.h"
#include "main.h"

int keyReg0_0 = BUTTON_IS_RELEASED;
int keyReg1_0 = BUTTON_IS_RELEASED;
int keyReg2_0 = BUTTON_IS_RELEASED;
int keyReg3_0 = BUTTON_IS_RELEASED;
int counter0 = 0;
int btn0_flag = 0;
int first_enter_auto_mode_0 = 0;

int keyReg0_1 = BUTTON_IS_RELEASED;
int keyReg1_1 = BUTTON_IS_RELEASED;
int keyReg2_1 = BUTTON_IS_RELEASED;
int keyReg3_1 = BUTTON_IS_RELEASED;
int counter1 = 0;
int btn1_flag = 0;
int btn1_long_flag =0;
int first_enter_auto_mode_1 = 0;

int keyReg0_2 = BUTTON_IS_RELEASED;
int keyReg1_2 = BUTTON_IS_RELEASED;
int keyReg2_2 = BUTTON_IS_RELEASED;
int keyReg3_2 = BUTTON_IS_RELEASED;
int counter2 = 0;
int btn2_flag = 0;
int btn2_long_flag =0;


void subKeyProcess0(){
	btn0_flag=1;
}

 void button_reading0 ( void ) {
	 keyReg0_0 = keyReg1_0;
	 keyReg1_0 = keyReg2_0;
	 keyReg2_0 = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
	 if(keyReg0_0==keyReg1_0 && keyReg1_0==keyReg2_0){
		 if(keyReg3_0 != keyReg2_0)
		 {
			 keyReg3_0 = keyReg2_0;
			 if(keyReg2_0 == BUTTON_IS_PRESSED)
			 {
				 subKeyProcess0();
				 if(first_enter_auto_mode_0 == 0)
				 {
				 counter0 = DURATION_FOR_ENTER_AUTO_INC_OR_DEC/time_interupt_duration;
				 first_enter_auto_mode_0 = 1;
				 }
				 else
				 {
				 counter0 = DURATION_FOR_AUTO_INC_OR_DEC/time_interupt_duration;
				 }
			 }
			 else first_enter_auto_mode_0 = 0;
		 }
		 else {
			 if(counter0>0)
			 {
			 counter0--;
			 if(counter0<=0)
				 {
				 keyReg3_0=BUTTON_IS_RELEASED;
				 }
			 }
		 }
	 }
 }


 void subKeyProcess1(){
 	btn1_flag=1;
 }

  void button_reading1 ( void ) {
 	 keyReg0_1 = keyReg1_1;
 	 keyReg1_1 = keyReg2_1;
 	 keyReg2_1 = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
 	 if(keyReg0_1==keyReg1_1 && keyReg1_1==keyReg2_1){
 		 if(keyReg3_1 != keyReg2_1)
 		 {
 			 keyReg3_1 = keyReg2_1;
 			 if(keyReg2_1 == BUTTON_IS_PRESSED)
 			 {
 				 subKeyProcess1();
 				if(first_enter_auto_mode_1 == 0)
				 {
				 counter1 = DURATION_FOR_ENTER_AUTO_INC_OR_DEC/time_interupt_duration;
				 first_enter_auto_mode_1 = 1;
				 }
				 else
				 {
				 counter1 = DURATION_FOR_AUTO_INC_OR_DEC/time_interupt_duration;
				 }
 			 }
 			 else first_enter_auto_mode_1 = 0;
 		 }
 		 else {
 			 if(counter1>0)
 			 {
 			 counter1--;
 			 if(counter1<=0)
 				 {
 				 keyReg3_1=BUTTON_IS_RELEASED;
				 btn1_long_flag = 1;
 				 }
 			 }
 		 }
 	 }
  }


  void subKeyProcess2(){
  	btn2_flag=1;
  }

   void button_reading2 ( void ) {
  	 keyReg0_2 = keyReg1_2;
  	 keyReg1_2 = keyReg2_2;
  	 keyReg2_2 = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
  	 if(keyReg0_2==keyReg1_2 && keyReg1_2==keyReg2_2){
  		 if(keyReg3_2 != keyReg2_2)
  		 {
  			 keyReg3_2 = keyReg2_2;
  			 if(keyReg2_2 == BUTTON_IS_PRESSED)
  			 {
  				 subKeyProcess2();
  				 counter2 = DURATION_FOR_AUTO_INC_OR_DEC/time_interupt_duration;
  			 }
  		 }
  		 else {
  			 if(counter2>0)
  			 {
  			 counter2--;
  			 if(counter2<=0)
  				 {
  				 keyReg3_2=BUTTON_IS_RELEASED;
				 btn2_long_flag = 1;
  				 }
  			 }
  		 }
  	 }
   }
