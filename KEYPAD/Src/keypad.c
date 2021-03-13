/*
 * keypad.c
 *
 *  Created on: ??�/??�/????
 *      Author: Nada
 */




#include "../Inc/STD_TYPES.h"
#include "../Inc/BIT_MATH.h"

#include "../Inc/RCC_interface.h"
#include "../Inc/GPIO_interface.h"
#include "../Inc/GPIO_private.h"

#include "../Inc/keypad_Config.h"
#include "../Inc/keypad_Interface.h"






void KeyPad_void_intialize(void)
{
	// //RCC_voidEnablePeripheralCLK(RCC_AHB1, KEYPAD_PORT);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN0, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN1, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN2, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN3, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN4, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN5, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN6, GPIO_INPUT, 4);
	// GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_PIN7, GPIO_INPUT, 4);
}


u8 KEYPAD_u8GetPressedKey(void)
{
	while(1)
	{
		/* check for first row */
		GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_ROW0, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
		GPIO_voidSetPinValue(KEYPAD_PORT, KEYPAD_ROW0, LOW);
		if (GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL0) == LOW)	    	return 7;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL1) == LOW)		return 2;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL2) == LOW)		return 3;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL3) == LOW)		return '-';


		/* check 2nd row */
		GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_ROW1, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
		GPIO_voidSetPinValue(KEYPAD_PORT, KEYPAD_ROW1, LOW);
		if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL0) == LOW)			return 5;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL1) == LOW)		return 6;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL2) == LOW)		return 7;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL3) == LOW)		return 'x';

		/* check 3nd row */
		GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_ROW2, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
		GPIO_voidSetPinValue(KEYPAD_PORT, KEYPAD_ROW2, LOW);
		if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL0) == LOW)			return 9;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL1) == LOW)		return 10;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL2) == LOW)		return 11;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL3) == LOW)		return '/';

			//check 4th row
		GPIO_voidSetPinDirection(KEYPAD_PORT, KEYPAD_ROW3, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
		GPIO_voidSetPinValue(KEYPAD_PORT, KEYPAD_ROW3, LOW);
		if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL0) == LOW)			return 13;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL1) == LOW)		return 14;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL2) == LOW)		return 15;
		else if(GPIO_voidGetPinvalue(KEYPAD_PORT, KEYPAD_COL3) == LOW)		return 16;
	}
}
