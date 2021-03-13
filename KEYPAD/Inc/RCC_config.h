/*
 *  Author: El-Gharib
 *  Created on: 6/3/2021
 *  Version: 1
 */


#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_

/*******************************************************************************
 *                               SYSTEM CLOCK                                  *
 *                                 RCC_HSI                                     *
 *                                 RCC_HSE                                     *
 *                                 RCC_PLL                                     *
 * *****************************************************************************/
#define RCC_CLK_SYSTEM              RCC_HSI


#if RCC_CLK_SYSTEM			==		RCC_PLL
	#define RCC_PLL_MUL					2
	#define RCC_PLL_DIV					4
	#define RCC_PLL_SORCE				RCC_HSE
#endif

#endif  /* RCC_CONFIG_H_ */
