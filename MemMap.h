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


/*
 * Module Version 1.0.0
 */
#define MEM_MAP_SW_MAJOR_VERSION           (1U)
#define MEM_MAP_SW_MINOR_VERSION           (0U)
#define MEM_MAP_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.4.0
 */
#define MEM_MAP_AR_RELEASE_MAJOR_VERSION   (4U)
#define MEM_MAP_AR_RELEASE_MINOR_VERSION   (4U)
#define MEM_MAP_AR_RELEASE_PATCH_VERSION   (0U)

#include "Std_Types.h"

/* =====================================================================================================
 * 										VERSION CHECK
 * =====================================================================================================*/
/* AUTOSAR checking between Std_Types and Dio Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != MEM_MAP_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != MEM_MAP_AR_RELEASE_MINOR_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif


typedef union PORT_Union
{
	volatile uint8 Register;
	struct BitField
	{
		volatile uint8 PIN_0: 1; 
		volatile uint8 PIN_1: 1; 
		volatile uint8 PIN_2: 1;
		volatile uint8 PIN_3: 1; 
		volatile uint8 PIN_4: 1; 
		volatile uint8 PIN_5: 1; 
		volatile uint8 PIN_6: 1; 
		volatile uint8 PIN_7: 1;
	} BitField;
}PORT_Union;


#define 	PORTA          *((volatile uint8 *)(0X3B))
#define 	PORTB          *((volatile uint8 *)(0X38))
#define 	PORTC          *((volatile uint8 *)(0X35))
#define 	PORTD          *((volatile uint8 *)(0X32))
	
#define 	PINA           *((volatile uint8 *)(0X39))
#define 	PINB           *((volatile uint8 *)(0X36))
#define 	PINC           *((volatile uint8 *)(0X33))
#define 	PIND           *((volatile uint8 *)(0X30))
	
#define 	DDRA           *((volatile uint8 *)(0X3A))
#define 	DDRB           *((volatile uint8 *)(0X37))
#define 	DDRC           *((volatile uint8 *)(0X34))
#define 	DDRD           *((volatile uint8 *)(0X31))

#endif //__MEM_MAP_H__

 
