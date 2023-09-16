 /******************************************************************************
 * @File :				Main.c                                                 *
 * @Version :			1.0.0                                                  *
 * @Module: 			Dio                                                    *
 * @brief : 			Header file for Dio Module.                            *
 * @Author : 			Mohamed Nagy                                           *
 ******************************************************************************/

 /******************************************************************************
 * Project :			AUTOSAR 4.4.0 MCAL 								       *
 * Platform :			AVR                 								   *
 * Board : 				ATMEGA32       								           *
 * Autosar Version :	4.4.0               								   *
 * SW Version : 		1.0.0               								   *
 ******************************************************************************/

#include "Dio.h"
#include <util/delay.h>
#define F_CPU 8000000UL

int main(void)
{
	Dio_Init(&Dio_ConfigurationSet);

	Dio_SetupChannelDirection(PORTC_ID, PIN0_ID, PIN_OUTPUT);
	Dio_SetupChannelDirection(PORTC_ID, PIN1_ID, PIN_OUTPUT);
	Dio_WriteChannel(PORTC_ID, PIN_C_1, STD_HIGH);
	Dio_WriteChannel(PORTC_ID, PIN_C_0, STD_LOW);

	while(1)
	{
		Dio_FlipChannel(PORTC_ID, PIN_C_0);
		Dio_FlipChannel(PORTC_ID, PIN_C_1);
		_delay_ms(750);
	}
}

