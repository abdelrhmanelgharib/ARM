/*
 * SEVSEG_interface.h
 *
 *  Created on: Mar 8, 2021
 *      Author: 2bdoa
 */

#ifndef SEVSEG_INTERFACE_H_
#define SEVSEG_INTERFACE_H_

void SEVSEG_voidInitilize(void);
void SEVSEG_voidDisplay(u8 seg_num, u8 num_to_diplay);
void SEVSEG_voidEnable(u8 seg_num);
void SEVSEG_voidDisable(u8 seg_num);
void SEVSEG_voidPov(void);
void SEVSEG_voidCount(void);

#define SEG_0_PORT      GPIOA
#define SEG0  0

#define SEG_1_PORT      GPIOA
#define SEG1  1

#define SEG2  2


#endif /* SEVSEG_INTERFACE_H_ */
