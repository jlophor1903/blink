#include <Arduino.h>
#define PIN 13


void setup() {
 pinMode(PIN, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.print("funciona.");
}


