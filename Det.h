/******************************************************************************
 * @File :				Det.h
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
 
#ifndef __DET_H__
#define __DET_H__

/*
 * @brief Include Std_Types Abstraction
 */
#include "Std_Types.h"

/*
 * Module Version 1.0.0
 */
#define DET_SW_MAJOR_VERSION                           (1U)
#define DET_SW_MINOR_VERSION                           (0U)
#define DET_SW_PATCH_VERSION                           (0U)

/*
 * AUTOSAR Version 4.4.0
 */
#define DET_AR_RELEASE_MAJOR_VERSION                   (4U)
#define DET_AR_RELEASE_MINOR_VERSION                   (4U)
#define DET_AR_RELEASE_PATCH_VERSION                   (0U)

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if((DET_AR_MAJOR_VERSION != STD_TYPES_AR_MAJOR_VERSION) || \
	(DET_AR_MINOR_VERSION != STD_TYPES_AR_MINOR_VERSION))
	#error "Autosar Version Numbers of DET.h and Std_Types.h are different"
#endif
#endif

void Det_ReportError( uint16 ModuleId,
                      uint8 InstanceId,
                      uint8 ApiId,
					  uint8 ErrorId );
					  
#endif //__DET_H__