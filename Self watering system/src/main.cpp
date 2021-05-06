// This code uses the arduino framework.
#include <Arduino.h>

//Defines for pins
#define ledPin 2
#define moisturePin 4

// Set up global variables
int moistureVal = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // Setup serial
  Serial.begin(9600);
  // initialize and set up pins.
  pinMode(ledPin, OUTPUT);
  pinMode(moisturePin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Read the moisture and send the reading on serial
  moistureVal = analogRead(moisturePin);
  Serial.println(moistureVal);

  // If the mositure reading is greater than 2048 (ADC value ranges from 0-4095 so this is about half)
  // turn the LED on
  if(moistureVal>2047){
    digitalWrite(ledPin, HIGH);   // turn the LED on by setting pin to HIGH
  }
  else  // Else LED off
  {
    digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  }
  // 1 second delay at the end of loop.
  delay(1000);  
}