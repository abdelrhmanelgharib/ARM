/* ************************************************************************************ *
 * NVIC_interface.h																		*
 *																						*
 *  Created on: Mar 16, 2021															*
 *      Author: Elgharib																*
 * ************************************************************************************ */



#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_




void NVIC_voidInit(void);
/*     NVIC Enable Peripheral     */
void    NVIC_voidEnablePeripheral(u8 Copy_u8InterruptNumb);
void    NVIC_voidDisablePeripheral(u8 Copy_u8InterruptNumb);
void    NVIC_voidSetPendingFlag(u8 Copy_u8InterruptNumb);
void    NVIC_voidClearPendingFlag(u8 Copy_u8InterruptNumb);
u8      NVIC_u8GetActiveFlag(u8 Copy_u8InterruptNumb);
void    NVIC_voidSetPriority(u8 Copy_u8InterruptNumb, u8 Copy_u8Priority);


#endif /* NVIC_INTERFACE_H_ */
