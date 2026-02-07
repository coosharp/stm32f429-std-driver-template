/**
 * @file delay.h
 *
 */
  
#ifndef _DELAY_H
#define _DELAY_H


#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include <stdint.h>
#include <stdbool.h>
/**********************
*  GLOBAL PROTOTYPES
 **********************/
bool delay_init(void);
void delay_us(uint32_t num);
void delay_ms(uint32_t num);
void delay_sec(uint32_t num);
 

#ifdef __cplusplus
}
#endif

#endif /*_DELAY_H*/


/******************************* (END OF FILE) *********************************/


