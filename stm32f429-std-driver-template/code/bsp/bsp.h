/**
 * @file bsp.h
 *
 */
  
#ifndef _BSP_H
#define _BSP_H


#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "stm32f4xx.h"
/*********************
 *      MACROS
 *********************/

/*********************
 *    DECLARATIONS
 *********************/

/**********************
*  GLOBAL PROTOTYPES
 **********************/
void bsp_init(void);
 
void bsp_debug_config(uint32_t baudrate);

void bsp_led_init(void);
void bsp_led_turn_on(void);
void bsp_led_turn_off(void);
void bsp_led_toggle(void);

#ifdef __cplusplus
}
#endif

#endif /*_BSP_H*/


/******************************* (END OF FILE) *********************************/


