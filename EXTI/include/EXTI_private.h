/* **************************************************************************************
 * EXTI_private.h																		*
 *																						*
 *  Created on: Mar 17, 2021															*
 *      Author: Elgharib																*
 * **************************************************************************************/




#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_



typedef struct 
{
    volatile u32 IMR;
    volatile u32 EMR;
    volatile u32 RTSR;
    volatile u32 FTSR;
    volatile u32 SWIER;
    volatile u32 PR;
    
}EXTI_Type_t;

#define   EXTI_BASE_ADDRESS		    (0x40013C00)
#define   EXTI                      ((EXTI_Type_t*)(EXTI_BASE_ADDRESS))  //APB2 bus


#endif