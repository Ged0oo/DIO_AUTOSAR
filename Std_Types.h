 /******************************************************************************
 * @File :				Std_Types.h
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
 * @brief Id for the company in the AUTOSAR
 * for example Elektrobit ID = 1  
 */
#define STD_TYPES_VENDOR_ID                                  (1U)

/* 
 * @brief Id for the company in the AUTOSAR
 * for example Elektrobit ID = 1  
 */
#define COMPILER_VENDOR_ID                                  (1U)

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

/*
 *  Describes the standard Return Type Definitions used in the project
 */
typedef uint8  Std_ReturnType;

/*
 * Structure for the Version of the module.
 * This is requested by calling <Module name>_GetVersionInfo()
 */
typedef struct
{
  uint16  vendorID;
  uint16  moduleID;
  uint8 sw_major_version;
  uint8 sw_minor_version;
  uint8 sw_patch_version;
} Std_VersionInfoType;

#define STD_HIGH        0x01U       /* Standard HIGH */
#define STD_LOW         0x00U       /* Standard LOW */

#define STD_ACTIVE      0x01U       /* Logical state active */
#define STD_IDLE        0x00U       /* Logical state idle */

#define STD_ON          0x01U       /* Standard ON */
#define STD_OFF         0x00U       /* Standard OFF */

#define E_OK            ((Std_ReturnType)0x00U)      /* Function Return OK */
#define E_NOT_OK        ((Std_ReturnType)0x01U)      /* Function Return NOT OK */

#endif //__STD_TYPES_H__

