/*
 * buttons_processing.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "buttons_processing.h"

int is_button0_pressed(){
	if(btn0_flag==1)
	{
		btn0_flag=0;
		return 1;
	}
	else return 0;
}

 int is_button1_pressed(){
 	if(btn1_flag==1)
 	{
 		btn1_flag=0;
 		return 1;
 	}
 	else return 0;
 }


  int is_button2_pressed(){
  	if(btn2_flag==1)
  	{
  		btn2_flag=0;
  		return 1;
  	}
  	else return 0;
  }
