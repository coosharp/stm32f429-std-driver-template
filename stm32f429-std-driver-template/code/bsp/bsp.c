#include "bsp.h"



void bsp_init(void)
{
    bsp_debug_init();
    bsp_sdram_init();
    bsp_tick_init();
}

