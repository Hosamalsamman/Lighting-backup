/*
 * adc.h
 *
 *  Created on: Jul 30, 2019
 *      Author: hosam
 */

#ifndef ADC_H_
#define ADC_H_
#include <avr/io.h>
#include "PLATFORM_TYPES.h"

void adc_init(uint8 channel);
uint8 adc_read(void);


#endif /* ADC_H_ */
