/**
 * @file bsp_led.c
 *
 */
  
/*********************
 *      INCLUDES
 *********************/
#include "bsp.h"
/*********************
 *      MACROS
 *********************/
#define LED_CLK    RCC_AHB1Periph_GPIOD
#define LED_PORT   GPIOD
#define LED_PIN    GPIO_Pin_4
/**********************
 *   GLOBAL FUNCTIONS
 **********************/ 
void bsp_led_init(void)
{
    RCC_AHB1PeriphClockCmd (LED_CLK, ENABLE); 
	
	GPIO_InitTypeDef GPIO_InitStructure; 
    GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;   
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP; 
    GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;	
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;


    GPIO_InitStructure.GPIO_Pin = LED_PIN;	 
    GPIO_Init(LED_PORT, &GPIO_InitStructure);	
    
    
}

void bsp_led_turn_on(void)
{
    GPIO_ResetBits(LED_PORT, LED_PIN);
}

void bsp_led_turn_off(void)
{
    GPIO_SetBits(LED_PORT, LED_PIN);
}

void bsp_led_toggle(void)
{
    GPIO_ToggleBits(LED_PORT, LED_PIN);
}
/**********************
 *   STATIC FUNCTIONS
 **********************/



/******************************* (END OF FILE) *********************************/



 







