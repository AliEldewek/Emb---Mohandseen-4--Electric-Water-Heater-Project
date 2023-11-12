#include "SSD_disp.h"
#include "STD_TYPES.h"
uint_8 Nums[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};


void SSD_init(void){
	
	/* setting Seven Segment Pins as output pins */
	SSD_PORT_DIR = 0xFF;
	SET_BIT(SSD_ENABLE_PORT_DIR,SSD1_ENABLE_PIN);
	SET_BIT(SSD_ENABLE_PORT_DIR,SSD2_ENABLE_PIN);
	
	/* Seven Segment initially OFF */
	SSD_disable();
	
}
	
void SSD_send(uint_16 N){
	SSD_DATA = Nums[N];
}


void SSD_enable(uint_8 disp){
	if(disp == 1){
		SET_BIT(SSD_ENABLE_PORT,SSD1_ENABLE_PIN);
		CLEAR_BIT(SSD_ENABLE_PORT,SSD2_ENABLE_PIN);
	}
	else if (disp == 2){
		SET_BIT(SSD_ENABLE_PORT,SSD2_ENABLE_PIN);
		CLEAR_BIT(SSD_ENABLE_PORT,SSD1_ENABLE_PIN);
	}
}

void SSD_disable(void){
	CLEAR_BIT(SSD_ENABLE_PORT,SSD1_ENABLE_PIN);
	CLEAR_BIT(SSD_ENABLE_PORT,SSD2_ENABLE_PIN);
}

void SSD_turn_off(void){
	SSD_DATA = 0x00;
}

void SSD_write(uint_16 N){
	uint_8 units;
	uint_8 tens;
	
	units = N % 10;
	tens = (int) N / 10;
	
	SSD_enable(DISP1);
	SSD_send(units);
	_delay_ms(5);
	
	SSD_enable(DISP2);
	SSD_send(tens);
	_delay_ms(5);
}
