/* **************************************************************************************
 * DC_MOTOR._interface.h																*
 *																						*
 *  Created on: Mar 11, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/


#ifndef DCMOTOR_INTERFACE_H_
#define DCMOTOR_INTERFACE_H_

typedef enum
{
    DCMOTOR_1_ = 0 ,
    DCMOTOR_2_
}Motor_number;

typedef enum
{
    STOP = 0,
    CLKWISE ,
    ANTI_CLKWISE
}Motor_Direction;

void DCMOTOR_voidinit(void);
void DCMOTOR_voidControl(Motor_number Copy_enumMotor, Motor_Direction Copy_enumMotorDirection);


#endif /* DCMOTOR_INTERFACE_H_ */
