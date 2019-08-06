/*

 * pwm.c
 *
 *  Created on: Jul 30, 2019
 *      Author: hosam
 */
#include "pwm.h"

pwm (uint8 duty_cycle)
{
	DDRB|=(1<<PB3);//oc0
	TCCR0=0x6A;
	OCR0=duty_cycle;
}



