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

#ifndef __DIO_H__
#define __DIO_H__

/*
 * @brief Include DIO_Cfg Abstraction
 */
#include "DIO_Cfg.h"

/*
 * @brief Include Std_Types Abstraction
 */
#include "Std_Types.h"

/*
 * @brief STD_TYPES VENDOR ID 
 */
#define DIO_VENDOR_ID                                  (1U)

/*
 * Module Version 1.0.0
 */
#define DIO_SW_MAJOR_VERSION                           (1U)
#define DIO_SW_MINOR_VERSION                           (0U)
#define DIO_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.4.0
 */
#define DIO_AR_RELEASE_MAJOR_VERSION                   (4U)
#define DIO_AR_RELEASE_MINOR_VERSION                   (4U)
#define DIO_AR_RELEASE_PATCH_VERSION                   (0U)

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if((DIO_AR_MAJOR_VERSION != DIO_CFG_AR_MAJOR_VERSION) || \
	(DIO_AR_MINOR_VERSION != DIO_CFG_AR_MINOR_VERSION))
	#error "Autosar Version Numbers of Std_Types.h and Platform_Types.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if((DIO_AR_MAJOR_VERSION != STD_TYPES_AR_MAJOR_VERSION) || \
	(DIO_AR_MINOR_VERSION != STD_TYPES_AR_MINOR_VERSION))
	#error "Autosar Version Numbers of DIO.h and Std_Types.h are different"
#endif
#endif

#endif //__STD_TYPES_H__

