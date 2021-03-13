/* **************************************************************************************
 * LCD_prog.c																			*
 *																						*
 *  Created on: Mar 11, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/

#include "../Inc/STD_Types.h"
#include "../Inc/BIT_Math.h"

#include "../Inc/RCC_interface.h"
#include "../Inc/GPIO_interface.h"
#include "../Inc/GPIO_private.h"

#include "../Inc/LCD_private.h"
#include "../Inc/LCD_cofig.h"
#include "../Inc/LCD_interface.h"

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

void LCD_voidInit(lcd_mode mode)
{
    RCC_voidEnablePeripheralCLK(RCC_AHB1, LCD_4BITS_PORT);
	RCC_voidEnablePeripheralCLK(RCC_AHB1, RS_PORT);
    /* set direction of RS AND Enable pin */
    GPIO_voidSetPinDirection(RS_PORT, LCD_RS_PIN, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
    GPIO_voidSetPinDirection(E_PORT, LCD_E_PIN, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);

    if(mode == LCD_enum_4BITS_MODE)
    {
        GPIO_voidSetPinDirection(LCD_4BITS_PORT, LCD_4BITS_PIN0, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
        GPIO_voidSetPinDirection(LCD_4BITS_PORT, LCD_4BITS_PIN1, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
        GPIO_voidSetPinDirection(LCD_4BITS_PORT, LCD_4BITS_PIN2, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
        GPIO_voidSetPinDirection(LCD_4BITS_PORT, LCD_4BITS_PIN3, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);

        _delay_ms(30);

        LCD_voidSendCommand(0x02);
        _delay_ms(1);
        LCD_voidSendCommand(0x28);
        _delay_ms(1);
        LCD_voidSendCommand(0x0E);
        _delay_ms(1);
        LCD_voidSendCommand(0x01);
        _delay_ms(1);
        LCD_voidSendCommand(0x06);
        _delay_ms(3);
    }
    else if(mode == LCD_enum_8BITS_MODE)
    {
        GPIO_voidSetPortDirection(LCD_8BITS_PORT, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);

        _delay_ms(30);
        LCD_voidSendCommand(0x38);
        _delay_ms(1);
        LCD_voidSendCommand(0x0E);
        _delay_ms(1);
        LCD_voidSendCommand(0x01);
        _delay_ms(3);
    }
}


void LCD_voidSendCommand(u8 command)
{

    GPIO_voidSetPinValue(RS_PORT, LCD_RS_PIN, LOW);

    #if LCD_CURRENT_MODE == LCD_8BITS_MODE

        GPIO_voidSetPortValue(LCD_8BITS_PORT, command);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);

    #elif LCD_CURRENT_MODE == LCD_4BITS_MODE

        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN0, GETBIT(command,4));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN1, GETBIT(command,5));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN2, GETBIT(command,6));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN3, GETBIT(command,7));

        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);


        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN0, GETBIT(command,0));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN1, GETBIT(command,1));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN2, GETBIT(command,2));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN3, GETBIT(command,3));

        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);


    #endif
}


void LCD_voidWriteChar(u8 ch)
{
    _delay_ms(5);
    GPIO_voidSetPinValue(RS_PORT, LCD_RS_PIN, HIGH);

    #if LCD_CURRENT_MODE == LCD_8BITS_MODE
        GPIO_voidSetPortValue(LCD_8BITS_PORT, ch);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);


    #elif LCD_CURRENT_MODE == LCD_4BITS_MODE
    
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN0, GETBIT(ch, 4));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN1, GETBIT(ch, 5));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN2, GETBIT(ch, 6));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN3, GETBIT(ch, 7));


        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);
    
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN0, GETBIT(ch, 0));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN1, GETBIT(ch, 1));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN2, GETBIT(ch, 2));
        GPIO_voidSetPinValue(LCD_4BITS_PORT, LCD_4BITS_PIN3, GETBIT(ch, 3));

        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);

    #endif
}

void LCD_voidWriteString(u8* str)
{
	_delay_ms(3);
	u8 counter=0;
	while(str[counter] != '\0')
	{
		LCD_voidWriteChar(str[counter]);
		counter++;
	}
}


void LCD_voidPrintUnsignedInteger(u32 number)
{
	_delay_ms(3);
	u8 arr[16];
	u8 counter = 0 ;
	if (number == 0)
	{
		LCD_voidWriteChar('0');
	}
	while(number && (counter<16))
	{
		arr[counter++]= number % 10;
		number /= 10;
	}
	while (counter)
	{
		LCD_voidWriteChar(arr[--counter]+ 48);
	}
}
void LCD_voidGoTo(u8 raw , u8 col)
{
	switch(raw)
	{
	case 0 : if((col <16) && (col >= 0))
		{
		LCD_voidSendCommand(0x80 + col);
		}
	break;
	case 1 : if((col <16) && (col >= 0))
		{
		LCD_voidSendCommand(0xc0 + col);
		}
	break;
	}
}

