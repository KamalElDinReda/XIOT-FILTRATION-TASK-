#include"TempSensor.h"
/**
 *  extern uint16 ReadTemp(void)-returns ADC reading 
 *  this task is used to solve the problem of switch bouncing 
*/
extern uint16 ReadTemp(void)
{
  uint8  TempPin=1;
  uint16 AdcReading;
  AdcReading=analogRead(TempPin);
  return AdcReading;
}
/**
 *  extern void TempDisplay(uint16 AdcReading)
 *  this function is used to convert ADC reading into temperature in Celisious  
 *  it is also used to display the temperature reading on the seria monitor  
*/
extern void TempDisplay(uint16 AdcReading)
{
  float mv = ( AdcReading/1024.0)*5000; 
  float cel = mv/10;
  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
}
/**
 *  extern void TempSenTask(void)
 *  this task is called each 3 seconds to get reading of ADC and to display the temperature sensor reading  
*/
extern void TempSenTask(void)
{
  uint16 AdcVal;
  AdcVal=ReadTemp();
  TempDisplay(AdcVal);
  
}

