#include "Timer.h"

void timer1_init(void)
{
	
	/* we are working with AVR ATmega32 chip with a frequency of 1 MHz
	 It triggers an interrupt every One millisecond*/
	
	
	/* Select CTC Mode*/
	SET_BIT(TCCR1B,WGM12);
	
	
	/* Load Value in OCR1A*/
	OCR1AH = 0b00000000;
	OCR1AL = 0b01100010;
	
	/* Select Clock Prescaler (F_CPU / 1024) */
	SET_BIT(TCCR1B,CS10);
	CLEAR_BIT(TCCR1B,CS11);
	SET_BIT(TCCR1B,CS12);
	
	/* Enable Global Interrupt bit*/
	sei();

}

void timer0_init(void)
{
	
	/* choose mode*/
	SET_BIT(TCCR0,WGM01);
	
	/* Load Value in OCR0*/
	OCR0 = 250;
	
	/*Choose Prescaler*/
	SET_BIT(TCCR0,CS00);
	SET_BIT(TCCR0,CS02);
	
	/* Enable Timer INT*/
	sei();
	SET_BIT(TIMSK,OCIE0);
	
}

void timer1_INT_disable(void){
	
	/* Disable Interrupts when Comparing with values A and B */
	CLEAR_BIT(TIMSK,OCIE1A);
	/* CLEAR_BIT(TIMSK,OCIE1B); */
}

void timer1_INT_enable(void){
	
	/* Enable Interrupts when Comparing with values A and B */
	SET_BIT(TIMSK,OCIE1A);
	/*SET_BIT(TIMSK,OCIE1B);*/
}