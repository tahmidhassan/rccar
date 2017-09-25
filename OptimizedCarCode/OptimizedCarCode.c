#include <avr/io.h>

int main() {

DDRD = 0b11110000;

while (1)

	{
		while (PIND)
		{

			if (PIND == 0b1000 || PIND == 0b10101000) 
			{ PORTD = 0b10100000;
			} 										//Fwd
			else if (PIND == 0b0100|| PIND== 0b01010100)
			{ PORTD = 0b01010000; 
			}			// Rev

			else if (PIND == 0b1010 || PIND == 0b10001010)
			{ PORTD = 0b10000000; 
			}			// Fwd-Right

			else if (PIND == 0b1001 || PIND == 0b00101001)
			{ PORTD = 0b00100000; 
			}			// Fwd-Left

			else if (PIND == 0b0110 || PIND == 0b01000110)
			{ PORTD = 0b01000000; 
			}			// Rev-Right

			else if (PIND == 0b0101 || PIND == 0b00010101)
			{ PORTD = 0b00010000; 
			}			// Rev Left

			else
			{ PORTD = 0b00000000; 
			}			// Clear Memory / Do Nothing

		}
	}

}
