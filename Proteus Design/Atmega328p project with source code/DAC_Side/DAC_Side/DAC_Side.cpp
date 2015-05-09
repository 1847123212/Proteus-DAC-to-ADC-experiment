#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void) {
    DDRD = 0xFF;
	bool inc = true;
	
	while(1) {
		if(inc){
			PORTD++;
			if(PORTD==0xFF) inc = !inc;
		}else{
			PORTD--;
			if(PORTD==0) inc = !inc;	
		}
		_delay_us(100);
	}
}