/* **************************************************************************************
 * LCD_interface.h																		*
 *																						*
 *  Created on: Mar 11, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/

#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

typedef enum {
	LCD_enum_4BITS_MODE = 0 ,
	LCD_enum_8BITS_MODE
}lcd_mode;



void LCD_voidInit(lcd_mode mode);
void LCD_voidSendCommand(u8 command);
void LCD_voidWriteChar(u8 ch);
void _delay_ms(u32 Copy_u32Time);
//void LCD_voidWriteString(u8* str);
//void LCD_voidPrintUnsignedInteger(u32 number);
//void LCD_voidPrintSignedInteger(s32 number);
//void LCD_voidGoto(u8 raw , u8 col);
//void LCD_voidCLRDisplay(void);


#endif /* LCD_INTERFACE_H_ */
