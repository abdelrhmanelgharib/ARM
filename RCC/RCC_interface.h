/*
 *  Author: El-Gharib
 *  Created on: 6/3/2021
 *  Version: 1
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_



void RCC_voidInit(clksystem Copy_ClkSystem);
void RCC_voidEnablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID);
void RCC_voidDisablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID);

// typedef enum
// {
//     RCC_HSION=0,
//     RCC_HSEON,
//     RCC_PPLON
// }clksystem;

typedef enum
{
    RCC_AHB1=0,
    RCC_AHB2,
    RCC_APP1,
    RCC_APP2
}RCC_Bus;

typedef enum 
{
    GPIOA_EN=0 ,
    GPIOB_EN ,
    GPIOC_EN ,
    GPIOD_EN ,
    GPIOE_EN ,
    GPIOF_EN ,
    GPIOG_EN ,
    GPIOH_EN
}gpio_type;

#endif  /* RCC_INTERFACE_H_ */