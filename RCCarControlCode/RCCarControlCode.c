#include <avr/io.h>

// ATMega8 RC Car - Control Engine by Tahmid

int main()
{
	DDRB = 0x00;
	DDRD = 0xFF;    // PORTC te 1 ta Slot kom, so PORTD was used
	while(1)
	{
		if (PINB == 128)
		{ PORTD = 160; } // Forward 

		if (PINB == 64)
		{ PORTD = 80; }  // Reverse 

		if (PINB == 160)
		{ PORTD = 128; }  // F-R

		if (PINB == 144)
		{ PORTD = 32; }   // F-L

		if (PINB == 96)
		{ PORTD = 64; }   // R-R

		if (PINB == 80)
		{ PORTD = 16; }    // R-L

		if ( PINB == 0 )
		{ PORTD = 0; }     // Clearing Memory or whatever it is,
						   // when no buttons are pressed
	
	
		if ( PINB == 192 || PINB == 224 || PINB == 240 || PINB == 112 || PINB == 48)
		{ PORTD = 0; }
						// F-R, or L-R or 3-4 ta button eksathe press korle
						// output khali kore dilam...
						// the car will stop... 

	}
}
