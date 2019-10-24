/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground
 
 * Note: because most Arduinos have a built-in LED attached 
 to pin 13 on the board, the LED is optional.
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */

int sensorPin0 = A0;    // select the input pin for the thermistor ***********
int OLPin = 13;      // select the pin for the OpenLog ***************
int digVoltValue0 = 0;  // Digital Voltage 0 reading from sensor
int VoltageValue0 = 0; //variable to store actual VOltage value
int sensorPin1 = A1;    // select the input pin for the thermistor ***********
     // select the pin for the OpenLog ***************
int digVoltValue1 = 0;  // Digital Voltage 1 reading from sensor
int VoltageValue1 = 0;
int sensorPin2 = A2;    // select the input pin for the thermistor ***********
      // select the pin for the OpenLog ***************
int digVoltValue2 = 0;  // Digital Voltage 2 reading from sensor
int VoltageValue2 = 0;
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(OLPin, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  digVoltValue0 = analogRead(sensorPin0);  
  VoltageValue0 = 5*digVoltValue0/1023;  
  // Write to the open Logger
  digitalWrite(OLPin, VoltageValue0);     
      
  // read the value from the sensor:
  digVoltValue1 = analogRead(sensorPin1);  
  VoltageValue1 = 5*digVoltValue1/1023;  
  // Write to the open Logger
  digitalWrite(OLPin, VoltageValue1);         
  // stop the program for for 1000 milliseconds:                 
  
  // read the value from the sensor:
  digVoltValue2 = analogRead(sensorPin2);  
  VoltageValue2 = 5*digVoltValue2/1023;  
  // Write to the open Logger
  digitalWrite(OLPin, VoltageValue2);         
  // stop the program for for 1000 milliseconds, this is how often this measures
  delay(1000);                  
}
