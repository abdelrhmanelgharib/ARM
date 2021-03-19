/* **************************************************************************************
 * GPIO_interface.h																		*
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
	GPIO_OUTPUT_OPENDRAIN ,
	GPIO_INPUT_FLOATING
}gpio_enumOTR;

typedef enum
{
	LOW = 0,
	HIGH
}value_enumType;



#define AF0		0
#define AF1		1
#define AF2		2
#define AF3		3
#define AF4		4
#define AF5		5
#define AF6		6
#define AF7		7
#define AF8		8
#define AF9		9
#define AF10	10
#define AF11	11
#define AF12	12
#define AF13	13
#define AF15	14
#define AF16	15

void GPIO_voidSetPinDirection(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR);
void GPIO_voidSetPortDirection(gpio_enumtype Copy_enumGPIOType, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR);
void GPIO_voidSetPinValue(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID, value_enumType Copy_enumPINValue);
void GPIO_voidSetPortValue(gpio_enumtype Copy_enumGPIOType, value_enumType Copy_enumPINValue);
value_enumType GPIO_enumGetPinvalue(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID);
void GPIO_voidSetAltFunction(u8 Copy_u8PortID,u8 Copy_u8PinID ,u8 Copy_u8AltValue);

#endif /* GPIO_INTERFACE_H_ */
