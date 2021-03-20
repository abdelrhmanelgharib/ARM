/*
 *  Author: El-Gharib
 *  Created on: 6/3/2021
 *  Version: 1
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_



// typedef enum
// {
//     RCC_HSI=0,
//     RCC_HSE ,
//     RCC_PLL
// }clksystem;

typedef enum 
{
    RCC_HSION =0 ,
    RCC_HSIRDY ,

    RCC_HSEON =16 ,
    RCC_HSERDY ,
    RCC_HSEBYP ,
    RCC_CSSON ,

    RCC_PLLON =24 ,
    RCC_PLLRDY ,
    RCC_I2SON ,
    RCC_PLLI2SRDY ,
    RCC_PLLSAION ,
    RCC_PLLSAIRDY
}rcc_reg;


typedef enum
{
    RCC_AHB1=0,
    RCC_AHB2,
    RCC_APB1,
    RCC_APB2
}RCC_Bus;

typedef enum 
{
    RCC_GPIOA_EN=0 ,
    RCC_GPIOB_EN ,
    RCC_GPIOC_EN ,
    RCC_GPIOD_EN ,
    RCC_GPIOE_EN ,
    RCC_GPIOF_EN ,
    RCC_GPIOG_EN ,
    RCC_GPIOH_EN ,

    RCC_DMA1EN = 21 ,
    RCC_DMA2EN ,

    RCC_OTGHSEN = 29,
    RCC_OTGHSULPIEN

}gpio_type;


/* Function ProtoTypes */
void RCC_voidInit(void);
//void RCC_voidInit(clksystem Copy_ClkSystem);
void RCC_voidEnablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID);
void RCC_voidDisablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID);



#endif  /* RCC_INTERFACE_H_ */
