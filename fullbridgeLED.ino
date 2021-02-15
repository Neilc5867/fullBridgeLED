/**
 * fullbridgeLED
 * 
 * Full bridge rectifier project that will power an LED.
 * Working from DC for now to test the circuit
 */

int powerPin = 4;  

void setup() {
  // put your setup code here, to run once:
  pinMode(powerPin, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // give em the 5 volts, this shouldn't fry the LED.
  digitalWrite(powerPin, HIGH);  
}
