#include "constants.h"
#include "writeCommand.h"
void initSSD1309(void)
{
   Vcc1309 = HI;        // disable power to SSD1309 OLED
   CS = LO;             // select OLED chip (active LOW)
     
   RES = HI;
   __delay_ms(10);
   RES = LO;
     __delay_ms(10);
   RES = HI;
   __delay_ms(10);
   Vcc1309 = LO;        // enable 3.3V power rail to SSD1309 OLED7
    __delay_ms(10);
    
   writeCommand(0xAE);             //0xAE  Set OLED Display Off
   writeCommand(0xD5);     //0xD5  Set Display Clock Divide Ratio/Oscillator Frequency
   writeCommand(0x80);                           // sets SSD1306 internal oscillator to it's value as if RESET
   writeCommand(0xa8);           //0xA8  Set Multiplex Ratio
   writeCommand(0x3f);                           //lines COM0 to COM63 for 128 x 64 display. 63 = 0x3f
   writeCommand(0xd3);       //0xD3  Set Display Offset
   writeCommand(0x00);                           //affects the line characters are displayed
   writeCommand(0x40);           //0x40  Set Display Start Line
 
   writeCommand(0x8d);             //0x8D  Set Charge Pump
   writeCommand(0x14);                           //0x14  Enable Charge Pump
   writeCommand(0xc8);             //0xC8  Set COM Output Scan Direction
   writeCommand(0xda);             //0xDA  Set COM Pins Hardware Configuration
   writeCommand(0x12);
   writeCommand(0x81);            //0x81   Set Contrast Control
   writeCommand(0xAF);
   writeCommand(0xd9);           //0xD9   Set Pre-Charge Period
   writeCommand(0x25);
   writeCommand(0xdb);          //0xDB   Set VCOMH Deselect Level
   writeCommand(0x20);
   writeCommand(0xa4);    //0xA4   Set Entire Display On/Off
   writeCommand(0xa6);          //0xA6   Set Normal/Inverse Display
  // write_command(0xa7);
   writeCommand(0xA1);                           // mirror image of normal display selected
   //write_command(SSD1306_SET_COM_OUTPUT_SCAN_DIRECTION);
   writeCommand(0xaf);              //0xAF   Set OLED Display On  
    
    
    
 
}
