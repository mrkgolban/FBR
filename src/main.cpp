#include <Arduino.h>
#include <string.h>
#define powerport 3



// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {

  // put your main code here, to run repeatedly:
  String h = static_cast<String>(__TIME__[0]) + static_cast<String>(__TIME__[1]);
  if (h.toInt() >= 0 && h.toInt() <= 12)
    digitalWrite(powerport, HIGH);
  else
    digitalWrite(powerport, LOW);
}

// put function definitions here:
