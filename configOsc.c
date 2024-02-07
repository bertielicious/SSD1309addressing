#include "constants.h"
void configOsc(void)
{
     /*setup internal clock oscillator**********************/
    OSCCONbits.IRCF3 = HI;           // 4MHz clock setup
    OSCCONbits.IRCF2 = HI;           /* OSCCONbits 5-2 IRCF<3:0>: Internal Oscillator Frequency Select bits
                                    1111 = 16 MHz or 48 MHz HF (see Section 5.2.2.1 ?HFINTOSC?)
                                    1110 = 8 MHz or 24 MHz HF (3x PLL) or 32 MHz HF (4x PLL) (see Section 5.2.2.1 ?HFINTOSC?)
                                    1101 = 4 MHz */
    OSCCONbits.IRCF1 = HI;
    OSCCONbits.IRCF0 = HI;
    OSCCONbits.SCS1 = HI;            // system clock = INTOSC (SCS = 1X), clock freq determined by IRCF<3:0
    OSCCONbits.SCS0 = LO;
}
