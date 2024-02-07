#include "constants.h"
#include "setColumnAddress.h"
#include "setPageAddress.h"
#include "writeData.h"
void clearSSD1309(void)
{
    uint8_t col, page;
    for(page = 0; page < 8; page++)
    {
        setPageAddress(page);
        for(col = 0; col < 128; col++)
        {
            setColumnAddress(col);
            writeData(0x00);
        }
    }
}
