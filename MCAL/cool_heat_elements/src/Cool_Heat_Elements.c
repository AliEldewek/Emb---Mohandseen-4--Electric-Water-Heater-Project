

/* To initialize cooler and heater pins by making them OUTPUT.*/

#include "BIT_MATH.h"
#include "Cool_Heat_Elements.h"

void heat_init(void){
	SET_BIT(HEAT_PORT_DIR,HEAT_PIN);
}

void cool_init(void){
	SET_BIT(COOL_PORT_DIR,COOL_PIN);
}



/*To start the Heater OR the Cooler.*/

void heat_start(void){
	SET_BIT(HEAT_PORT,HEAT_PIN);
}

void cool_start(void){
	SET_BIT(COOL_PORT,COOL_PIN);
}


/*  To stop Heater OR Cooler from working.*/

void heat_stop(void){
	CLEAR_BIT(HEAT_PORT,HEAT_PIN);
}

void cool_stop(void){
	CLEAR_BIT(COOL_PORT,COOL_PIN);
}