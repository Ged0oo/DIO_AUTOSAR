 /******************************************************************************
 * @File :				Dio_PBcfg.c
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
 
 /*
 * @brief Include Platform Abstraction
 */
#include "Dio.h"

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
#if((DIO_PBCFG_AR_MAJOR_VERSION != DIO_AR_MAJOR_VERSION) || \
	(DIO_PBCFG_AR_MINOR_VERSION != DIO_AR_MINOR_VERSION))
	#error "Autosar Version Numbers of Std_Types.h and Platform_Types.h are different"
#endif
#endif

/* PB structure used with Dio_Init API */
const Dio_ConfigType Dio_Configuration = {
		.Channels[DioConf_LED1_CHANNEL_ID_INDEX ].Ch_Num =DioConf_LED1_CHANNEL_NUM,
		.Channels[DioConf_LED1_CHANNEL_ID_INDEX ].Port_Num =DioConf_LED1_PORT_NUM,
		.Channels[DioConf_LED2_CHANNEL_ID_INDEX ].Ch_Num =DioConf_LED2_CHANNEL_NUM,
		.Channels[DioConf_LED2_CHANNEL_ID_INDEX ].Port_Num =DioConf_LED2_PORT_NUM,
		.Channels[DioConf_BUTTON1_CHANNEL_ID_INDEX ].Ch_Num =DioConf_BUTTON1_CHANNEL_NUM,
		.Channels[DioConf_BUTTON1_CHANNEL_ID_INDEX ].Port_Num =DioConf_BUTTON1_PORT_NUM,
		.Channels[DioConf_BUTTON2_CHANNEL_ID_INDEX ].Ch_Num =DioConf_BUTTON2_CHANNEL_NUM,
		.Channels[DioConf_BUTTON2_CHANNEL_ID_INDEX ].Port_Num =DioConf_BUTTON2_PORT_NUM,
		.ports[DioConf_PORT2_PORT_ID_INDEX]=DioConf_PORT2_PORT_NUM ,
		.ports[DioConf_PORT1_PORT_ID_INDEX]=DioConf_PORT1_PORT_NUM ,

		.groups[DioConf_RGP_CHANNEL_GROUP_INDEX ].PortIndex =DioConf_RGB_PORT_NUM,
		.groups[DioConf_RGP_CHANNEL_GROUP_INDEX ].offset =DioConf_RGB_CHANNEL_GROUP_OFFSET,
		.groups[DioConf_RGP_CHANNEL_GROUP_INDEX ].mask =DioConf_RGB_CHANNEL_GROUP_MASK,

		.groups[DioConf_RGP1_CHANNEL_GROUP_INDEX ].PortIndex =DioConf_RGB1_PORT_NUM,
		.groups[DioConf_RGP1_CHANNEL_GROUP_INDEX ].offset =DioConf_RGB1_CHANNEL_GROUP_OFFSET,
		.groups[DioConf_RGP1_CHANNEL_GROUP_INDEX ].mask =DioConf_RGB1_CHANNEL_GROUP_MASK
};