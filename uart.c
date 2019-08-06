
#include <avr/io.h>

uart_init()
{
	UCSRB=(1<<RXEN);
	UCSRC=(1<<UCSZ1)|(1<<UCSZ0)|(1<<URSEL);
	UBRRL=0x33;
}
////////////////////////////////////////////////////////////
uart_receive()
{
	while(!(UCSRA&(1<<RXC)));
	return UDR;
}




