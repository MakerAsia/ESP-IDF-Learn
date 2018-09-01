#include "Arduino.h"

extern "C" void app_main()
{
    initArduino();
    Serial.begin(115200);
    delay(1000);
    Serial.println("Arduino no loop");

    pinMode(4, OUTPUT);
    digitalWrite(4, HIGH);
}


