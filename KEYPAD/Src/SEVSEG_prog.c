/*
 * SEVSEG.c
 *
 *  Created on: Mar 8, 2021
 *      Author: Elgharib
 */

#include "../Inc/STD_Types.h"
#include "../Inc/BIT_Math.h"

#include "RCC_interface.h"
#include "../Inc/GPIO_interface.h"

#include "../Inc/SEVSEG_private.h"
#include "../Inc/SEVSEG_config.h"
#include "../Inc/SEVSEG_interface.h"



void SEVSEG_voidInitilize(void)
{
	RCC_voidEnablePeripheralCLK(RCC_AHB1, SEG_0_PORT);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN1, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN2, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN3, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN4, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN5, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN6, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
	GPIO_voidSetPinDirection(SEG_0_PORT, GPIO_PIN7, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);


    GPIO_voidSetPinDirection(SEG_0_PORT, SEG0_COM_PIN, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
    GPIO_voidSetPinDirection(SEG_1_PORT, SEG1_COM_PIN, GPIO_OUTPUT, GPIO_OUTPUT_PUSHPULL);
}


void SEVSEG_voidDisplay(u8 seg_num, u8 num_to_diplay)
{
    if ( (seg_num == SEG0)  && (num_to_diplay==0))
    {
        #if SEG_0_CONNECTION == COM_CATHODE
        {
        	SEVSEG_voidDisable(SEG1);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN, LOW);
        }

        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==1))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN, LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN, LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN, LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN, LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN, LOW);
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==2))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN, LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN, LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==3))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==4))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }

    else if ( (seg_num == SEG0)  && (num_to_diplay==5))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==6))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG0)  && (num_to_diplay==7))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,LOW);
            
        }
        #endif
    }

    else if ( (seg_num == SEG0)  && (num_to_diplay==8))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }

    else if ( (seg_num == SEG0)  && (num_to_diplay==9))
    {
        #if(SEG_0_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_g_PIN,HIGH);
            
        }
        #endif
    }


    /* seg2 */
    if ( (seg_num == SEG1)  && (num_to_diplay==0))
    {
        #if SEG_1_CONNECTION == COM_CATHODE
        {

            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN, LOW);
        }

        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==1))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN, LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN, HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN, LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN, LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN, LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN, LOW);
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==2))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN, LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN, LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==3))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==4))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }

    else if ( (seg_num == SEG1)  && (num_to_diplay==5))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==6))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }
    else if ( (seg_num == SEG1)  && (num_to_diplay==7))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,LOW);
            
        }
        #endif
    }

    else if ( (seg_num == SEG1)  && (num_to_diplay==8))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }

    else if ( (seg_num == SEG1)  && (num_to_diplay==9))
    {
        #if(SEG_1_CONNECTION == COM_CATHODE)
        {
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_a_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_b_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_c_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_d_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_e_PIN,LOW);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_f_PIN,HIGH);
            GPIO_voidSetPinValue(SEG_1_PORT, SEG1_g_PIN,HIGH);
            
        }
        #endif
    }
}


void SEVSEG_voidEnable(u8 seg_num)
{
    switch (seg_num)
    {
    case SEG0:
        #if (SEG_0_CONNECTION == COM_CATHODE )
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_COM_PIN, LOW);
        }
        #else
        {
            GPIO_voidSetPinValue(SEG_0_PORT, SEG0_COM_PIN, LOW);
        }
        #endif
        
        break;
    case SEG1:
        #if (SEG_1_CONNECTION == COM_CATHODE)
            {
                GPIO_voidSetPinValue(SEG_1_PORT, SEG1_COM_PIN, LOW);
            }
            #else
            {
                GPIO_voidSetPinValue(SEG_1_PORT, SEG1_COM_PIN, LOW);
            }
            #endif
            
            break;
    
    default:
        break;
    }
}


void SEVSEG_voidDisable(u8 seg_num)
{
    switch (seg_num)
    {
        case SEG0:
            #if (SEG_0_CONNECTION == COM_CATHODE )
            {
                GPIO_voidSetPinValue(SEG_0_PORT, SEG0_COM_PIN, HIGH);
            }
            #else
            {
                GPIO_voidSetPinValue(SEG_0_PORT, SEG0_COM_PIN, HIGH);
            }
            #endif
            
            break;
        case SEG1:
            #if (SEG_1_CONNECTION == COM_CATHODE )
            {
                GPIO_voidSetPinValue(SEG_1_PORT, SEG1_COM_PIN, HIGH);
            }
            #else
            {
                GPIO_voidSetPinValue(SEG_1_PORT, SEG1_COM_PIN, HIGH);
            }
            #endif
            break;

        default:
            break;
    }
}


void SEVSEG_voidPov(void)
{
    u8 i;
    /* delay 300ms */
    for (i=0; i<15*5; i++)
    {
        SEVSEG_voidDisable(SEG1);
        _delay_ms(1);
        SEVSEG_voidDisplay(SEG0, 0);
        SEVSEG_voidEnable(SEG0);
        _delay_ms(1);

        /* Disable seg0 and enable seg1 */
        SEVSEG_voidDisable(SEG0);
        _delay_ms(1);
        
        SEVSEG_voidDisplay(SEG1, 1);
        SEVSEG_voidEnable(SEG1);
        _delay_ms(1);

    }
}


void SEVSEG_voidCount(void)
{
    u8 i;
    /* SEVSEG && for green LED */
    /* start counting 1-9 */
    SEVSEG_voidDisable(SEG1);
    for(i=1; i<10; i++)
    {
        SEVSEG_voidDisplay(SEG0, i);
        _delay_ms(1000);
    }
    /* POV SEVSEG */
    SEVSEG_voidPov();

    /* right seg is already Enable in previous function */
    /* turn off seg1 to start count from 1 */
    SEVSEG_voidDisable(SEG1);
    _delay_ms(1);
    SEVSEG_voidEnable(SEG0);
    _delay_ms(1);

}
