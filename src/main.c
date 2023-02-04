/**
 * Author: Ramon Arents
 * Date:21-01-2023
 * Application: A traffic light that is applied in my Lego City
 * */

#include <avr/io.h>
#include <util/delay.h>
/* Constants (LEDS)*/
#define LED1 0b00000010 /* pin 9 (PB1) */
#define LED2 0b00000100 /* pin 10 (PB2) */
#define LED3 0b00001000 /*  pin 11 (PB3)*/ 

int main(void)
{
  /* setup */
  DDRB = 0b00001110; 
  while(1)
  {
    PORTB = LED3;
    _delay_ms(10000);
    PORTB = LED1;
    _delay_ms(10000);
    PORTB = LED2;
    _delay_ms(3500);
  }
  return 0;
}