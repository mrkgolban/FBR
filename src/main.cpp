#include <Arduino.h>
#include <string.h>
#define powerport 3
String h;




void setup() {
  Serial.begin(9600);
}

void loop() {
  h = static_cast<String>(__TIME__[0]) + static_cast<String>(__TIME__[1]);
  if (h.toInt() >= 0 && h.toInt() <= 12)
    digitalWrite(powerport, HIGH);
  else
    digitalWrite(powerport, LOW);
}

