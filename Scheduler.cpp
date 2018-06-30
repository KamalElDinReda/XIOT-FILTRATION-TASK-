#include"Scheduler.h"
Task SystemTask[3];         //Array of structure 
/**
 *  extern void CreateTask(uint8 Periodicity,void(*Ptr)(void),uint8 Priority)
 *  Parameters:
 *  task periority
 *  task Periodicity
 *  pointer to the fuction of task 
 *  this task is called to  create a task in the system   
 *  it is called only once for each task 
*/
extern void CreateTask(uint8 Periodicity,void(*Ptr)(void),uint8 Priority)
{
  SystemTask[Priority].Periodicity=Periodicity;
  SystemTask[Priority].ptr=Ptr;
  SystemTask[Priority].Delay=Periodicity;
}
/**
 *  extern void Scheduler(void) 
 *  this fuction is called when an interrupt is fired by timer one to excute the tasks according to ther periorities and periodicity
*/

extern void Scheduler(void)
{
  uint8 Counter;
  for(Counter=0;Counter<=2;Counter++)
  {
    if(SystemTask[Counter].Delay==0)
    {
      SystemTask[Counter].ptr();
      SystemTask[Counter].Delay=SystemTask[Counter].Periodicity;
    }
    else
    {
      SystemTask[Counter].Delay--;
    }
    
  }
}

