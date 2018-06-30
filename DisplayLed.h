/*H**********************************************************************
* FILENAME :        DisplayLed.h             
*
* DESCRIPTION :
*                displaying led states routines. 
*
* PUBLIC FUNCTIONS :
*       extern void DisplayLedTask(void);     
*
* NOTES :
*       This function to display the led state on the serial monitor and the led 13 
* 
* AUTHOR :    Kamal EL Din         
*
*
*H*/
#ifndef DISPLAYLED_H_
#define DISPLAYLED_H_
#include"Data_types.h"
#include <Arduino.h>
#define On  0
#define Off 1
extern uint8 LedState;                              //Global flag indicates the led state 
extern void DisplayLedTask(void);
#endif
