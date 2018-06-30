# Application goals  
The system's aim is to control an led connected to pin 13 using a switch connected to pin 2. Once the switch is pressed, the led must be   turned on and state of the led must be sent to the seial monitor.The system must send the reading of temperature sensor every 3 seconds.   
Updating the state of switch and updating temperature reading must not interfere with each other, The serial monitor is considered a   critical section of code.  

# process
**The system consists of 3 tasks:**  
1)the first task is called Debouncing, it is called every 250 ms to detect the state of the switch, the switch is not stable so it swings  between high and low state many times. the switch musch be in a constant state for 2 subsequent system ticks(250ms). This task is   responsible to determine the state of the switch.   

2)the second task called is called TempSenTask, this task gets the reading from ADC, converts it to degrees in celisious and it  
display the reading on the serial monitor.  

3)the third task is called DisplayLed. This task displays the led state on the serial monitor.  

**Scheduler:**  
The scgeduler gets called every 250 ms to execute the tasks accoring to their periority and periodicity. 

# Experience gained  
1)C++  
2)dynamic design:i learned how to divide the system into tasks and when to call a specified task.  





