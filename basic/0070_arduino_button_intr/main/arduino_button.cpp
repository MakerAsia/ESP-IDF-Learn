#include "Arduino.h"

#define LED_PIN 22
#define BUTTON1 39
#define BUTTON2 37
#define BUTTON3 38

struct ButtonInfo {
    const uint8_t PIN;
    uint32_t numberKeyPresses;
    bool pressed;
};

ButtonInfo bttn1 = {BUTTON1, 0, false};

void IRAM_ATTR isr(void* arg) {
    ButtonInfo* s = static_cast<ButtonInfo*>(arg);
    s->numberKeyPresses += 1;
    s->pressed = true;
}

void setup(){
  Serial.begin(115200);
  Serial.println("\n");
  Serial.println("Hello world");

  pinMode(bttn1.PIN, INPUT_PULLUP);
  attachInterruptArg(bttn1.PIN, (void (*)(void))(isr), &bttn1, FALLING);  
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  
}

void loop(){
  if (bttn1.pressed) {
    Serial.printf("Button 1 has been pressed %u times\n", bttn1.numberKeyPresses);
    bttn1.pressed = false;
  }
  else {
    delay(50);
  }
}


