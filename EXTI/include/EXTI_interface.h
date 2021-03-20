/* **************************************************************************************
 * EXTI_interface.h																		*
 *																						*
 *  Created on: Mar 17, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/


#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_



#define  EXTI_LINE0            0
#define  EXTI_LINE1            1
#define  EXTI_LINE2            2
#define  EXTI_LINE3            3
#define  EXTI_LINE4            4
#define  EXTI_LINE5            5
#define  EXTI_LINE6            6
#define  EXTI_LINE7            7
#define  EXTI_LINE8            8
#define  EXTI_LINE9            9
#define  EXTI_LINE10           10
#define  EXTI_LINE11           11
#define  EXTI_LINE12           12
#define  EXTI_LINE13           13
#define  EXTI_LINE14           14
#define  EXTI_LINE15           15

#define EXTI_RISING            0
#define EXTI_FALLING           1
#define EXTI_IOC               2





void EXTI_voidInit(void);
void EXTI_voidEnableLine(u8 Copy_u8LineNmb);
void EXTI_voidDisableLine(u8 Copy_u8LineNmb);
void EXTI_voidSoftwareInterrupt(u8 Copy_u8LineNmb);
void EXTI_voidSetSignalLactch(u8 Copy_u8LineNmb, u8 Copy_u8EdgeTrigger);
void EXTI_voidSetCallBack(void (*pf)(void), void (*pf1)(void));



#endif