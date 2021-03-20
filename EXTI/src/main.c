/* **************************************************************************************
 * main.c       																	                                    	*
 *																						                                          *
 *  Created on: Mar 17, 2021											                              				*
 *      Author: Elgharib															                                  *
 * **************************************************************************************/


#include <stdint.h>

#include "../Lib/STD_Types.h"
#include "../Lib/BIT_Math.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"

#include "NVIC_interface.h"
#include "EXTI_interface.h"



#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


void _delay_ms(u32 Copy_u32Time)
{
  for(u32 i = 0 ; i < Copy_u32Time ; i++)
  {
    for(u16 j = 0 ; j < 565 ; j++)
    {
      asm("NOP");
    }
  }
}

/* IRQ EXTI0 */
void Application(void)
{
  GPIO_voidSetPinValue(GPIOA, GPIO_PIN2, HIGH);
  _delay_ms(1000);
  GPIO_voidSetPinValue(GPIOA, GPIO_PIN2, LOW);
  _delay_ms(1000);
}

/* IRQ EXTI1 */
void Application_1_(void)
{
  GPIO_voidSetPinValue(GPIOA, GPIO_PIN3, HIGH);
  _delay_ms(1000);
  GPIO_voidSetPinValue(GPIOA, GPIO_PIN3, LOW);
  _delay_ms(1000);
}


int main(void)
{

  EXTI_voidSetCallBack(Application, Application_1_);

  RCC_voidInit();
  RCC_voidEnablePeripheralCLK(RCC_AHB1, RCC_GPIOA_EN);

  GPIO_voidSetPinDirection(GPIOA, GPIO_PIN1, GPIO_INPUT, GPIO_INPUT_FLOATING);
  GPIO_voidSetPinDirection(GPIOA, GPIO_PIN0, GPIO_INPUT, GPIO_INPUT_FLOATING);
  GPIO_voidSetPinDirection(GPIOA, GPIO_PIN2, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
  GPIO_voidSetPinDirection(GPIOA, GPIO_PIN3, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
  
  SETBIT(GPIOA_PUPDR,0);
  CLRBIT(GPIOA_PUPDR,1);
  SETBIT(GPIOA_PUPDR,2);
  CLRBIT(GPIOA_PUPDR,3);
  
  NVIC_voidInit();

  EXTI_voidInit();
  EXTI_voidEnableLine(EXTI_LINE0);
  EXTI_voidSetSignalLactch(EXTI_LINE0, EXTI_IOC);

  EXTI_voidEnableLine(EXTI_LINE1);
  EXTI_voidSetSignalLactch(EXTI_LINE1, EXTI_IOC);

  NVIC_voidSetPriority(0B0101, 6);
  NVIC_voidSetPriority(0B1010, 7);

  NVIC_voidEnablePeripheral(6);
  NVIC_voidEnablePeripheral(7);



    /* Loop forever */
  while (1)
  {
    
  }
  
}
