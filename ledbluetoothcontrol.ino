#include <SoftwareSerial.h>
const int ledPin = 13; 
const int rxPin = 2; 
const int txPin = 3; 
SoftwareSerial bluetooth(rxPin, txPin);
void setup() {
  pinMode(ledPin, OUTPUT);
  bluetooth.begin(9600);
}
void loop() {
  if (bluetooth.available()) {
    char receivedChar = bluetooth.read();
    if (receivedChar == '1') {
      // Turn on the LED
      digitalWrite(ledPin, HIGH);
    } else if (receivedChar == '0') {
      // Turn off the LED
      digitalWrite(ledPin, LOW);
    }
  }
}
