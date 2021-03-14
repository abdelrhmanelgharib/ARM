/* **************************************************************************************
 * GPIO_prog.c																			*
 *																						*
 *  Created on: Mar 8, 2021																*
 *      Author: Elgharib																*
 * **************************************************************************************/

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_


typedef enum
{
    GPIOA = 0 ,
    GPIOB ,
    GPIOC ,
    GPIOD ,
    GPIOE ,
    GPIOF ,
    GPIOG ,
    GPIOH

}gpio_enumtype;


typedef enum
{
	GPIO_PIN0 = 0,
	GPIO_PIN1    ,
	GPIO_PIN2    ,
	GPIO_PIN3    ,
	GPIO_PIN4    ,
	GPIO_PIN5    ,
	GPIO_PIN6    ,
	GPIO_PIN7    ,
	GPIO_PIN8    ,
	GPIO_PIN9    ,
	GPIO_PIN10   ,
	GPIO_PIN11   ,
	GPIO_PIN12   ,
	GPIO_PIN13   ,
	GPIO_PIN14   ,
	GPIO_PIN15
}gpio_enumpins;


typedef enum
{
	GPIO_INPUT = 0,
	GPIO_OUTPUT ,
	GPIO_ALTERNATE_FUNC ,
	GPIO_ANALOGE
}gpio_enummode;


typedef enum
{
	GPIO_OUTPUT_PUSHPULL = 0,
	GPIO_OUTPUT_OPENDRAIN
}gpio_enumOTR;

typedef enum
{
	LOW = 0,
	HIGH
}value_enumType;


void GPIO_voidSetPinDirection(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR);
void GPIO_voidSetPortDirection(gpio_enumtype Copy_enumGPIOType, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR);
void GPIO_voidSetPinValue(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID, value_enumType Copy_enumPINValue);
void GPIO_voidSetPortValue(gpio_enumtype Copy_enumGPIOType, value_enumType Copy_enumPINValue);
value_enumType GPIO_enumGetPinvalue(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID);


#endif /* GPIO_INTERFACE_H_ */
