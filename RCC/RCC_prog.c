/*
 *  Author: El-Gharib
 *  Created on: 6/3/2021
 *  Version: 1
 */

#include "STD_Types.h"
#include "BIT_Math.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidInit(clksystem Copy_ClkSystem)
{
    switch (Copy_ClkSystem)
    {
        case RCC_HSEON: SETBIT(RCC_CR, RCC_HSEON); break;
    }
}

void RCC_voidEnablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID)
{
    switch (Copy_u8BusID)
    {
        case RCC_AHB1: SETBIT(RCC_AHB1ENR, Copy_u8PerID); break;
        case RCC_AHB2: SETBIT(RCC_AHB2ENR, Copy_u8PerID); break;
        case RCC_APP1: SETBIT(RCC_APB1ENR, Copy_u8PerID); break;
        case RCC_APP2: SETBIT(RCC_APB2ENR, Copy_u8PerID); break;
    }
}

void RCC_voidDisablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID)
{
    switch (Copy_u8BusID)
    {
        case RCC_AHB1: CLRBIT(RCC_AHB1ENR, Copy_u8PerID); break;
        case RCC_AHB2: CLRBIT(RCC_AHB2ENR, Copy_u8PerID); break;
        case RCC_APP1: CLRBIT(RCC_APB1ENR, Copy_u8PerID); break;
        case RCC_APP2: CLRBIT(RCC_APB2ENR, Copy_u8PerID); break;
    }
}