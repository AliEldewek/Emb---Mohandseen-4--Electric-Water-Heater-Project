/*
 * ssd.h
 *
 *  Author: Mostafa Ghazolley
 *  Atmel Studio 7.0
 */ 


#ifndef SSD_H_
#define SSD_H_


#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "STD_TYPES.h"
	
// SSD Display Macros
#define DISP1 1
#define DISP2 2

#define SSD_ENABLE_PORT_DIR DDRB
#define SSD_ENABLE_PORT PORTB
#define SSD1_ENABLE_PIN 6 
#define SSD2_ENABLE_PIN 7
#define SSD_DATA PORTD
#define SSD_PORT_DIR DDRD


void SSD_init(void);// To initialize the Seven Segment by making its port OUTPUT
 

void SSD_send(uint_16);// To Upload data (Number) to the Seven Segment.



void SSD_enable(uint_8);/* the 2 seven seg. are multiplexed and works with the same pins.
						So, this function is to enable one and disable the other.*/
 
void SSD_disable(void);//To disable the two seven segments for some special cases.
 
void SSD_turn_off(void);//To turn off the Seven Segment in the OFF STATE.

void SSD_write(uint_16);// To calculate what to write on each of the two SSDs, and send.


#endif /* SSD_H_ */