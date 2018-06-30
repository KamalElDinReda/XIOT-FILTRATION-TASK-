/*H**********************************************************************
* FILENAME :        TempSensor.h             
*
* DESCRIPTION :
*                ADC reading  routines. 
*
* PUBLIC FUNCTIONS :
*       extern uint16 ReadTemp(void); 
*       extern void TempDisplay(uint16 AdcReading);      
*       extern void TempSenTask(void);
*  
* NOTES :
*       This file contains routines to get ADC reading,diaplay temperature on serial monitor and task which is called each 3seconds to get the reading of ADC and to Display it on serial moitor
* AUTHOR :    Kamal EL Din         
*
*
*H*/
#ifndef TEMPSENSOR_H_
#define TEMPSENSOR_H_
#include"Data_types.h"
#include <Arduino.h>
extern uint16 ReadTemp(void); 
extern void TempDisplay(uint16 AdcReading);
extern void TempSenTask(void);
#endif /* TEMPSENSOR_H_ */

