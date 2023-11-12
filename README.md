# Emb---Mohandseen-4--Electric-Water-Heater-Project
Electric Water Heater 
I developed an electric water heater utilizing the AVR ATmega32 microcontroller. The system incorporates various modules including ADC, EEPROM, SSD (Seven Segment Display), basic push buttons, LEDs, and interrupts, with a pivotal focus on the TIMER functionality. Specifically, two timers were employed to measure the time between tasks. The EEPROM is utilized to retain the latest user-modified desired temperature.

The operational sequence of the controller is as follows:

An ON/OFF button is connected to an external interrupt, enabling the toggle between the ON and OFF states.
In the OFF state, all functions are deactivated, and the user's desired temperature is stored in the EEPROM, while the microcontroller (MC) enters sleep mode.
In the ON state, the MC utilizes the internal ADC and a temperature sensor (LM35) to sense the actual temperature and stores it in an array.
This array encompasses the last 10 readings, which are used to determine when to activate or deactivate the heater/cooler based on their average.
The UP and DOWN buttons facilitate the transition from the ON state to the SETTINGS state, allowing the user to adjust the desired temperature.
If the user does not press the UP or DOWN buttons for five seconds, the system returns to the ON state, and the selected temperature is once again saved in the EEPROM.
Additionally, an indicator LED is incorporated to provide visual feedback on the current operation of the controller, indicating whether the heater or cooler is active and the operational state of the system.
