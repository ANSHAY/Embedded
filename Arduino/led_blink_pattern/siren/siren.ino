/* Blinks an LED at pin 3 and speeds up or down
 *  the blinking depending on input from two
 *  buttons at pins 2 and 4
 */

 const int buttonUp = 2;
 const int buttonDown = 4;
 const int pinLED = 3;
 int del = 100; // for delay from 20 to 100

 void setup() {
  // put your setup code here, to run once:
  pinMode(buttonUp, INPUT);
  pinMode(buttonDown, INPUT);
  pinMode(pinLED, OUTPUT);
  digitalWrite(buttonUp, HIGH); // sets pull up resistor
  digitalWrite(buttonDown, HIGH); //sets pull up resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  // check which button is pressed and up or down the
  // delay accrdingly in increments of 10 msec
  if(digitalRead(buttonUp) == LOW){
    del -= 10;
  }
  else if (digitalRead(buttonDown) == LOW){
    del += 10;
  }
  
  // constrain the delay between 20 and 100
  del = constrain(del, 20, 100);
  
  // blink the LED at computed delay
  digitalWrite(pinLED, HIGH);
  delay(del);
  digitalWrite(pinLED, LOW);
  delay(del);
}
