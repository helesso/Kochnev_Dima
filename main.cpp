#include <Arduino.h>
int x = 2;
void setup(){
pinMode(x,OUTPUT);
}
void loop(){
digitalWrite(x,HIGH);
delay(3000);
digitalWrite(x,LOW);
delay(3000);
}
