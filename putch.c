#include "constants.h"
void putch (uint8_t byte)
{
    while(! TXIF)
        continue;
    TXREG = byte;
    
}
