/* **************************************************************************************
 * GPIO_prog.c																			*
 *																						*
 *  Created on: Mar 8, 2021																*
 *      Author: Elgharib																*
 * **************************************************************************************/

#include "../Inc/STD_Types.h"
#include "../Inc/BIT_Math.h"


#include "../Inc/GPIO_interface.h"
#include "../Inc/GPIO_private.h"
#include "../Inc/GPIO_config.h"

/* *************************************************************************************
 * in this function initialize port and pin direction and mode of pin					*
 * GPIO  : GPIOA - GPIOB - GPIOC - GPIOD - GPIOE - GPIOF - GPIOG - GPIOH				*
 * PINID : PIN0 ... PIN15																*
 * PIN Mode : GPIO_OUTPUT - GPIO_INPUT - GPIO_ALTERNATE_FUNC - GPIO_ANALOGE				*
 * PIN MOde : GPIO_OUTPUT_PUSHPULL - GPIO_OUTPUT_OPENDRAIN								*
 * **************************************************************************************/
void GPIO_voidInit(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGPIOPINID, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR)
{
	switch(Copy_enumGPIOType)
	{
		case GPIOA:
			
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOA_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOA_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOA_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOA_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}
		
		break;

		case GPIOB:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOB_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOB_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOB_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOB_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}
		break;

		case GPIOC:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOC_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOC_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOC_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOC_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}

		break;

		case GPIOD:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOD_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOD_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOD_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOB_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}
		
		break;

		case GPIOE:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOE_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOE_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOE_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOE_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}
		
		break;

		case GPIOF:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOF_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOF_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOF_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOF_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}

			break;

		case GPIOG:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOG_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOG_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOG_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOG_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}
			break;

		case GPIOH:
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio register as general purpose output mode */
					SETBIT(GPIOH_MODER, Copy_enumGPIOPINID * 2);
					CLRBIT(GPIOH_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOH_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOH_OTYPER, Copy_enumGPIOPINID);
						break;
						default:
						break;
					}
					
				break;

				default:
				break;
				
			}
		break;

		default:
		break;
	}
}
