#define F_CPU 12000000UL
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRB=0b11111111;
	DDRC=0b11111100;
	while(1)
	{
		 if(PINC==0b00000010)
			{		
				for(int i=0;i<500;i++)
				left();
			}
		else if(PINC==0b00000001)
			{
				for(int i=0;i<500;i++)
				right();
			}
		else
			{
				for(int i=0;i<400;i++)
				forward();
			}
	
	}
return 0;
}
void forward()
{
	PORTB=0b00001010;
	_delay_us(30);
	PORTB=0b00000000;
	_delay_us(70);
}

void right()
{
	PORTB=0b00001000;
	_delay_us(40);
	PORTB=0b00000000;
	_delay_us(60);
}
void left()
{
	PORTB=0b00000010;
	_delay_us(40);
	PORTB=0b00000000;
	_delay_us(60);
}
