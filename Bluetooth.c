 #define F_CPU 12000000UL
#include<avr/io.h>
#include<util/delay.h>
#include "serial.h"
int main()
{
	DDRB=0b11111111;
	comm_init();
	
	while(1)
	{
		int i;
		char val=get_data();
			send_data(val);
		if(val=='F')
		{	for( i=0;i<200;i++)
			forward();
		}
		else if(val=='B')
		{
			for(i=0;i<200;i++)
			backward();
		}
		else if(val=='L')
		{
			for( i=0;i<200;i++)
			left();
		}
		else if(val=='R')
		{
			for( i=0;i<200;i++)
			right();
		}
		else 
			{ 
				stop(); 
			}

	}

}

void forward()
{	
	PORTB=0b00001010;
	_delay_us(60);
	PORTB=0b00000000;
	_delay_us(40);
}
void backward()
{	
	PORTB=0b00000101;
	_delay_us(60);
	PORTB=0b00000000;
	_delay_us(40);
}
void right()
{	
	PORTB=0b00001001;
	_delay_us(60);
	PORTB=0b00000000;
	_delay_us(40);
}
void left()
{	
	PORTB=0b00000110;
	_delay_us(60);
	PORTB=0b00000000;
	_delay_us(40);
}
 void stop()
 {
 PORTB=0b00000000;
 _delay_us(100);
 }
