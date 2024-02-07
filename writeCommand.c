#include "constants.h"
#include "sendSPIbyte.h"
void writeCommand(uint8_t command)
{
    CS = LO;      // enable SSD1309 chip
    DC = LO;     // interpret data as command by SSD1309
    sendSPIbyte(command);
    CS = HI;    // disable SSD1309 chip
}
