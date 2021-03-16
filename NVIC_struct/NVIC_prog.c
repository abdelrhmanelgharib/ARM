/* **************************************************************************************
 * NVIC_prog.c																		    *
 *																						*
 *  Created on: Mar 16, 2021															*
 *      Author: Elgharib																*
 ****************************************************************************************/


#include "STD_Types.h"
#include "BIT_Math.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"



void NVIC_voidInit(void)
{
    #ifndef SCB_BASE_ADD
    #define SCB_BASE_ADD        (0xE000ED00)
    #endif

    #ifndef SCB_AIRCR
    #define SCB_AIRCR       *((volatile u32*)(SCB_BASE_ADD + 0x0C))
    #endif

    SCB_AIRCR = NVIC_NO_GROUPS_SUB;
 
}   /* NVIC_voidInit */


/* **************************************************************************************
 *  Enable Interrupt for the given InterruptNumb                                        *
 * **************************************************************************************/
void    NVIC_voidEnablePeripheral(u8 Copy_u8InterruptNumb)
{
    if(Copy_u8InterruptNumb < 97)
    {
        NVIC -> NVIC_ISER[NVIC_REGNUM(Copy_u8InterruptNumb)] = 1 << NVIC_BITNUM(Copy_u8InterruptNumb);
    }
    else
    {
        /* Do Nothing */
    }
    
}   /* NVIC_voidEnablePeripheral */



/* **************************************************************************************
 *  Disable Interrupt for the given InterruptNumb                                       *
 * **************************************************************************************/
void    NVIC_voidDisablePeripheral(u8 Copy_u8InterruptNumb)
{
    if(Copy_u8InterruptNumb < 97)
    {
        NVIC -> NVIC_ICER[NVIC_REGNUM(Copy_u8InterruptNumb)] = 1 << NVIC_BITNUM(Copy_u8InterruptNumb);
    }
    else
    {
        /* Do Nothing */
    }
}   /* NVIC_voidDisablePeripheral */



/* **************************************************************************************
 *  Set Pending status of Interrupt                                                     *
 * **************************************************************************************/
void    NVIC_voidSetPendingFlag(u8 Copy_u8InterruptNumb)
{
    if(Copy_u8InterruptNumb < 97)
    {
        NVIC -> NVIC_ISPR[NVIC_REGNUM(Copy_u8InterruptNumb)] = 1 << NVIC_BITNUM(Copy_u8InterruptNumb);
    }
    else
    {
        /* Do Nothing */
    }
    
}   /* NVIC_voidSetPendingFlag */


void    NVIC_voidClearPendingFlag(u8 Copy_u8InterruptNumb)
{
    if(Copy_u8InterruptNumb < 97)
    {
        NVIC -> NVIC_ICPR[NVIC_REGNUM(Copy_u8InterruptNumb)] = 1 << NVIC_BITNUM(Copy_u8InterruptNumb);
    }
    else
    {
        /* Do Nothing */
    }
    
}


u8      NVIC_u8GetActiveFlag(u8 Copy_u8InterruptNumb)
{
    /* set active bit any value except 0 or 1 */
    u8 Local_u8ActiveBit = 0xFF;
    if(Copy_u8InterruptNumb < 97)
    {
        Local_u8ActiveBit = GETBIT(NVIC -> NVIC_IABR[NVIC_REGNUM(Copy_u8InterruptNumb)], NVIC_BITNUM(Copy_u8InterruptNumb));
    }
    else
    {
        /* Do Nothing */
    }

    return Local_u8ActiveBit;

}   /* NVIC_u8GetActiveFlag */


void    NVIC_voidSetPriority(u8 Copy_u8Priority, u8 Copy_u8InterruptNumb)
{
    if(Copy_u8InterruptNumb < 97)
    {
        NVIC -> NVIC_IPR[Copy_u8InterruptNumb] = (Copy_u8InterruptNumb << 4);
    }
    else
    {
        /* Do Nothing */
    }
}   /* NVIC_voidSetPriority */
