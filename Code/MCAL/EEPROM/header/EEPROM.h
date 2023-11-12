
#ifndef EEPROM_H_
#define EEPROM_H_

#include <avr/io.h>
#include "BIT_MATH.h"


// To write data in the EEPROM given the address and the data.

void EEPROM_write(const unsigned short addr, unsigned char data);


// To read the data from the EEPROM given the Address.

unsigned char EEPROM_read(const unsigned short addr);


#endif /* EEPROM_H_ */