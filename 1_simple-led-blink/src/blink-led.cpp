// Blink LED buildin (GPIO2) and D8 (GPIO15)
#include <ESP8266WiFi.h>

void setup() {

  // Initialize GPIO15 and GPIO2 as an output
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(D1, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, LOW); // in nodeMcu, LED buildin Low=HIGH = off
  digitalWrite(D1, HIGH);
  delay(500); // Wait for 500 milliseconds (0.5 seconds)

  // Turn the LED off
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(D1, LOW);
  // digitalWrite(8, LOW);
  delay(500); // Wait for 500 milliseconds (0.5 seconds)
}