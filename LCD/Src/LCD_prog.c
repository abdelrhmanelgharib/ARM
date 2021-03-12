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

        LCD_voidSendCommand(0x20);
        _delay_ms(1);
        LCD_voidSendCommand(0x28);
        _delay_ms(1);
        LCD_voidSendCommand(0x06);
        _delay_ms(1);
        LCD_voidSendCommand(0x01);
        _delay_ms(1);
        LCD_voidSendCommand(0x0F);
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
    
        GPIO_voidSetPortValue(LCD_4BITS_PORT, command & LCD_HIGH_NIBBLE);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);

        GPIO_voidSetPortValue(LCD_4BITS_PORT, command << 4);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);


    #endif
}


void LCD_voidWriteChar(u8 ch)
{
    GPIO_voidSetPinValue(RS_PORT, LCD_RS_PIN, HIGH);

    #if LCD_CURRENT_MODE == LCD_8BITS_MODE
        GPIO_voidSetPortValue(LCD_8BITS_PORT, ch);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);


    #elif LCD_CURRENT_MODE == LCD_4BITS_MODE
    

        GPIO_voidSetPortValue(LCD_4BITS_PORT, ch & LCD_HIGH_NIBBLE);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);

        GPIO_voidSetPortValue(LCD_4BITS_PORT, ch << 4);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, HIGH);
        _delay_ms(1);
        GPIO_voidSetPinValue(E_PORT, LCD_E_PIN, LOW);
        _delay_ms(1);

    #endif
}
