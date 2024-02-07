#include "constants.h"
#include "sendSPIbyte.h"
void writeData(uint8_t data)
{
    CS = LO;    // enable SSD1309 chip
    DC = HI;    // interpret data as data by SSD1309
    sendSPIbyte(data);
    CS = HI;    // disable SSD1309 chip
}
