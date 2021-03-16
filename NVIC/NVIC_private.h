/* **************************************************************************************
 * NVIC_private.h																		*
 *																						*
 *  Created on: Mar 16, 2021															*
 *      Author: Elgharib																*
 ****************************************************************************************/




#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

#define NVIC_BASE_ADD       (0xE000E100)


/****************************************************************************************
 *                             Interrupt set-enable register                            *
 ****************************************************************************************/
#define NVIC_ISER0          *((volatile u32*)(NVIC_BASE_ADD + 0x000))
#define NVIC_ISER1          *((volatile u32*)(NVIC_BASE_ADD + 0x004))
#define NVIC_ISER2          *((volatile u32*)(NVIC_BASE_ADD + 0x008))
#define NVIC_ISER3          *((volatile u32*)(NVIC_BASE_ADD + 0x0C))



/****************************************************************************************
 *                             Interrupt clear-enable register                          *
 ****************************************************************************************/
#define NVIC_ICER0          *((volatile u32*)(NVIC_BASE_ADD + 0x080))
#define NVIC_ICER1          *((volatile u32*)(NVIC_BASE_ADD + 0x084))
#define NVIC_ICER2          *((volatile u32*)(NVIC_BASE_ADD + 0x088))
#define NVIC_ICER3          *((volatile u32*)(NVIC_BASE_ADD + 0x08C))



/****************************************************************************************
 *                             Interrupt set-pending register                           *
 ****************************************************************************************/
#define NVIC_ISPR0          *((volatile u32*)(NVIC_BASE_ADD + 0x100))
#define NVIC_ISPR1          *((volatile u32*)(NVIC_BASE_ADD + 0x104))
#define NVIC_ISPR2          *((volatile u32*)(NVIC_BASE_ADD + 0x108))
#define NVIC_ISPR3          *((volatile u32*)(NVIC_BASE_ADD + 0x10C))


/****************************************************************************************
 *                             Interrupt clear-pending register                         *
 ****************************************************************************************/
#define NVIC_ICPR0          *((volatile u32*)(NVIC_BASE_ADD + 0x180))
#define NVIC_ICPR1          *((volatile u32*)(NVIC_BASE_ADD + 0x184))
#define NVIC_ICPR2          *((volatile u32*)(NVIC_BASE_ADD + 0x188))
#define NVIC_ICPR3          *((volatile u32*)(NVIC_BASE_ADD + 0x18C))


/****************************************************************************************
 *                             Interrupt active bit register                            *
 ****************************************************************************************/
#define NVIC_IABR0          *((volatile u32*)(NVIC_BASE_ADD + 0x200))
#define NVIC_IABR1          *((volatile u32*)(NVIC_BASE_ADD + 0x204))
#define NVIC_IABR2          *((volatile u32*)(NVIC_BASE_ADD + 0x208))
#define NVIC_IABR3          *((volatile u32*)(NVIC_BASE_ADD + 0x20C))


/****************************************************************************************
 *                             Interrupt priority register                              *
 ****************************************************************************************/
#define NVIC_IPR0           *((volatile u32*)(NVIC_BASE_ADD + 0x280))
#define NVIC_IPR1           *((volatile u32*)(NVIC_BASE_ADD + 0x284))
#define NVIC_IPR2           *((volatile u32*)(NVIC_BASE_ADD + 0x288))
#define NVIC_IPR3           *((volatile u32*)(NVIC_BASE_ADD + 0x28C))


/****************************************************************************************
 *                             Interrupt Priority grouping                              *
 ****************************************************************************************/
#define _16_GROUPS_0_SUB     0x05FA0300
#define _8_GROUPS_2_SUB      0X05FA0400
#define _4_GROUPS_4_SUB      0X05FA0500
#define _2_GROUPS_8_SUB      0X05FA0600
#define _0_GROUPS_16_SUB     0X05FA0700


#define NVIC_IPRx           ((volatile u8*)(NVIC_BASE_ADD + 0x400))

#endif /* NVIC_PRIVATE_H_ */
