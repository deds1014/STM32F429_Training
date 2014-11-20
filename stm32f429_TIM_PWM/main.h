
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

 #include "stm32f4xx.h"

#include "stm32f4xx_tim.h"

void RCC_Configuration(void);
void GPIO_Configuration(void);
void LED_Initialization(void);
void LED3_Toggle(void);
void Timer_Initialization(void);
void TIM5_IRQHandler(void);

static inline void Delay_1us(uint32_t);
static inline void Delay_1us(uint32_t nCnt_1us)
{
  volatile uint32_t nCnt;

  for (; nCnt_1us != 0; nCnt_1us--)
    for (nCnt = 45; nCnt != 0; nCnt--);
}

#endif /* __MAIN_H */


