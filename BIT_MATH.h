 /******************************************************************************
 * @File :				Common_Macros.h                                        *
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

/* =============================================================================
 * 							    FILE GUARD
 * ============================================================================*/
#ifndef COMMON_MACROS
#define COMMON_MACROS

/* =============================================================================
 * 							    MACROS
 * ============================================================================*/
#define GET_BIT(_REG,_BIT) 			((_REG&(1<<_BIT))>>_BIT)
#define SET_BIT(_REG,_BIT) 			(_REG|=(1<<_BIT))
#define CLEAR_BIT(_REG,_BIT) 		(_REG&=(~(1<<_BIT)))
#define TOGGLE_BIT(_REG,_BIT) 		(_REG^=(1<<_BIT))

#define ROR(_REG,num) 				( _REG = (_REG>>num) | (_REG << ((sizeof(_REG) * 8)-num)) )
#define ROL(_REG,num) 				( _REG = (_REG<<num) | (_REG >> ((sizeof(_REG) * 8)-num)) )
#define BIT_IS_SET(_REG,_BIT) 		( _REG & (1<<_BIT) )
#define BIT_IS_CLEAR(_REG,_BIT) 	( !(_REG & (1<<_BIT)) )

#endif
