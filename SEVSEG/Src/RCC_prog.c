/*
 *  Author: El-Gharib
 *  Created on: 6/3/2021
 *  Version: 1
 */

#include "STD_Types.h"
#include "BIT_Math.h"

#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"




 void RCC_voidInit(void)
 {
	 u32 Local_u32TimeOut = 0;
	 /* Clock Select */
     #if(RCC_CLK_SYSTEM == RCC_HSI)

	 	 /* RCC Configurations */


	 	 /* HSI ON */
         SETBIT(RCC_CR, RCC_HSION);
         /* polling to check if the HSI is ready or not */
         while((GETBIT(RCC_CR, RCC_HSIRDY)==0) && (Local_u32TimeOut < 10000))
         {
        	 Local_u32TimeOut++;
         }
         CLRBIT(RCC_CFGR, 0);
         CLRBIT(RCC_CFGR, 1);

     #elif(RCC_CLK_SYSTEM == RCC_HSE)

         /* RCC Configurations */

         /* HSE ON */
         SETBIT(RCC_CR, RCC_HSEON);

         /* polling to check if the HSE is ready or not */
		 while((GETBIT(RCC_CR, RCC_HSERDY)==0) && (Local_u32TimeOut < 10000))
		 {
			 Local_u32TimeOut++;
		 }
		 /* Clock System */
		 SETBIT(RCC_CFGR, 0);
		 CLRBIT(RCC_CFGR, 1);
    
     #elif(RCC_CLK_SYSTEM == RCC_PLL)
		#if RCC_CLK_SYSTEM == 2
		 SETBIT(RCC_CR, RCC_PLLON);

		 while((GETBIT(RCC_CR, RCC_PLLRDY)==0) && (Local_u32TimeOut < 10000))
		 {
			 Local_u32TimeOut++;
		 }
	#else
		#error "Wrong Choice of Clock Type"
    
     	 #endif
	#endif

 }

/* initialize System Clock for system */
//void RCC_voidInit(clksystem Copy_ClkSystem)
//{
//    switch (Copy_ClkSystem)
//    {
//        case RCC_HSI:
//            CLRBIT(RCC_CFGR, 0);
//            CLRBIT(RCC_CFGR, 1);
//            SETBIT(RCC_CR, RCC_HSION);
//        break;
//
//        case RCC_HSE:
//            SETBIT(RCC_CFGR, 0);
//            CLRBIT(RCC_CFGR, 1);
//            SETBIT(RCC_CR, RCC_HSEON);
//        break;
//
//        case RCC_PLL:
//            CLRBIT(RCC_CFGR, 0);
//            SETBIT(RCC_CFGR, 1);
//            SETBIT(RCC_CR, RCC_PLLON);
//        break;
//    }
//}   /* RCC_voidInit */

/* this function for enable Peripheral CLK for GPIO, DMA and OTG */
void RCC_voidEnablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID)
{
    switch (Copy_u8BusID)
    {
        case RCC_AHB1: SETBIT(RCC_AHB1ENR, Copy_u8PerID); break;
        case RCC_AHB2: SETBIT(RCC_AHB2ENR, Copy_u8PerID); break;
        case RCC_APP1: SETBIT(RCC_APB1ENR, Copy_u8PerID); break;
        case RCC_APP2: SETBIT(RCC_APB2ENR, Copy_u8PerID); break;
    }
}   /* RCC_voidEnablePeripheralCLK */


/*  this function for disable Peripheral CLK for GPIO, DMA and OTG */
void RCC_voidDisablePeripheralCLK(RCC_Bus Copy_u8BusID, gpio_type Copy_u8PerID)
{
    switch (Copy_u8BusID)
    {
        case RCC_AHB1: CLRBIT(RCC_AHB1ENR, Copy_u8PerID); break;
        case RCC_AHB2: CLRBIT(RCC_AHB2ENR, Copy_u8PerID); break;
        case RCC_APP1: CLRBIT(RCC_APB1ENR, Copy_u8PerID); break;
        case RCC_APP2: CLRBIT(RCC_APB2ENR, Copy_u8PerID); break;
    }
}   /* RCC_voidDisablePeripheralCLK */
