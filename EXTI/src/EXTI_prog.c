/* **************************************************************************************
 * EXTI_prog.c  																		*
 *																						*
 *  Created on: Mar 17, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/

#include "../Lib/STD_Types.h"
#include "../Lib/BIT_Math.h"

#include "RCC_interface.h"

#include "EXTI_interface.h"
#include "EXTI_private.h"
#include "EXTI_config.h"


#ifndef 	NULL
#define 	NULL	(void*)0
#endif
static void(*EXTI_pfCallBack)(void)  = NULL;
static void(*EXTI_pfCallBack1)(void) = NULL;


void EXTI_voidInit(void)
{
    /* Enable RCC for SYS configuration */
    RCC_voidEnablePeripheralCLK(RCC_APB2, 14);
	/*          For All Lines:
	 * 			1-	disable
	 * 			2-	clear all flags
	 *                                          */
	EXTI -> IMR = 0;                    // all lines disabled
	EXTI -> PR  = 0XFFFFFFFF;           //all flags cleared

}   /* EXTI_voidInit */


void EXTI_voidEnableLine(u8 Copy_u8LineNo)
{
    /*    Range check    */
	if(Copy_u8LineNo <16)
	{
		SETBIT(EXTI -> IMR, Copy_u8LineNo);
	}
}   /* EXTI_voidEnableLine */


void EXTI_voidDisableLine(u8 Copy_u8LineNo)
{
	/*        Range check    */
	if(Copy_u8LineNo <16)
	{
		CLRBIT(EXTI -> IMR, Copy_u8LineNo);
	}
}   /* EXTI_voidDisableLine */


void EXTI_voidSoftwareInterrupt(u8 Copy_u8LineNo)
{
	/*task*/
}   /* EXTI_voidSoftwareInterrupt */

/* change sense mode in run time */
void EXTI_voidSetSignalLactch(u8 Copy_u8LineNo, u8 Copy_u8EdgeTrigger)
{
	/*        Range check    */
	if(Copy_u8LineNo <16)
	{
		switch(Copy_u8EdgeTrigger)
		{
			case EXTI_RISING  : SETBIT(EXTI -> RTSR, Copy_u8LineNo);
								CLRBIT(EXTI -> FTSR, Copy_u8LineNo);
			break;

			case EXTI_FALLING : SETBIT(EXTI -> FTSR, Copy_u8LineNo);
								CLRBIT(EXTI -> RTSR, Copy_u8LineNo);
			break;

			case EXTI_IOC     : SETBIT(EXTI -> RTSR, Copy_u8LineNo);
							    SETBIT(EXTI -> FTSR, Copy_u8LineNo);
			break;

		}
	}
}   /* EXTI_voidSetSignalLactch */


void EXTI_voidSetCallBack(void (*pf)(void), void (*pf1)(void))
{
	if(pf !=NULL)
	{
		EXTI_pfCallBack = pf;

	}
	if(pf1 !=NULL)
	{
		EXTI_pfCallBack1 = pf1;
	}
}	/* EXTI_voidSetCallBack */


void EXTI0_IRQHandler(void)
{
	EXTI_pfCallBack();
}

void EXTI1_IRQHandler(void)
{
	EXTI_pfCallBack1();
}