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

   // SCB_AIRCR = 
 
}   /* NVIC_voidInit */


/*     NVIC Enable Peripheral     */
void    NVIC_voidEnablePeripheral(u8 Copy_u8InterruptNumb)
{
    /* Range Check */
    if(Copy_u8InterruptNumb < 32)
    {
        /* ISER0 (0:31) */
        /* READ-Modify-Write */
        NVIC_ISER0 = (1 << Copy_u8InterruptNumb);
    }
    else if(Copy_u8InterruptNumb < 64)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ISER1 = (1 << (Copy_u8InterruptNumb - 32));
    }
    else if(Copy_u8InterruptNumb < 96)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ISER2 = (1 << (Copy_u8InterruptNumb - 64));
    }
    else if(Copy_u8InterruptNumb < 128)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ISER3 = (1 << (Copy_u8InterruptNumb - 96));
    }
    else
    {
        //#error "Invalid Interrupt Number"
    }
}   /* NVIC_voidEnablePeripheral */


void    NVIC_voidDisablePeripheral(u8 Copy_u8InterruptNumb)
{
    /* Range Check */
    if(Copy_u8InterruptNumb < 32)
    {
        /* ISER0 (0:31) */
        /* READ-Modify-Write */
        NVIC_ICER0 = (1 << Copy_u8InterruptNumb);
    }
    else if(Copy_u8InterruptNumb < 64)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ICER1 = (1 << (Copy_u8InterruptNumb - 32));
    }
    else if(Copy_u8InterruptNumb < 96)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ICER2 = (1 << (Copy_u8InterruptNumb - 64));
    }
    else if(Copy_u8InterruptNumb < 128)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ICER3 = (1 << (Copy_u8InterruptNumb - 96));
    }
    else
    {
        //#error "Invalid Interrupt Number"
    }
}   /* NVIC_voidDisablePeripheral */


void    NVIC_voidSetPendingFlag(u8 Copy_u8InterruptNumb)
{
    /* Range Check */
    if(Copy_u8InterruptNumb < 32)
    {
        /* ISER0 (0:31) */
        /* READ-Modify-Write */
        NVIC_ISPR0 = (1 << Copy_u8InterruptNumb);
    }
    else if(Copy_u8InterruptNumb < 64)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ISPR1 = (1 << (Copy_u8InterruptNumb - 32));
    }
    else if(Copy_u8InterruptNumb < 96)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ISPR2 = (1 << (Copy_u8InterruptNumb - 64));
    }
    else if(Copy_u8InterruptNumb < 128)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ISPR3 = (1 << (Copy_u8InterruptNumb - 96));
    }
    else
    {
        //#error "Invalid Interrupt Number"
    }
}   /* NVIC_voidSetPendingFlag */


void    NVIC_voidClearPendingFlag(u8 Copy_u8InterruptNumb)
{
      /* Range Check */
    if(Copy_u8InterruptNumb < 32)
    {
        /* ISER0 (0:31) */
        /* READ-Modify-Write */
        NVIC_ICPR0 = (1 << Copy_u8InterruptNumb);
    }
    else if(Copy_u8InterruptNumb < 64)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ICPR1 = (1 << (Copy_u8InterruptNumb - 32));
    }
    else if(Copy_u8InterruptNumb < 96)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ICPR2 = (1 << (Copy_u8InterruptNumb - 64));
    }
    else if(Copy_u8InterruptNumb < 128)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        NVIC_ICPR3 = (1 << (Copy_u8InterruptNumb - 96));
    }
    else
    {
        //#error "Invalid Interrupt Number"
    }/* NVIC_voidClearPendingFlag */
}


u8      NVIC_u8GetActiveFlag(u8 Copy_u8InterruptNumb)
{
    u8 Local_u8ActiveBit = 0xFF;
      /* Range Check */
    if(Copy_u8InterruptNumb < 32)
    {
        /* ISER0 (0:31) */
        /* READ-Modify-Write */
        Local_u8ActiveBit = GETBIT(NVIC_IABR0, Copy_u8InterruptNumb);
    }
    else if(Copy_u8InterruptNumb < 64)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        Local_u8ActiveBit = GETBIT(NVIC_IABR1, (Copy_u8InterruptNumb - 32));
    }
    else if(Copy_u8InterruptNumb < 96)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        Local_u8ActiveBit = GETBIT(NVIC_IABR2, (Copy_u8InterruptNumb - 64));
    }
    else if(Copy_u8InterruptNumb < 128)
    {
        /* ISER0 (32:63)        */
        /* READ-Modify-Write    */
        Local_u8ActiveBit = GETBIT(NVIC_IABR3, (Copy_u8InterruptNumb - 96));
    }
    else
    {
        //#error "Invalid Interrupt Number"
    }
    return Local_u8ActiveBit;
}   /* NVIC_u8GetActiveFlag */


void    NVIC_voidSetPriority(u8 Copy_u8Priority, u8 Copy_u8InterruptNumb)
{
    if(Copy_u8InterruptNumb < 97)
    {
        NVIC_IPRx[Copy_u8InterruptNumb] = (Copy_u8InterruptNumb << 4);
    }
    else
    {

    }
}   /* NVIC_voidSetPriority */
