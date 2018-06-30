#include"TimerOne.h"
#include"Data_types.h"
#include"TempSensor.h"
#include"Scheduler.h"
#include"Debouncing.h"
const uint8 LedPin = 13;                                                            //Pin 13 is connected to led
const uint8 InterruptPin = 2;                                                       //Switch is connected to pin 2 external interrupt 
uint8 TempPin=1;                                                                    //Temperature sensor is connected to pin A1
void setup() {
  // put your setup code here, to run once:
  Timer1.initialize(250000);                                                         //Defining the tick of system(250ms)  
  Timer1.attachInterrupt(Scheduler);                                                 //Attaching call back function to the timer interrupt which is Scheduler() 
  analogReference(DEFAULT);                                                          //VREF to ADC is 5V
  Serial.begin(9600);                                                                //Setting baud rate to 9600 for UART
  pinMode(LedPin, OUTPUT);                                                           //Setting pin 13 as output pin which us connected to led 
  pinMode(InterruptPin, INPUT_PULLUP);                                               //Setting pin 2 which is connected to the switch as input pull up
  attachInterrupt(digitalPinToInterrupt(InterruptPin), UnlockTask, CHANGE);          //Attaching call back function to external interrupt which is UnlockTask() 
  CreateTask(11,TempSenTask,0);                                                      //Creating rask for temperature sensor which is called by the scheduler each 3seconds
  CreateTask(0,Debounceing,1);                                                       //Creating task for the bouncing of switch which is called each 250ms   
  CreateTask(0,DisplayLedTask,2);                                                    //Creating task for displaying the led state which is called each 500ms 

}

void loop() {
  // put your main code here, to run repeatedly:

}
void UnlockTask(void) {
  TaskFlag=1;                                                                       //Task flag to unlock the task of Debouncing()
}


