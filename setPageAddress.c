#include "constants.h"
#include "writeCommand.h"
void setPageAddress(uint8_t page)   // 0 <= page <=7
{
    uint8_t pageAddr;
    uint8_t pageOffset = 0xb0;
    pageAddr =  pageOffset | page;
    writeCommand(pageAddr);
}
