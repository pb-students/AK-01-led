#include<msp430x14x.h>


void main( void )
{
  WDTCTL=WDTPW+ WDTHOLD;                       // zatrzymanie WDT
  P2DIR |= BIT1;                               // STATUS LED

  while (1)                                    // nieskończona pętla 
  {
    P2OUT ^=BIT1;                              // zmiana stanu diody na przeciwny
    for (i = 0x1FFF; i > 0; i--) {}            // opóźnienie
  }
}
