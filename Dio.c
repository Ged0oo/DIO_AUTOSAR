 /******************************************************************************
 * @File :				Dio.c
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
 * @brief Include DIO.h Abstraction
 */
#include "DIO.h"

 /*
 * @brief Include MemMap.h Abstraction
 */
#include "MemMap.h"

#if (DIO_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
/* AUTOSAR Version checking between Det and Dio Modules */
#if ( (DET_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION) || (DET_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION) )
  #error "The AR version of Dio.h and Det.h does not match the expected version"
#endif
#endif



/* ==============================================================================================================
 * 							 GLOBAL VARIABLES
 * ==============================================================================================================*/
/* @struct Dio_ConfigType: * This structure defines the configuration for the DIO module.
 *						   * It contains an array of pointers to Dio_ConfigPin structures.
 * @member channels[DIO_CONFIGURED_CHANNLES]: * This array holds pointers to individual pin configurations.
 *										  * The size of the array is DIO_CONFIGURED_CHANNLES,
 *											which represents the number of configured channels.
 *
 * @struct Dio_ConfigPin: This structure represents the configuration of an individual pin within the DIO module.
 * @member Port_Id: This member stores the ID of the port to which the pin belongs.
 * @member Pin_Id: This member stores the ID of the pin.
 * @member dir: This member indicates the direction of the pin, whether it's an input or an output.
 * @member level: This member indicates the initial level (high or low) of the pin.


 * This is a static pointer to a constant Dio_ConfigType structure.
 * It will be used to store the configuration data for the DIO module.
 */
STATIC const Dio_ConfigType *Dio_PortChannels = NULL_PTR;

/* This is a static variable that keeps track of the initialization status of the DIO module.
 * It's initialized to DIO_NOT_INITIALIZED
 */
STATIC uint8 Dio_Status = DIO_NOT_INITIALIZED;


/**
 * @brief Extracts the pin number from the given ChannelId.
 * @param ChannelId The ID of the pin.
 * @return The extracted pin number.
 *
 * This function extracts the pin number from the given ChannelId based on certain conditions.
 */
STATIC uint8 getChannelNum(Dio_ChannelType ChannelId)
{

}

/* ==============================================================================================================
 * 												 APIs
 * ==============================================================================================================*/

/*==================================================================================
 * Service Name: Dio_Init
 * Service ID[hex]: 0x10
 * Sync/Async: Synchronous
 * Reentrancy: Non-reentrant, meaning it's not designed to be safely called simultaneously from multiple execution contexts.
 * Parameters (in): ConfigPtr - Pointer to post-build configuration data.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: None
 * Description: Function to Initialize the Dio module.
 *===================================================================================*/
void Dio_Init(const Dio_ConfigType *ConfigPtr)
{

}


/* =============================================================================
 * Service Name: Dio_SetupChannelDirection
 * Service ID[hex]: None
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): Port_Id - ID of DIO port.
 * 				    Channel_Id - ID of DIO pin.
 *                  Direction - Value to be written.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: None
 * Description: Function to set the direction of a channel.
 * =============================================================================*/
void Dio_SetupChannelDirection(Dio_PortType Port_Id, Dio_ChannelType Channel_Id, Dio_Direction dir)
{

}


/* =============================================================================
 * Service Name: Dio_SetupPortDirection
 * Service ID[hex]: None
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): Port_Id - ID of DIO port.
 *                  Direction - Value to be written.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: None
 * Description: Function to set the direction of a port.
 * =============================================================================*/
void Dio_SetupPortDirection(Dio_PortType Port_Id, Dio_Direction dir)
{

}


/* =============================================================================
 * Service Name: Dio_WriteChannel
 * Service ID[hex]: 0x01
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): Port_Id - ID of DIO port.
 * 				    Channel_Id - ID of DIO pin.
 *                  Level - Value to be written.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: None
 * Description: Function to set a level of a channel.
 * =============================================================================*/
void Dio_WriteChannel(Dio_PortType Port_Id, Dio_ChannelType Channel_Id,Dio_PinLevelType level)
{

}


/* =============================================================================
 * Service Name: Dio_ReadChannel
 * Service ID[hex]: 0x00
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): Port_Id - ID of DIO port.
 * 				    Channel_Id - ID of DIO pin.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: LevelType
 * 				 STD_HIGH The physical level of the corresponding Pin is STD_HIGH
 * 				 STD_LOW The physical level of the corresponding Pin is STD_LOW
 * Description: Function to Return the value of the specified DIO channel.
 * =============================================================================*/
Dio_LevelType Dio_ReadChannel(Dio_PortType Port_Id, Dio_ChannelType Channel_Id)
{

}


/* =============================================================================
 * Service name: Dio_WritePort
 * Service ID[hex]: 0x03
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * PortId ID of DIO Port Parameters (in): Level Value to be written
 * Parameters(inout):None
 * Parameters (out): None
 * Return value: None
 * Description: Service to set a value of the port
 * =============================================================================*/
void Dio_WritePort(Dio_PortType Port_Id, Dio_PinLevelType level)
{

}


/* =============================================================================
 * Service Name: Dio_ReadPort
 * Service ID[hex]: 0x02
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): Port_Id - ID of DIO port.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: Dio_PortLevelType Level of all channels of that port
 * Description: Function to Returns the level of all channels of that port.
 * =============================================================================*/
Dio_PortLevelType Dio_ReadPort(Dio_PortType Port_Id)
{

}


/* =============================================================================
 * Service Name:  Dio_FlipChannel
 * Service ID[hex]: 0x11
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): Port_Id - ID of DIO port.
 * 				    Channel_Id - ID of DIO pin.
 * Parameters (input): None
 * Parameters (out): None
 * Return value: None
 * Description: Service to flip (change from 1 to 0 or from 0 to 1) the level of a channel and return
 *              the level of the channel after flip.
 * =============================================================================*/
void  Dio_FlipChannel(Dio_PortType Port_Id, Dio_ChannelType Channel_Id)
{

}


/* =============================================================================
 * Service Name: Dio_GetVersionInfo
 * Service ID[hex]: 0x12
 * Sync/Async: Synchronous
 * Reentrancy: Reentrant
 * Parameters (in): None
 * Parameters (input): None
 * Parameters (out): VersionInfo - Pointer to where to store the version information of this module.
 * Return value: None
 * Description: Function to get the version information of this module.
 * =============================================================================*/


#if (DIO_VERSION_INFO_API == STD_ON)
void Dio_GetVersionInfo(Std_VersionInfoType *versioninfo)
{

}
#endif
