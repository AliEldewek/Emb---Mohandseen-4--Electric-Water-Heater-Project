#ifndef ADC_H_
#define ADC_H_


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <avr/io.h>


void ADC_init(void);
uint_16 ADC_read(void);


#endif /* ADC_H_ */