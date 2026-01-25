/**
  ******************************************************************************
  *
  * @file    bsp.h
  * @author  
  * @brief   Header file of bsp module.
  *
  ******************************************************************************
  **/

#ifndef _BSP_H
#define _BSP_H


#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f4xx.h"

void bsp_init(void);

void bsp_debug_init(void);
void bsp_debug_putc(char c);

void bsp_sdram_init(void);

void bsp_tick_init(void);
void bsp_tick_deinit(void);
void bsp_tick_delay_us(uint32_t us);


#ifdef __cplusplus
}
#endif

#endif /*_BSP_H*/


/******************************* (END OF FILE) *********************************/


