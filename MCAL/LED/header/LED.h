#ifndef LED_H_
#define LED_H_


#include <avr/io.h>
#include "BIT_MATH.h"

// Define the Pins of LEDs 
#define LED_PORT_DIR DDRB
#define LED_PORT PORTB
#define LED_PIN 0



void led_init(void);// To init heating element indication led by making it an output pin.

void led_on(void);// To turn on or toggle the LED.

void led_off(void); //To turn off or toggle the LED.



#endif /* LED_H_ */