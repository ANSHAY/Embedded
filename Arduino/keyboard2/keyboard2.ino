/*
 * This program emulates a keyboard with
 * 4 tones correspoding to 4 buttons. As
 * a button is presses, it plays the tone
 * of that button. each button is connected
 * through a resister to 5V on one side and
 * input pin on other side. The output is
 * given to a peizzo buzzer at pin 9.
 */
const int buttonPin[4] = {10, 11, 12, 13};     // names of input pins
const int keys[4] = {262, 294, 330, 349};      // the freq of different tones
const int buzzerPin = 9;

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<4; i++){
    pinMode(buttonPin[i], INPUT);
  }
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pitch = 0;
  for(int i=0; i<4; i++){
    if (digitalRead(buttonPin[i])==HIGH){
      pitch = keys[i];
      break;
    }
  }
  tone(buzzerPin, pitch, 100);
}
