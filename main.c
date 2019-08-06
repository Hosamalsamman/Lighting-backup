/*

 * main.c
 *
 *  Created on: Jul 30, 2019
 *      Author: hosam
 */

#include "pwm.h"
#include "uart.h"

int main (void)
{
	uart_init();

	while(1)
	{
		pwm(uart_receive());
	}
	return 0;
}


