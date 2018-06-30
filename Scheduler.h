/*H**********************************************************************
* FILENAME :        Scheduler.h             
*
* DESCRIPTION :
*                Scheduling routines. 
*
* PUBLIC FUNCTIONS :
*       extern void CreateTask(uint8 Periodicity,void(*Ptr)(void),uint8 Priority);
*       extern void Scheduler(void);      
* 
* AUTHOR :    Kamal EL Din         
*
*
*H*/

#ifndef SCHEDULER_H_
#define SCHEDULER_H_
#include"Data_types.h"
typedef struct{
  uint8 Periodicity;
  void (*ptr)(void);
  uint8 Delay;
}Task;
extern void CreateTask(uint8 Periodicity,void(*Ptr)(void),uint8 Priority);
extern void Scheduler(void);
#endif
