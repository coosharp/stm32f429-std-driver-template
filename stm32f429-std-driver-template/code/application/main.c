#include "bsp.h"
#include "delay.h"
#include "debug.h"
#include "mm.h"


int main(void)
{
    bsp_init();
    debug_init(bsp_debug_putc);
    for(;;);
}

