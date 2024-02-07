#include "constants.h"
void initPorts(void)
{
      //********TURN OFF ANALOGUE INPUTS**********************
    ANSELA = 0x00;                  // turn off all ADC inputs on PORTA
    ANSELB = 0x00;                  // turn off all ADC inputs on PORTB
    ANSELC = 0x00;                  // turn off all ADC inputs on PORTC
    
    /*Set data direction of I/O pins*/
    TRISBbits.TRISB4 = LO;  //pin 13    CS
    TRISBbits.TRISB5  = LO; // pin 12   DC
    TRISAbits.TRISA5 = HI; // pin 2     RES
    TRISBbits.TRISB6 = LO;  // pin 11   SCK
    TRISCbits.TRISC7 = LO;  // pin 9    SDO
    TRISAbits.TRISA4 = LO;  // pin 3   DIAGNOSTIC_LED
    TRISCbits.TRISC5 = LO;  // pin 5    Vcc 1309 enable
}
