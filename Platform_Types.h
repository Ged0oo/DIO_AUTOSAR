 /******************************************************************************
 * @File :				Dio.h
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

#ifndef __PLATFORM_TYPES_H__
#define __PLATFORM_TYPES_H__

/*
 * @brief COMPILER VENDOR ID 
 */
#define PLATFORM_TYPES_VENDOR_ID                                  (1U)

/*
 * Module Version 1.0.0
 */
#define PLATFORM_TYPES_SW_MAJOR_VERSION                           (1U)
#define PLATFORM_TYPES_SW_MINOR_VERSION                           (0U)
#define PLATFORM_TYPES_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.4.0
 */
#define PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION                   (4U)
#define PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION                   (4U)
#define PLATFORM_TYPES_AR_RELEASE_PATCH_VERSION                   (0U)

/*
 * CPU register type width
 */
#define CPU_TYPE_8                                  			  (8U)
#define CPU_TYPE_16                                 			  (16U)
#define CPU_TYPE_32                                 			  (32U)

/*
 * Platform type and endianess definitions, specific for AVR
 */
#define CPU_TYPE            									  CPU_TYPE_8

/*
 * Bit order definition
 */
#define MSB_FIRST                   (0u)        /* Big endian bit ordering        */
#define LSB_FIRST                   (1u)        /* Little endian bit ordering     */

/*
 * Byte order definition
 */
#define HIGH_BYTE_FIRST             (0u)        /* Big endian byte ordering       */
#define LOW_BYTE_FIRST              (1u)        /* Little endian byte ordering    */

#define CPU_BIT_ORDER       		LSB_FIRST
#define CPU_BYTE_ORDER      		LOW_BYTE_FIRST

/*
 * Boolean Values
 */
#ifndef FALSE
#define FALSE       				(0u)
#endif				
				
#ifndef TRUE				
#define TRUE        				(1u)
#endif

typedef unsigned char         		boolean;
typedef unsigned char         		uint8;  
typedef signed char           		sint8;  
typedef unsigned short        		uint16; 
typedef signed short          		sint16; 
typedef unsigned long         		uint32; 
typedef signed long           		sint32; 
typedef unsigned long long    		uint64; 
typedef signed long long      		sint64; 
typedef float                 		float32;
typedef double                		float64;

#endif //__COMPILER_H__

