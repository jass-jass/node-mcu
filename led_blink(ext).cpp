#include <Arduino.h>

void setup() 
{
  pinMode(5, OUTPUT);
}

void loop() 
{
digitalWrite(5, HIGH);
  delay(200);
  digitalWrite(5,LOW);
  delay(200);
}
