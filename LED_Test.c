#define F_CPU 12000000UL
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRB=0b11111111;
	//int a[]={1,2,4,8,4,2};
	while(1)
	{
		 PORTB=0b00001111;
		 _delay_ms(1000);
		 PORTB=0b00000000;
		 _delay_ms(1000);
	}
return 0;
}
