/*

 * adc.c
 *
 *  Created on: Jul 30, 2019
 *      Author: hosam
 */
#include "adc.h"

 adc_init(uint8 channel)
{
	DDRA&=~(1<<channel);
	ADCSRA=0x87;
	ADMUX=0xc0;
	ADMUX |=  (1 << REFS0);
}
///////////////////////////////////////////////////////
uint8 adc_read()
{
	uint16 x=0;
	ADCSRA|=(1<<ADSC);
	while((ADCSRA&(1<<ADIF))==0);
	x=ADCL;
	x|=(ADCH<<8);
	x=(x*256)/1024;
	return (uint8)x;
}



