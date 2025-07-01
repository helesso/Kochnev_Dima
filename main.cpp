#include <Arduino.h>

#define LED_PIN 2

void setup(){
  pinMode(LED_PIN,OUTPUT);
  Serial.begin(115200);
  Serial.println('ESP32')
}

void loop(){
  digitalWrite(LED_PIN,HIGH);
  Serial.println('LED ON');
  delay(100);

  digitalWrite(LED_PIN,LOW);
  Serial.println('LED OFF');
  delay(3000);
}
