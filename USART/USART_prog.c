/* **************************************************************************************
 * USART_prog.c																			*
 *																						*
 *  Created on: Mar 18, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/


#include "STD_Types.h"
#include "BIT_Math.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"

#include "USART_interface.h"
#include "USART_private.h"
#include "USART_config.h"


void USART_voidInit(void)
{
	/* Enable clk for usart2 */
	RCC_voidEnablePeripheralCLK(RCC_APB1, 17);

	/* RCC GPIOA ENABLE */
	RCC_voidEnablePeripheralCLK(RCC_AHB1, RCC_GPIOA_EN);


	/* set direction of tx and rx  */
	GPIO_voidSetPinDirection(GPIOA, GPIO_PIN2, GPIO_ALTERNATE_FUNC, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(GPIOA, GPIO_PIN3, GPIO_ALTERNATE_FUNC, GPIO_OUTPUT_PUSHPULL);

	GPIO_voidSetAltFunction(GPIOA, GPIO_PIN2, AF7);
	GPIO_voidSetAltFunction(GPIOA, GPIO_PIN3, AF7);

	/* sets the baud rate = 9600 using HSI = 16MHz, OVER8 = 0 */
	USART2 -> BRR = 0x0683;

	/* USART Configuration No Parity, No Interrupt */

	/* Receive Enable */
	SETBIT(USART2 -> CR1, 2);

	/* Transmit Enable */
	SETBIT(USART2 -> CR1, 3);

	/* 	1 Start bit, 8 Data bits, n Stop bit 	 */
	CLRBIT(USART2->CR1,12);

	/*	 1 stop bit		*/
	CLRBIT(USART2->CR2,12);
	CLRBIT(USART2->CR2,13);

	/* USART START */
	SETBIT(USART2 -> CR1, 13);

}

void USRAT_voidTransmit(u8 Copy_u8TransmitData)
{
	u32 Local_u32TimeOut = 0;
	USART2 -> DR = Copy_u8TransmitData;

	/* Polling */
	while( (GETBIT(USART2 -> SR, 6) == 0) && (Local_u32TimeOut < 100000000))
	{
		Local_u32TimeOut++;
	}

}


u8 USRAT_u8Receive(void)
{
	u32 Local_u32TimeOut = 0;
	/* Polling */
	while( (GETBIT(USART2 -> SR, 5) == 0) && (Local_u32TimeOut < 100000000))
	{
		Local_u32TimeOut++;
	}

	return USART2 -> DR;
}



