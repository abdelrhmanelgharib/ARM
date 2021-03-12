/* **************************************************************************************
 * DCMOTOR_prog.c																		*
 *																						*
 *  Created on: Mar 11, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/


#include "../Inc/STD_Types.h"
#include "../Inc/BIT_Math.h"

#include "../Inc/RCC_interface.h"
#include "../Inc/GPIO_interface.h"

#include "../Inc/DCMOTOR_private.h"
#include "../Inc/DCMOTOR_config.h"
#include "../Inc/DCMOTOR_interface.h"


void DCMOTOR_voidinit(void)
{
    RCC_voidEnablePeripheralCLK(RCC_AHB1, DCMOTOR_1_PORT);
    
    GPIO_voidSetPinDirection(DCMOTOR_1_PORT, DCMOTOR_1_PIN1, GPIO_OUTPUT, GPIO_OUTPUT_OPENDRAIN);
    GPIO_voidSetPinDirection(DCMOTOR_1_PORT, DCMOTOR_1_PIN2, GPIO_OUTPUT, GPIO_OUTPUT_OPENDRAIN);
    
}   /* DCMOTOR_voidinit */



void DCMOTOR_voidControl(Motor_number Copy_enumMotor, Motor_Direction Copy_enumMotorDirection)
{
    switch (Copy_enumMotorDirection)
    {
        case STOP :
            GPIO_voidSetPinValue(DCMOTOR_1_PORT, DCMOTOR_1_PIN1, LOW);
            GPIO_voidSetPinValue(DCMOTOR_1_PORT, DCMOTOR_1_PIN2, LOW);
            break;
        
        case CLKWISE :
            GPIO_voidSetPinValue(DCMOTOR_1_PORT, DCMOTOR_1_PIN1, HIGH);
            GPIO_voidSetPinValue(DCMOTOR_1_PORT, DCMOTOR_1_PIN2, LOW);
        break;

        case ANTI_CLKWISE :
            GPIO_voidSetPinValue(DCMOTOR_1_PORT, DCMOTOR_1_PIN1, LOW);
            GPIO_voidSetPinValue(DCMOTOR_1_PORT, DCMOTOR_1_PIN2, HIGH);
        break;
        
        default:
        break;
    }
}   /* DCMOTOR_voidControl */