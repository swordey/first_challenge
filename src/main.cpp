#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("");
  Serial.println("Hi there,");
  Serial.println("");
  Serial.println("Congratulations, you can read the serial from an online device!");
  Serial.println("");
  Serial.println("Now you can proceed with the readme, and remote test on an online");
  Serial.println("device.");
  Serial.println("");
  Serial.println("Have fun!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
}