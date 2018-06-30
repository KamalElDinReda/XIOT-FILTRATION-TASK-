#include"Debouncing.h"
uint8 TaskFlag;

/**
 *  Debouncing()
 *  this task is used to solve the problem of switch bouncing 
 *  tis task is called each 250 ms 
 *  the state of the switch is update when the reading of switch is HIGH or LOW for 2 ticks  
*/
extern void Debounceing(void)
{
  static uint8 Counter_High=0;
  static uint8 Counter_Low=0;
  static uint8 state=0;
  if(TaskFlag==1)
  {
  switch(state)
  {
    case NotPressed:
    if(digitalRead(2)==Pressed)
    {
      state=debouncing;
    }
    break;
    case Pressed:
    if(digitalRead(2)==NotPressed)
    {
      state=debouncing;
    }
    case debouncing:
    if(digitalRead(2)==Pressed)
    {
      Counter_High++;
      Counter_Low=0;
      
    }
    if(digitalRead(2)==NotPressed)
    {
      Counter_Low++;
      Counter_High=0;
      
    }
      if(Counter_High==1)
    {
      state= Pressed;
      Counter_High=0;
      Counter_Low=0;
      LedState=On;
    }
    if(Counter_Low==1)
    {
      state=NotPressed;
      Counter_Low=0;
      Counter_High=0;
      LedState=Off;
    }
    
    break;
    }
  }
}

