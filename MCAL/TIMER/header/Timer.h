#ifndef TIMER_H_
#define TIMER_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "BIT_MATH.h"




void timer1_init(void);// To initialize timer(1) to measure time between tasks every 1ms
 
void timer0_init(void);// To initialize timer(0) to trigger INT every 100ms to get Temp.

void timer1_INT_disable(void);// To stop timer(1) from triggering INTERRUPTS.

void timer1_INT_enable(void);//To make timer(1) start.


#endif /* TIMER_H_ */