/**
 * @file delay.c
 *
 */
  
/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "stm32f4xx.h"
#include "delay.h"
/**********************
 *  STATIC VARIABLES
 **********************/
static volatile uint32_t ulTicks;
/**********************
 *   GLOBAL FUNCTIONS
 **********************/ 
void delay_init(void)
{
    SysTick_Config(SystemCoreClock / 1000);
}

void HAL_SysTick_Callback(void)
{
    ulTicks += 1;
}

void delay_ms(uint32_t num)
{
    uint32_t start_tick = ulTicks;
    uint32_t delay_time = num;
    while(ulTicks - start_tick < delay_time);
}

void delay_sec(uint32_t num)
{
    uint32_t start_tick = ulTicks;
    uint32_t delay_time = 1000 * num;
    while(ulTicks - start_tick < delay_time);
}
/**********************
 *   STATIC FUNCTIONS
 **********************/



/******************************* (END OF FILE) *********************************/



 







