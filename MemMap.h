/******************************************************************************
 * @File :				MemMap.h
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
 
#ifndef __MEM_MAP_H__
#define __MEM_MAP_H__

/* Definition for PORTA Registers */
#define PORTA_REG	(*(volatile uint8 * const)0x003B)
#define DDRA_REG	(*(volatile uint8 * const)0x003A)
#define PINA_REG 	(*(volatile const uint8 * const)0x0039)

/* Definition for PORTB Registers */
#define PORTB_REG	(*(volatile uint8 * const)0x0038)
#define DDRB_REG	(*(volatile uint8 * const)0x0037)
#define PINB_REG 	(*(volatile const uint8 * const)0x0036)

/* Definition for PORTC Registers */
#define PORTC_REG	(*(volatile uint8 * const)0x0035)
#define DDRC_REG	(*(volatile uint8 * const)0x0034)
#define PINC_REG 	(*(volatile const uint8 * const)0x0033)

/* Definition for PORTD Registers */
#define PORTD_REG	(*(volatile uint8 * const)0x0032)
#define DDRD_REG	(*(volatile uint8 * const)0x0031)
#define PIND_REG 	(*(volatile const uint8 * const)0x0030)

#endif //__MEM_MAP_H__

 