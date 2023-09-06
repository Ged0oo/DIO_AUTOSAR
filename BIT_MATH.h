 /******************************************************************************
 * @File :				BIT_MATH.h
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


#ifndef __BIT_MATH_H__
#define __BIT_MATH_H__


#define SET_BIT(VAR,BIT)       		(VAR |= (1 << (BIT)))
#define CLEAR_BIT(VAR,BIT)       	(VAR &= ~(1 << (BIT)))
#define GET_BIT(VAR,BIT)       		((VAR >> BIT) & 1)
#define TOG_BIT(VAR,BIT)       		(VAR ^= (1 << (BIT)))


#define ROR(VAR,BIT) 				(VAR= (VAR>>BIT) | (VAR<<(8-BIT)))
#define ROL(VAR,BIT) 				(VAR= (VAR<<BIT) | (VAR>>(8-BIT)))
#define BIT_IS_SET(VAR,BIT)      	((VAR>>BIT)&1)
#define BIT_IS_CLEAR(VAR,BIT)  		(!((VAR>>BIT)&1))


#endif //__BIT_MATH_H__