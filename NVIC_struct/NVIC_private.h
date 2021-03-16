/* **************************************************************************************
 * NVIC_private.h																		*
 *																						*
 *  Created on: Mar 16, 2021															*
 *      Author: Elgharib																*
 ****************************************************************************************/




#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

/**************************************NVIC_BASE_ADDRESS**********************************/
#define NVIC_BASE_ADD       (0xE000E100)


typedef struct
{   /* Interrupt set-enable register */
    volatile u32 NVIC_ISER[8];

    /* Interrupt clear-enable register */
    volatile u32 NVIC_ICER[8];

    /* Interrupt set-pending register */
    volatile u32 NVIC_ISPR[8];

    /* Interrupt clear-pending register */
    volatile u32 NVIC_ICPR[8];

    /* Interrupt active bit register */
    volatile u32 NVIC_IABR[8];

    /* Interrupt priority register */
    volatile u8 NVIC_IPR[240];

}NVIC_Type_t;

#define NVIC    ((NVIC_Type_t*)(NVIC_BASE_ADD))


#define NVIC_REGNUM(x)          ((x) / (32))
#define NVIC_BITNUM(x)          ((x) % (32))    

/****************************************************************************************
 *                             Interrupt Priority grouping                              *
 ****************************************************************************************/
#define _16_GROUPS_0_SUB      0x05FA0300
#define  _8_GROUPS_2_SUB      0X05FA0400
#define  _4_GROUPS_4_SUB      0X05FA0500
#define  _2_GROUPS_8_SUB      0X05FA0600
#define  _0_GROUPS_16_SUB     0X05FA0700


#define NVIC_IPRx           ((volatile u8*)(NVIC_BASE_ADD + 0x400))

#endif /* NVIC_PRIVATE_H_ */
