/* Blinks an LED at pin 3 and speeds up or down
 *  the blinking depending on input from button 
 *  at pin 4 and a pot at A0. When button is
 *  pressed, the speed is set as per the input
 *  from pot.
 */

 const int pot = A0;
 const int button = 4;
 const int pinLED = 3;
 int del = 100; // for delay from 20 to 100

 void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  pinMode(button, INPUT);
  pinMode(pinLED, OUTPUT);
  digitalWrite(button, HIGH); // sets pull up resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  // check which button is pressed and up or down the
  // delay accrdingly in increments of 10 msec
  if(digitalRead(button) == LOW){
    del = analogRead(pot);
    // constrain the delay between 20 and 100
    del = map(del, 0, 1023, 20, 100);
  }
  // blink the LED at computed delay
  digitalWrite(pinLED, HIGH);
  delay(del);
  digitalWrite(pinLED, LOW);
  delay(del);
}
