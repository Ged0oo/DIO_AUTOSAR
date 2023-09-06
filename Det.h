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

/* Id for the company in the AUTOSAR
 * for example Mahmoud Helmy's ID = 1000 :) */
#define DET_VENDOR_ID                 (1000U)

/* Det Module Id */
#define DET_MODULE_ID                 (15U)

/* Instance Id */
#define DET_INSTANCE_ID               (0U)

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

extern uint16 Det_ModuleId;       /*DET module ID*/
extern uint8 Det_InstanceId;      /*DET instance ID*/
extern uint8 Det_ApiId;           /* DET API ID*/
extern uint8 Det_ErrorId;         /* DET Error ID*/

Std_ReturnType Det_ReportError( uint16 ModuleId,
                      uint8 InstanceId,
                      uint8 ApiId,
					  uint8 ErrorId );
					  
#endif //__DET_H__