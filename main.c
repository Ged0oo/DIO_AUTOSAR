 /******************************************************************************
 * @File :				main.c
 * @Version :			1.0.0
 * @Module: 			Dio
 * @brief : 			Header file for Dio Module.
 * @Author : 			Mohamed Nagy
 ******************************************************************************/
 
  /******************************************************************************
 * Project :			AUTOSAR r22-11 MCAL
 * Platform :			ARM
 * Board : 				STM32F103C8T6
 * Autosar Version :	4.4.0
 * SW Version : 		1.0.0
 ******************************************************************************/


#include "Dio.h"

void main(void)
{
	Dio_SetupChannelDirection(PORTC_ID,PIN0_ID,PIN_OUTPUT);
	Dio_WriteChannel(PORTC_ID,PIN_C_0,STD_HIGH);
}