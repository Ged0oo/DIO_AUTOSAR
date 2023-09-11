 /******************************************************************************
 * @File :				platform_types.h                                       *
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

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H


/*
 * Id for the company in the AUTOSAR
 * for example GCC ID = 1000 :)
 */
#define PLATFORM_VENDOR_ID                          (1000U)


/*
 * Module Version 1.0.0
 */
#define PLATFORM_SW_MAJOR_VERSION                   (1U)
#define PLATFORM_SW_MINOR_VERSION                   (0U)
#define PLATFORM_SW_PATCH_VERSION                   (0U)


/*
 * AUTOSAR Version 4.0.3
 */
#define PLATFORM_AR_RELEASE_MAJOR_VERSION           (4U)
#define PLATFORM_AR_RELEASE_MINOR_VERSION           (0U)
#define PLATFORM_AR_RELEASE_PATCH_VERSION           (3U)


/*
 * CPU register type width
 */
#define CPU_TYPE_8                                  (8U)
#define CPU_TYPE_16                                 (16U)
#define CPU_TYPE_32                                 (32U)


/*
 * Platform type and endianess definitions, specific for ARM Cortex-M4F
 */
#define CPU_TYPE            CPU_TYPE_32


#define CPU_BIT_ORDER    LSB_FIRST        /*little endian bit ordering*/
#define CPU_BYTE_ORDER   LOW_BYTE_FIRST   /*little endian byte ordering*/


#define WORD_LENGTH_BITS      32u
#define WORD_LENGTH_BYTES     4u
#define MSB_FIRST             0u    /* big endian bit ordering */
#define LSB_FIRST			  1u    /* little endian bit ordering */


#define HIGH_BYTE_FIRST  0u    /* big endian byte ordering */
#define LOW_BYTE_FIRST   1u    /* little endian byte ordering */


#ifndef TRUE
#define TRUE   1u
#endif


#ifndef FALSE
#define FALSE  0u
#endif


#define ENABLE    1u
#define DISABLE   0u


typedef unsigned char         boolean;       /*        TRUE .. FALSE           */
typedef signed char           sint8;         /*        -128 .. +127            */
typedef unsigned char         uint8;         /*           0 .. 255             */
typedef signed short          sint16;        /*      -32768 .. +32767          */
typedef unsigned short        uint16;        /*           0 .. 65535           */
typedef signed long           sint32;        /* -2147483648 .. +2147483647     */
typedef unsigned long         uint32;        /*           0 .. 4294967295      */
typedef float                 float32;
typedef double                float64;
typedef signed char           sint8_t;         /*        -128 .. +127            */
typedef unsigned char         uint8_t;         /*           0 .. 255             */
typedef signed short          sint16_t;        /*      -32768 .. +32767          */
typedef signed long           sint32_t;        /* -2147483648 .. +2147483647     */
typedef unsigned long         uint32_t;        /*           0 .. 4294967295      */
typedef float                 float32_t;
typedef double                float64_t;


#ifdef PLATFORM_SUPPORT_SINT64_UINT64 /*Valid only for gnu and C99 */
typedef signed    long long  sint64;   /* -9223372036854775808 .. 9223372036854775807      */
typedef unsigned  long long  uint64;   /*                    0 .. 18446744073709551615     */

typedef signed    long long  sint64_t;   /* -9223372036854775808 .. 9223372036854775807      */
typedef unsigned  long long  uint64_t;   /*                    0 .. 18446744073709551615     */
#endif

#endif  /* PLATFORM_TYPES_H */
