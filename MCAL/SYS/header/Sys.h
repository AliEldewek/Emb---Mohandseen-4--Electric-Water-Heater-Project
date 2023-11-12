#ifndef SYS_H_
#define SYS_H_



#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "Sys_Config.h"
#include "BIT_MATH.h"
#include "ADC.h"
#include "Buttons.h"
#include "Cool_Heat_Elements.h"
#include "LED.h"
#include "SSD_disp.h"
#include "Timer.h"
#include "EEPROM.h"

#define OFF 0
#define ON 1
#define SETTING 2


void sys_init(void);/* To initialize system by initializing all modules, and setting the
					initial temperature to the EEPROM.*/


void ON_state(void);/* To initialize system by initializing all modules, and setting the
					initial temperature to the EEPROM.*/

void OFF_state(void);/* This is the working state where it does the following:
						- waits for the timer to measure temperature using ADC every 100ms.
						- checks for the UP and DOWN buttons to switch to the SETTING mode.*/

void SET_state(void);/*Setting state*/
 
void change_temp(void);/*This function turns on the Heater or the Cooler.*/

void add_new_temp(uint_16 * arr , uint_16 new_val);/* This function is used to add the new measured temperature to
													the temperature array that will have its average during the code.*/
 
uint_16 calc_avg_temp(uint_16 * arr);//To calculate the last 10 measured temperatures.

void temp_arr_init(void);/*This function is a part of the Sys_init. function
						that reads the first actual temperature and put it at all elements in the
						temperature array.*/

void go_to_sleep(void);/*This function is to keep the CPU in the idle mode to save more
						power when it doesn't need to do any task at the moment.*/





uint_8 Curr_state;

uint_16 temp_arr[NUM_OF_TEMP_MEASURES];
uint_16 desired_temp;
uint_16 actual_temp;
uint_16 avg_temp;

uint_8 temp_measure_f;
uint_8 temp_measure_counter;
uint_8 setting_counter;

uint_16 toggle_f;
uint_8 arr_counter;


#endif /* SYS_H_ */