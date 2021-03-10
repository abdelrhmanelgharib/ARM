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
 * PIN Mode : GPIO_OUTPUT_PUSHPULL - GPIO_OUTPUT_OPENDRAIN								*
 * **************************************************************************************/
void GPIO_voidSetPinDirection(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGPIOPINID, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR)
{
	switch(Copy_enumGPIOType)
	{
		case GPIOA:
			
			switch(Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOA_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOA_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
					/* set gpio PIN as general purpose output mode */
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
				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOB_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOB_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOC_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOC_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOD_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOD_MODER, ((Copy_enumGPIOPINID * 2) + 1));

					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set output type as Output push-pull */
							CLRBIT(GPIOD_OTYPER, Copy_enumGPIOPINID);

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set output type as Output open-drain */
							SETBIT(GPIOD_OTYPER, Copy_enumGPIOPINID);
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
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOE_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOE_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOF_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOF_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOG_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOG_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
					/* set gpio PIN as general purpose output mode */
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

				case GPIO_ALTERNATE_FUNC:
					/* set gpio PIN as Alternate function mode */
					CLRBIT(GPIOH_MODER, Copy_enumGPIOPINID * 2);
					SETBIT(GPIOH_MODER, ((Copy_enumGPIOPINID * 2) + 1));

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
}	/* GPIO_voidSetPinDirection */



/* *************************************************************************************
 * in this function initialize port direction and mode of port							*
 * GPIO  : GPIOA - GPIOB - GPIOC - GPIOD - GPIOE - GPIOF - GPIOG - GPIOH				*
 * GPIO Direction : GPIO_OUTPUT - GPIO_INPUT - GPIO_ALTERNATE_FUNC - GPIO_ANALOGE		*
 * GPIO Mode : GPIO_OUTPUT_PUSHPULL - GPIO_OUTPUT_OPENDRAIN								*
 * **************************************************************************************/
void GPIO_voidSetPortDirection(gpio_enumtype Copy_enumGPIOType, gpio_enummode Copy_enumGPIOMode, gpio_enumOTR Copy_enumOTR)
{
	switch (Copy_enumGPIOType)
	{
		case GPIOA:
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOA_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOA_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOA_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOA_MODER |= GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOA_OTYPER |= GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOA_OTYPER |= GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOA_MODER |= GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOB_OTYPER |=  GPIO_FULL_OUTPUT_PUSHPULL;

						break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOB_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOB_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOB_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOB_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOC_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOC_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

							break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOC_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOC_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOC_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOC_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOD_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOD_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

							break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOD_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOD_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOD_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOD_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOE_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOE_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

							break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOE_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOE_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOE_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOE_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOF_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOF_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

							break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOF_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOF_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOF_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOF_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOG_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOG_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

							break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOG_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;
				
				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOG_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOG_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOG_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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
			switch (Copy_enumGPIOMode)
			{
				case GPIO_OUTPUT:
					/* set gpio Register as general purpose output mode */
					GPIOH_MODER = GPIO_FULL_OUTPUT;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							/* set Register as Output push-pull */
							GPIOH_OTYPER =  GPIO_FULL_OUTPUT_PUSHPULL;

							break;

						case GPIO_OUTPUT_OPENDRAIN:
							/* set Register as Output open-drain */
							GPIOH_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
						break;
						
						default:
						break;
					}
				break;

				case GPIO_ALTERNATE_FUNC:
					/* set gpio Register as Alternate function mode */
					GPIOH_MODER = GPIO_FULL_MODER_AF;
					switch (Copy_enumOTR)
					{
						case GPIO_OUTPUT_PUSHPULL:
							GPIOH_OTYPER = GPIO_FULL_OUTPUT_PUSHPULL;
						break;

						case GPIO_OUTPUT_OPENDRAIN:
							GPIOH_OTYPER = GPIO_FULL_OUTPUT_OPENDRAIN;
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

}	/* GPIO_voidSetPortDirection */


/* *************************************************************************************
 * in this function Set Pin HIGH Or LOW 											*
 * GPIO  : GPIOA - GPIOB - GPIOC - GPIOD - GPIOE - GPIOF - GPIOG - GPIOH				*
 * PINID : GPIO_PIN0 ... GPIO_PIN15														*
 * PINValue : HIGH - LOW																*
 * **************************************************************************************/
void GPIO_voidSetPinValue(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID, value_enumType Copy_enumPINValue)
{
	switch (Copy_enumGPIOType)
	{
		case GPIOA:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOA_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOA_ODR, Copy_enumGpioPINID);
			}
			
		break;

		case GPIOB:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOB_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOB_ODR, Copy_enumGpioPINID);
			}
			
		break;
		
		case GPIOC:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOC_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOC_ODR, Copy_enumGpioPINID);
			}
			
		break;

		case GPIOD:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOD_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOD_ODR, Copy_enumGpioPINID);
			}
			
		break;

		case GPIOE:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOE_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOE_ODR, Copy_enumGpioPINID);
			}
			
		break;

		case GPIOF:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOF_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOF_ODR, Copy_enumGpioPINID);
			}
			
		break;

		case GPIOG:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOE_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOG_ODR, Copy_enumGpioPINID);
			}
			
		break;
		

		case GPIOH:
			if(Copy_enumPINValue == HIGH)
			{
				SETBIT(GPIOH_ODR, Copy_enumGpioPINID);
			}
			else if(Copy_enumPINValue == LOW)
			{
				CLRBIT(GPIOH_ODR, Copy_enumGpioPINID);
			}
			
		break;

		default:
		break;
	}
}


/* *************************************************************************************
 * in this function Set port HIGH Or LOW 										*
 * GPIO  : GPIOA - GPIOB - GPIOC - GPIOD - GPIOE - GPIOF - GPIOG - GPIOH				*
 * PortValue : HIGH - LOW																*
 * **************************************************************************************/
void GPIO_voidSetPortValue(gpio_enummode Copy_enumGPIOType, value_enumType Copy_enumPortValue)
{
	switch (Copy_enumGPIOType)
	{
		case GPIOA:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOA_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOA_ODR = GPIO_FULL_INPUT;
			}
		break;

		case GPIOB:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOB_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOB_ODR = GPIO_FULL_INPUT;
			}
		break;

		case GPIOC:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOC_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOC_ODR = GPIO_FULL_INPUT;
			}
		break;


		case GPIOD:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOD_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOD_ODR = GPIO_FULL_INPUT;
			}
		break;

		case GPIOE:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOE_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOE_ODR = GPIO_FULL_INPUT;
			}
		break;

		case GPIOF:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOF_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOF_ODR = GPIO_FULL_INPUT;
			}
		break;

		case GPIOG:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOG_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOG_ODR = GPIO_FULL_INPUT;
			}
		break;

		case GPIOH:
			if (Copy_enumPortValue == HIGH)
			{
				GPIOH_ODR = GPIO_FULL_HIGH; 
			}	
			else if (Copy_enumPortValue == LOW)
			{
				GPIOH_ODR = GPIO_FULL_INPUT;
			}
		break;
		
	default:
	break;
	}
}	/* GPIO_voidSetPortValue */


/* *************************************************************************************
 * in this function return pin value HIGH Or LOW 										*
 * GPIO  : GPIOA - GPIOB - GPIOC - GPIOD - GPIOE - GPIOF - GPIOG - GPIOH				*
 * PINID : GPIO_PIN0 ... GPIO_PIN15														*
 * **************************************************************************************/
value_enumType GPIO_voidGetPinvalue(gpio_enumtype Copy_enumGPIOType, gpio_enumpins Copy_enumGpioPINID)
{
	value_enumType Ret_value;

	switch (Copy_enumGPIOType)
	{
		case GPIOA:
			Ret_value = GETBIT(GPIOA, Copy_enumGpioPINID);
		break;

		case GPIOB:
			Ret_value = GETBIT(GPIOB, Copy_enumGpioPINID);
		break;

		case GPIOC:
			Ret_value = GETBIT(GPIOC, Copy_enumGpioPINID);
		break;

		case GPIOD:
			Ret_value = GETBIT(GPIOD, Copy_enumGpioPINID);
		break;

		case GPIOE:
			Ret_value = GETBIT(GPIOE, Copy_enumGpioPINID);
		break;

		case GPIOF:
			Ret_value = GETBIT(GPIOF, Copy_enumGpioPINID);
		break;

		case GPIOG:
			Ret_value = GETBIT(GPIOG, Copy_enumGpioPINID);
		break;

		case GPIOH:
			Ret_value = GETBIT(GPIOH, Copy_enumGpioPINID);
		break;
		
		default:
		break;
	}

	return Ret_value;
}	/* GPIO_voidGetPinvalue */