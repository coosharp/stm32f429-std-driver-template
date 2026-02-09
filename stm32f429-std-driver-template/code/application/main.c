/**
 * @file main.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "delay.h"
#include "bsp.h" 
/**********************
 *   GLOBAL FUNCTIONS
 **********************/  
int main(void)
{
    delay_init();
    bsp_init();
    
    printf("Hello World!\r\n");
    
    for(;;) {
        bsp_led_toggle();
        delay_ms(500);
    }
}


/******************************* (END OF FILE) *********************************/



