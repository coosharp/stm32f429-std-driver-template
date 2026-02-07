/**
 * @file delay.c
 *
 */
  
/*********************
 *      INCLUDES
 *********************/
#include "delay.h"
#include "stm32f4xx.h"
/*********************
 *      MACROS
 *********************/

/**********************
 *   GLOBAL VARIABLES
 **********************/ 

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/ 
bool delay_init(void)
{
    CoreDebug->DEMCR |= (1 << 24);
    DWT->CYCCNT = 0;
    DWT->CTRL |= (1 << 0);
    
    if(DWT->CYCCNT) {
        return false;
    }
    else {
        return true;
    }
}

void delay_us(uint32_t num)
{
    uint32_t start_tick = DWT->CYCCNT;
    uint32_t ticks = num * (SystemCoreClock / 1000000);
    
    while((DWT->CYCCNT - start_tick) < ticks);
}

void delay_ms(uint32_t num)
{
    while(num--)
        delay_us(1000);
}

void delay_sec(uint32_t num)
{
    while(num--)
        delay_ms(1000);
}
/**********************
 *   STATIC FUNCTIONS
 **********************/



/******************************* (END OF FILE) *********************************/



 







