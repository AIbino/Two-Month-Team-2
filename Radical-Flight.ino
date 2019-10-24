int ledOn = 13;
volatile int counter = 0;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600); // baud rate of 9600 is standard
  
  pinMode(ledOn, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.print("TEST!\n"); // testing serial monitor..
  
  // flashing LED to indicate operational code
  digitalWrite(ledOn, HIGH);
  delay(500); 
  digitalWrite(ledOn, LOW);
  delay(500);

  // checking geigor counter for interrups
  if(millis > 1000) {
    attachInterrupt(digitalPinToInterrupt(2), geiger, RISING); // Interrupts pin 2 to process Geiger Counter
    counter++;
    Serial.print("TEST!");
  }
}

int geiger() {
  Serial.print("Hey!");
}
