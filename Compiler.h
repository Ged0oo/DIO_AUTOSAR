 /******************************************************************************
 * @File :				Compiler.c                                             *
 * @Version :			1.0.0                                                  *
 * @Module: 			Dio                                                    *
 * @brief : 			Header file for Dio Module.                            *
 * @Author : 			Mohamed Nagy                                           *
 ******************************************************************************/

 /******************************************************************************
 * Project :			AUTOSAR 4.4.0 MCAL 								       *
 * Platform :			AVR                 								   *
 * Board : 				ATMEGA32       								           *
 * Autosar Version :	4.4.0               								   *
 * SW Version : 		1.0.0               								   *
 ******************************************************************************/

#ifndef COMPILER_H
#define COMPILER_H


/*
 * Id for the company in the AUTOSAR
 * for example GCC's ID = 1000
 */
#define COMPILER_VENDOR_ID                                  (1000U)


/*
 * Module Version 1.0.0
 */
#define COMPILER_SW_MAJOR_VERSION                           (1U)
#define COMPILER_SW_MINOR_VERSION                           (0U)
#define COMPILER_SW_PATCH_VERSION                           (0U)


/*
 * AUTOSAR Version 4.4.0
 */
#define COMPILER_AR_RELEASE_MAJOR_VERSION                   (4U)
#define COMPILER_AR_RELEASE_MINOR_VERSION                   (4U)
#define COMPILER_AR_RELEASE_PATCH_VERSION                   (0U)


/*
 * The memory class is used for the declaration of local pointers
 */
#define AUTOMATIC 


/* The memory class is used within type definitions,
 * where no memory qualifier can be specified
 */
#define TYPEDEF


/*
 * This is used to define the void pointer to zero definition
 */
#define NULL_PTR          ((void *)0)


/*
 * This is used to define the abstraction of compiler keyword inline
 */
#define INLINE            inline


/*
 *  This is used to define the local inline function
 */
#define LOCAL_INLINE      static inline


/*
 * This is used to define the abstraction of compiler keyword static
 */
#define STATIC            static


#endif
