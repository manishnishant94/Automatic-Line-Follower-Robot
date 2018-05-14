#define F_CPU 12000000UL
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRB=0b11111111;
	DDRC=0b11111100;
		while(1)
			{	if(PINC==0b00000011)
				{
					forward();
				}
				else if(PINC==0b000000001)
				{
					left();
				}
				else if(PINC==0b00000010)
				{
					right();
				}
				else
				{
					stop();
				}
			}
return 0;
}
void forward()
{	
	PORTB=0b00001010;
	_delay_us(45);
	PORTB=0b00000000;
	_delay_us(55);
}
void right()
{	
	PORTB=0b0001001;
	_delay_us(45);
	PORTB=0b00000000;
	_delay_us(55);
}
void left()
{	
	PORTB=0b00000110;
	_delay_us(45);
	PORTB=0b00000000;
	_delay_us(55);
}

 void stop()
 {
 PORTB=0b00000000;
 _delay_us(100);
 }
