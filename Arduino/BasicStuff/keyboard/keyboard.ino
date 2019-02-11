/*
 * This program emulates a keyboard with
 * 4 tones correspoding to 4 buttons. As
 * a button is pressed, it plays the tone
 * of that button. Buttons are connected
 * in a resister ladder with one end of
 * ladder at 5V and other end of ladder
 * at input. The output is given to a
 * peizzo buzzer at pin 9.
 */
const int buttonPin = A0;
const int keys[] = {262, 294, 330, 349};    // the freq of different tones
const int buzzerPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pitch = 0;
  int input = analogRead(buttonPin);
  if (input > 800){
    pitch = keys[0];
  }
  else if (input > 600){
    pitch = keys[1];
  }
  else if (input > 400){
    pitch = keys[2];
  }
  else if (input > 200){
    pitch = keys[3];
  }
  tone(buzzerPin, pitch, 100);
}
