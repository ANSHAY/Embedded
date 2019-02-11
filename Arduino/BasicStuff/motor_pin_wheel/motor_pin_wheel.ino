/*
 * This program turns on a motor when a button is pressed and
 * turns it off when the button is released. 
 * Motor is connected in series with a MOSFET to control the
 * motor with a fly diode as the gate of mosfet to protect from
 * back EMF generated on switching off the motor.
 */
const int buttonPin = 10;
const int motorPin = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == HIGH){
    digitalWrite(motorPin, HIGH);
  }
  else{
    digitalWrite(motorPin, LOW);
  }
}
