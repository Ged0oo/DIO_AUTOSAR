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

#ifndef __STD_TYPES_H__
#define __STD_TYPES_H__

/*
 * @brief Include Platform Abstraction
 */
#include "Platform_Types.h"

/*
 * @brief Include Compiler Abstraction
 */
#include "Compiler.h"

/*
 * @brief STD_TYPES VENDOR ID 
 */
#define STD_TYPES_VENDOR_ID                                  (1U)

/*
 * Module Version 1.0.0
 */
#define STD_TYPES_SW_MAJOR_VERSION                           (1U)
#define STD_TYPES_SW_MINOR_VERSION                           (0U)
#define STD_TYPES_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.4.0
 */
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION                   (4U)
#define STD_TYPES_AR_RELEASE_MINOR_VERSION                   (4U)
#define STD_TYPES_AR_RELEASE_PATCH_VERSION                   (0U)

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if((STD_TYPES_AR_MAJOR_VERSION != PLATFORM_TYPES_AR_MAJOR_VERSION) || \
	(STD_TYPES_AR_MINOR_VERSION != PLATFORM_TYPES_AR_MINOR_VERSION))
	#error "Autosar Version Numbers of Std_Types.h and Platform_Types.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if((STD_TYPES_AR_MAJOR_VERSION != COMPILER_AR_MAJOR_VERSION) || \
	(STD_TYPES_AR_MINOR_VERSION != COMPILER_AR_MINOR_VERSION))
	#error "Autosar Version Numbers of Std_Types.h and Compiler.h are different"
#endif
#endif

#endif //__STD_TYPES_H__

