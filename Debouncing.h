/*H**********************************************************************
* FILENAME :        Debouncing.h             
*
* DESCRIPTION :
*                  Debouncing routines. 
*
* PUBLIC FUNCTIONS :
*       extern void Debounceing(void);     
*
* NOTES :
*       This function to solve the problem of bouncing of switch contains a state machine to solve it. 
* 
* AUTHOR :    Kamal EL Din         
*
*
*H*/
#ifndef DEBOUNCING_H_
#define DEBOUNCING_H_
#include"Data_types.h"
#include"DisplayLed.h"
#include <Arduino.h>
#define Pressed    0
#define NotPressed 1
#define debouncing 2
extern  uint8 TaskFlag;                                 //Global flag to unlock the task of debouncing when an interrupt is fired 
extern void Debounceing(void);
#endif
