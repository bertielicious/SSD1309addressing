#include "constants.h"
#include "writeCommand.h"
void setColumnAddress(uint8_t columnAddr)
{
   uint8_t lowNib, hiNib;
   uint8_t lowNibOffset = 0x00;
   uint8_t hiNibOffset = 0x10;
   lowNib = lowNibOffset | (columnAddr & 0x0f);
   hiNib = hiNibOffset | (columnAddr & 0xf0)>>4;
   writeCommand(hiNib);
   writeCommand(lowNib);
}
