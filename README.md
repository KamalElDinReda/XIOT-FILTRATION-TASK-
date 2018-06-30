# XIOT-FILTRATION-TASK-
This is an arduino project to control one input and output (IO Pins).    
The input pin is a switch and it acts as an external interrupt once it is pressed it should light the led connected to output pin.    
If the switch is pressed must send “pressed” to the serial monitor only one time also send the LED states ”ON” or “OFF”.    
The whole function could be used many times in the program without interfering each-other.    
The program send continuous serial date comes from temperature sensor with 3 second rate .at the same time.   

Requirments  
---
1)Arduino Uno     
2)Switch    
3)Lm35 temperature sensor  

Instructions to set the app up in local sandbox    
---
1)download Timer one library and set it in arduino libraries.  
2)connect the temperature sensor to pin A1.  
3)connect the switch to pin 2.  
4)connect the led to pin 13.  

Assumptions
---
1)humans cann't detetect what happens in 500 ms.  

Issues
---
1)the problem of the bouncing of switch but i manged to overcome this issue.  









