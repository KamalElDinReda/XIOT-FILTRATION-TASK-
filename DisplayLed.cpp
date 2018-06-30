#include"DisplayLed.h"
uint8 LedState=Off;
/**
 *  DisplayLedTask()
 *  this task is used to display the led state on the serial monito and pin 13 
 *  this task is called each 500 ms 
 *  this task gets the readings of switch from Debouncing task ,it compares it with the old readings and if the readings are different it displays the new reading    
*/
extern void DisplayLedTask(void)
{
  static uint8 OldLedState=Off;
  static uint8 NewLedState=Off; 
  NewLedState=LedState;
  if(OldLedState!=NewLedState)
  {
    OldLedState=NewLedState;
     switch(LedState)
  {
    case On:
     digitalWrite(13,HIGH);
     Serial.print("PRESSED");
     Serial.print(" LED IS ON");
     Serial.println();
    break;
    case Off:
    digitalWrite(13,LOW);
    Serial.print("NOT PRESSED");
    Serial.print(" LED IS OFF");
    Serial.println();
    break;
    
    
  }
    
  }
 
}

