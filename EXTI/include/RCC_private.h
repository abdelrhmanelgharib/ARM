/*
 *  Author: El-Gharib
 *  Created on: 6/3/2021
 *  Version: 1
 */


#ifndef RCC_PRIVATE_H_
#define RCC_PRIVATE_H_

/*
 *  which bus and what is the base address?
 *  offset address 
 */



/*               RCC Base Address On AHP Bus               */
#define RCC_BASE_ADDRESS          ((u32)(0x40023800))

#define RCC_CR                   *((u32*)(RCC_BASE_ADDRESS + 0x00))
#define RCC_PLL_CFGR             *((u32*)(RCC_BASE_ADDRESS + 0x04))
#define RCC_CFGR                 *((u32*)(RCC_BASE_ADDRESS + 0x08))
#define RCC_CIR                  *((u32*)(RCC_BASE_ADDRESS + 0x0C))
#define RCC_AHB1_RSTR            *((u32*)(RCC_BASE_ADDRESS + 0x10))
#define RCC_AHB2_RSTR            *((u32*)(RCC_BASE_ADDRESS + 0x14))
#define RCC_AHB3_RSTR            *((u32*)(RCC_BASE_ADDRESS + 0x18))
#define RCC_RESERVED1            *((u32*)(RCC_BASE_ADDRESS + 0x1C))
#define RCC_APB1RSTR             *((u32*)(RCC_BASE_ADDRESS + 0x20))
#define RCC_APB2RSTR             *((u32*)(RCC_BASE_ADDRESS + 0x24))
#define RCC_RESERVED2            *((u32*)(RCC_BASE_ADDRESS + 0x28))
#define RCC_RESERVED3            *((u32*)(RCC_BASE_ADDRESS + 0x2C))
#define RCC_AHB1ENR              *((u32*)(RCC_BASE_ADDRESS + 0x30))
#define RCC_AHB2ENR              *((u32*)(RCC_BASE_ADDRESS + 0x34))
#define RCC_AHB3ENR              *((u32*)(RCC_BASE_ADDRESS + 0x38))
#define RCC_RESERVED4            *((u32*)(RCC_BASE_ADDRESS + 0x3C))
#define RCC_APB1ENR              *((u32*)(RCC_BASE_ADDRESS + 0x40))
#define RCC_APB2ENR              *((u32*)(RCC_BASE_ADDRESS + 0x44))
#define RCC_RESERVED5            *((u32*)(RCC_BASE_ADDRESS + 0x48))
#define RCC_RESERVED6            *((u32*)(RCC_BASE_ADDRESS + 0x4C))
#define RCC_APB1LPENR            *((u32*)(RCC_BASE_ADDRESS + 0x60))
#define RCC_APB2LPENR            *((u32*)(RCC_BASE_ADDRESS + 0x64))
#define RCC_RESERVED7            *((u32*)(RCC_BASE_ADDRESS + 0x68))
#define RCC_RESERVED8            *((u32*)(RCC_BASE_ADDRESS + 0x6C))
#define RCC_BDCR                 *((u32*)(RCC_BASE_ADDRESS + 0x70))
#define RCC_CSR                  *((u32*)(RCC_BASE_ADDRESS + 0x74))
#define RCC_RESERVED9            *((u32*)(RCC_BASE_ADDRESS + 0x78))
#define RCC_RESERVED810          *((u32*)(RCC_BASE_ADDRESS + 0x7C))
#define RCC_SSCGR                *((u32*)(RCC_BASE_ADDRESS + 0x80))
#define RCC_PLLI2SCFGR           *((u32*)(RCC_BASE_ADDRESS + 0x84))
#define RCC_PLLSAICFGR           *((u32*)(RCC_BASE_ADDRESS + 0x88))
#define RCC_DCKCFGR              *((u32*)(RCC_BASE_ADDRESS + 0x8C))
#define RCC_CKGATENR             *((u32*)(RCC_BASE_ADDRESS + 0x90))
#define RCC_DCKCFGR2             *((u32*)(RCC_BASE_ADDRESS + 0x94))






#endif  /* RCC_PRIVATE_H_ */