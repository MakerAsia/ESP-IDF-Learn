#include "Arduino.h"
#include "Button.h"

#define LED_PIN 22
#define BUTTON1 39
#define BUTTON2 37
#define BUTTON3 38

Button button1 = Button(BUTTON1);

void setup(){
  Serial.begin(115200);
  Serial.println("\n");
  Serial.println("Hello world");
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  
}

void loop(){
  button1.read();
  if( button1.isPressed() ) {
    digitalWrite(LED_PIN, LOW); 
    Serial.println( "Pressed" );
  }
  else {
    digitalWrite(LED_PIN, HIGH);
  }
  delay(50); 
}


