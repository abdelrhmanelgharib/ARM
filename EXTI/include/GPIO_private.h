/* **************************************************************************************
 * GPIO_private.h																		*
 *																						*
 *  Created on: Mar 8, 2021																*
 *      Author: Elgharib																*
 * **************************************************************************************/

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

#define GPIOA_BASE_ADDRESS		((u32)(0x40020000))

#define GPIOA_MODER				*((u32*)(GPIOA_BASE_ADDRESS + 0x00))
#define GPIOA_OTYPER			*((u32*)(GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_IDR				*((u32*)(GPIOA_BASE_ADDRESS + 0x10))
#define GPIOA_ODR				*((u32*)(GPIOA_BASE_ADDRESS + 0x14))
#define GPIOA_BSRR				*((u32*)(GPIOA_BASE_ADDRESS + 0x18))
#define GPIOA_PUPDR				*((u32*)(GPIOA_BASE_ADDRESS + 0x0C))

#define GPIOB_BASE_ADDRESS		((u32)(0x40020400))

#define GPIOB_MODER				*((u32*)(GPIOB_BASE_ADDRESS + 0x00))
#define GPIOB_OTYPER			*((u32*)(GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_IDR				*((u32*)(GPIOB_BASE_ADDRESS + 0x10))
#define GPIOB_ODR				*((u32*)(GPIOB_BASE_ADDRESS + 0x14))
#define GPIOB_BSRR				*((u32*)(GPIOB_BASE_ADDRESS + 0x18))
#define GPIOB_PUPDR				*((u32*)(GPIOB_BASE_ADDRESS + 0x0C))



#define GPIOC_BASE_ADDRESS		((u32)(0x40020800))

#define GPIOC_MODER				*((u32*)(GPIOC_BASE_ADDRESS + 0x00))
#define GPIOC_OTYPER			*((u32*)(GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_IDR				*((u32*)(GPIOC_BASE_ADDRESS + 0x10))
#define GPIOC_ODR				*((u32*)(GPIOC_BASE_ADDRESS + 0x14))
#define GPIOC_BSRR				*((u32*)(GPIOC_BASE_ADDRESS + 0x18))
#define GPIOC_PUPDR				*((u32*)(GPIOB_BASE_ADDRESS + 0x0C))

#define GPIOD_BASE_ADDRESS		((u32)(0X40020C00))

#define GPIOD_MODER				*((u32*)(GPIOD_BASE_ADDRESS + 0x00))
#define GPIOD_OTYPER			*((u32*)(GPIOD_BASE_ADDRESS + 0x04))
#define GPIOD_IDR				*((u32*)(GPIOD_BASE_ADDRESS + 0x10))
#define GPIOD_ODR				*((u32*)(GPIOD_BASE_ADDRESS + 0x14))
#define GPIOD_BSRR				*((u32*)(GPIOD_BASE_ADDRESS + 0x18))
#define GPIOD_PUPDR				*((u32*)(GPIOD_BASE_ADDRESS + 0x0C))



#define GPIOE_BASE_ADDRESS		((u32)(0x40021000))

#define GPIOE_MODER				*((u32*)(GPIOE_BASE_ADDRESS + 0x00))
#define GPIOE_OTYPER			*((u32*)(GPIOE_BASE_ADDRESS + 0x04))
#define GPIOE_IDR			  	*((u32*)(GPIOE_BASE_ADDRESS + 0x10))
#define GPIOE_ODR				*((u32*)(GPIOE_BASE_ADDRESS + 0x14))
#define GPIOE_BSRR				*((u32*)(GPIOE_BASE_ADDRESS + 0x18))
#define GPIOE_PUPDR				*((u32*)(GPIOE_BASE_ADDRESS + 0x0C))


#define GPIOF_BASE_ADDRESS		((u32)(0x40021400))

#define GPIOF_MODER				*((u32*)(GPIOF_BASE_ADDRESS + 0x00))
#define GPIOF_OTYPER			*((u32*)(GPIOF_BASE_ADDRESS + 0x04))
#define GPIOF_IDR				*((u32*)(GPIOF_BASE_ADDRESS + 0x10))
#define GPIOF_ODR				*((u32*)(GPIOF_BASE_ADDRESS + 0x14))
#define GPIOF_BSRR				*((u32*)(GPIOF_BASE_ADDRESS + 0x18))
#define GPIOF_PUPDR				*((u32*)(GPIOF_BASE_ADDRESS + 0x0C))


#define GPIOG_BASE_ADDRESS		((u32)(0x40021800))

#define GPIOG_MODER				*((u32*)(GPIOG_BASE_ADDRESS + 0x00))
#define GPIOG_OTYPER			*((u32*)(GPIOG_BASE_ADDRESS + 0x04))
#define GPIOG_IDR			    *((u32*)(GPIOG_BASE_ADDRESS + 0x10))
#define GPIOG_ODR				*((u32*)(GPIOG_BASE_ADDRESS + 0x14))
#define GPIOG_BSRR				*((u32*)(GPIOG_BASE_ADDRESS + 0x18))
#define GPIOG_PUPDR				*((u32*)(GPIOG_BASE_ADDRESS + 0x0C))


#define GPIOH_BASE_ADDRESS		((u32)(0x40021C00))

#define GPIOH_MODER				*((u32*)(GPIOH_BASE_ADDRESS + 0x00))
#define GPIOH_OTYPER			*((u32*)(GPIOH_BASE_ADDRESS + 0x04))
#define GPIOH_IDR				*((u32*)(GPIOH_BASE_ADDRESS + 0x10))
#define GPIOH_ODR				*((u32*)(GPIOH_BASE_ADDRESS + 0x14))
#define GPIOH_BSRR				*((u32*)(GPIOH_BASE_ADDRESS + 0x18))
#define GPIOH_PUPDR				*((u32*)(GPIOH_BASE_ADDRESS + 0x0C))


#define GPIO_FULL_OUTPUT                 0x55555555
#define GPIO_FULL_OUTPUT_PUSHPULL        0x0000
#define GPIO_FULL_OUTPUT_OPENDRAIN       0xFFFF
#define GPIO_FULL_MODER_AF               0xAAAAAAAA
#define GPIO_FULL_HIGH                   0xFFFF
#define GPIO_FULL_INPUT                  0x0000


#endif /* GPIO_PRIVATE_H_ */
