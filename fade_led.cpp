#include <Arduino.h>
 
 int brightness = 0;

void setup() 
{
  pinMode(5, OUTPUT);
}

void loop() 
{
  while(brightness<700)
  {
    brightness +=100;
    analogWrite(5, brightness);
    delay(200);
  }  
  delay(200);
  while(brightness>0)
  {
    brightness -=100;
    analogWrite(5, brightness);
    delay(200);
  }
}
