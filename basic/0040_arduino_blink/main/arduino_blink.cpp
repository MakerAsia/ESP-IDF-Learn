#include "Arduino.h"

#define LED_PIN 22

void setup(){
  Serial.begin(115200);
  Serial.println("\n");
  Serial.println("Hello world");
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  
}

void loop(){
  digitalWrite(LED_PIN, LOW); 
  delay(1000);
  digitalWrite(LED_PIN, HIGH);
  delay(1000); 
}


