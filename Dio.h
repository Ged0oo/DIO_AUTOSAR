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

/* Non AUTOSAR files */
#include "BIT_MATH.h"

/*
 * @brief STD_TYPES VENDOR ID 
 */
#define DIO_VENDOR_ID                                  (1U)

/* Dio Module Id */
#define DIO_MODULE_ID    								(120U)

/* Dio Instance Id */
#define DIO_INSTANCE_ID  								(0U)

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

/*
 * Macros for Dio Status
 */
#define DIO_INITIALIZED                (1U)
#define DIO_NOT_INITIALIZED            (0U)


/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
/* Service ID for DIO read Channel */
#define DIO_READ_CHANNEL_SID           (uint8)0x00

/* Service ID for DIO write Channel */
#define DIO_WRITE_CHANNEL_SID          (uint8)0x01

/* Service ID for DIO read Port */
#define DIO_READ_PORT_SID              (uint8)0x02

/* Service ID for DIO write Port */
#define DIO_WRITE_PORT_SID             (uint8)0x03

/* Service ID for DIO read Channel Group */
#define DIO_READ_CHANNEL_GROUP_SID     (uint8)0x04

/* Service ID for DIO write Channel Group */
#define DIO_WRITE_CHANNEL_GROUP_SID    (uint8)0x05

/* Service ID for DIO GetVersionInfo */
#define DIO_GET_VERSION_INFO_SID       (uint8)0x12

/* Service ID for DIO Init Channel */
#define DIO_INIT_SID                   (uint8)0x10

/* Service ID for DIO flip Channel */
#define DIO_FLIP_CHANNEL_SID           (uint8)0x11



/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
/* DET code to report Invalid Channel */
#define DIO_E_PARAM_INVALID_CHANNEL_ID (uint8)0x0A

/* Dio_Init API service called with NULL pointer parameter */
#define DIO_E_PARAM_CONFIG             (uint8)0x10

/* DET code to report Invalid Port */
#define DIO_E_PARAM_INVALID_PORT_ID    (uint8)0x14

/* DET code to report Invalid Channel Group */
#define DIO_E_PARAM_INVALID_GROUP      (uint8)0x1F

/*
 * The API service shall return immediately without any further action,
 * beside reporting this development error.
 */
#define DIO_E_PARAM_POINTER             (uint8)0x20

/*
 * API service used without module initialization is reported using following
 * error code (Not exist in AUTOSAR 4.0.3 DIO SWS Document.
 */
#define DIO_E_UNINIT                   (uint8)0xF0


/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8 Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8 Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8 Dio_LevelType;

/* Type definition for Dio_PortLevelType used by the DIO APIs */
typedef uint8 Dio_PortLevelType;

/* Structure for Dio_ChannelGroup */
typedef struct
{
  /* Mask which defines the positions of the channel group */
  uint8 mask;
  /* Position of the group from LSB */
  uint8 offset;
  /* This shall be the port ID which the Channel group is defined. */
  Dio_PortType PortIndex;
} Dio_ChannelGroupType;

typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
}Dio_ConfigChannel;

/* Data Structure required for initializing the Dio Driver */
typedef struct
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
	Dio_PortType ports[DIO_CONFIGURED_PORTS];
	Dio_ChannelGroupType groups [DIO_CONFIGURED_GROUPS];
} Dio_ConfigType;


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Function for DIO read Channel API */
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);

/* Function for DIO write Channel API */
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);

/* Function for DIO read Port API */
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

/* Function for DIO write Port API */
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);

/* Function for DIO Initialization API */
void Dio_Init(const Dio_ConfigType * ConfigPtr);

#if (DIO_FLIP_CHANNEL_API == STD_ON)
/* Function for DIO flip channel API */
Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);
#endif

/* Function for DIO Get Version Info API */
#if (DIO_VERSION_INFO_API == STD_ON)
void Dio_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif



/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Dio and other modules */
extern const Dio_ConfigType Dio_Configuration;
#endif //__STD_TYPES_H__

