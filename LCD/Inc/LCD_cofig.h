/* **************************************************************************************
 * LCD_config.h																			*
 *																						*
 *  Created on: Mar 11, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/

#ifndef LCD_COFIG_H_
#define LCD_COFIG_H_

#define LCD_RS_PIN           GPIO_PIN5
#define RS_PORT              GPIOB
#define LCD_E_PIN            GPIO_PIN7
#define E_PORT               GPIOB
 
#define LCD_4BITS_PIN0       GPIO_PIN4
#define LCD_4BITS_PIN1       GPIO_PIN5
#define LCD_4BITS_PIN2       GPIO_PIN6
#define LCD_4BITS_PIN3       GPIO_PIN7
#define LCD_HIGH_NIBBLE      0xF0

#define LCD_8BITS_PORT       GPIOB
#define LCD_4BITS_PORT       GPIOC


/*
 *  Choose LCD Mode:
 *  LCD_4BITS_MODE  -  LCD_8BITS_MODE
 */

#define LCD_CURRENT_MODE     LCD_4BITS_MODE


#endif /* LCD_COFIG_H_ */
