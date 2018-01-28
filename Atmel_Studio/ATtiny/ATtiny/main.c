/*
 * ATtiny.c
 *
 * Created: 12/6/2017 12:47:34 PM
 * Author : Prothomrobi
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB |= (1<<PB0); //Nakes first pin of PORTC as Output
//DDRB = 0x01;
DDRB &= ~(1<<PB2);//Makes firs pin of PORTD as Input
//DDRB = 0b00000001; //Makes all pins of PORTD input




while(1) //infinite loop
{
if(PINB & (1<<PB2)) //If switch is pressed
{

PORTB |= (1<<PB0); //Turns ON LED
_delay_ms(500); //3 second delay
PORTB &= ~(1<<PB0); //Turns OFF LED
//PORTB = (1<<PB0);
//_delay_ms(500);
//PORTB &= ~(1<<PB0);


}
}
}
