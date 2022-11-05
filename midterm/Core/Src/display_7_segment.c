/*
 * display_7_segment.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Tri Van
 */


#include "display_7_segment.h"
#include "main.h"

void display7SEG(int counter)
{
	int a = 0;
		  int b = 0;
		  int c = 0;
		  int d = 0;
		  int e = 0;
		  int f = 0;
		  int g = 0;
		  switch(counter){
			  case 0:
				  a=0;b=0;c=0;d=0;e=0;f=0;g=1;
				  break;
			  case 1:
				  a=1;b=0;c=0;d=1;e=1;f=1;g=1;
				  break;
			  case 2:
				  a=0;b=0;c=1;d=0;e=0;f=1;g=0;
				  break;
			  case 3:
				  a=0;b=0;c=0;d=0;e=1;f=1;g=0;
				  break;
			  case 4:
				  a=1;b=0;c=0;d=1;e=1;f=0;g=0;
				  break;
			  case 5:
				  a=0;b=1;c=0;d=0;e=1;f=0;g=0;
				  break;
			  case 6:
				  a=0;b=1;c=0;d=0;e=0;f=0;g=0;
				  break;
			  case 7:
				  a=0;b=0;c=0;d=1;e=1;f=1;g=1;
				  break;
			  case 8:
				  a=0;b=0;c=0;d=0;e=0;f=0;g=0;
				  break;
			  case 9:
				  a=0;b=0;c=0;d=0;e=1;f=0;g=0;
				  break;
			  default:
				  a=1;b=1;c=1;d=1;e=1;f=1;g=1;
				  break;
		  }
		  HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin, a);
		  HAL_GPIO_WritePin(LED7_1_GPIO_Port, LED7_1_Pin, b);
		  HAL_GPIO_WritePin(LED7_2_GPIO_Port, LED7_2_Pin, c);
		  HAL_GPIO_WritePin(LED7_3_GPIO_Port, LED7_3_Pin, d);
		  HAL_GPIO_WritePin(LED7_4_GPIO_Port, LED7_4_Pin, e);
		  HAL_GPIO_WritePin(LED7_5_GPIO_Port, LED7_5_Pin, f);
		  HAL_GPIO_WritePin(LED7_6_GPIO_Port, LED7_6_Pin, g);
}
