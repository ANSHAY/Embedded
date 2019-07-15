/*
 * Connects a joystick to an Arduino and
 * lights up 5 LEDs depending on the
 * direction of joystick(4) and click.
 * Change the joystick and LED pin numbers 
 * below to the ones you have connected on
 * the Arduino.
 */
const int joyX = 1;
const int joyY = 2;
const int joyF = 3;
const int LED[] = {4, 5, 6, 7, 8};

const int threshUp = 700;
const int threshDown = 300;
const int threshLeft = 300;
const int threshRight = 700;

void setup() {
  // put your setup code here, to run once:
  pinMode(joyX, INPUT);
  pinMode(joyY, INPUT);
  pinMode(joyF, INPUT);
  for(int i=0;i<5;i++){
    pinMode(LED[i], OUTPUT);
  }
  digitalWrite(joyF, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<5; i++){
    digitalWrite(LED[i], LOW);
  }
  int Xval = analogRead(joyX);
  int Yval = analogRead(joyY);
  int Fval = digitalRead(joyF);
  if (Yval > threshUp){
    digitalWrite(LED[0], HIGH);
  }
  if (Yval < threshDown){
    digitalWrite(LED[1], HIGH);
  }
  if (Xval < threshLeft){
    digitalWrite(LED[2], HIGH);
  }
  if (Xval > threshRight){
    digitalWrite(LED[3], HIGH);
  }   
  if (!Fval){
    digitalWrite(LED[4], HIGH);
  }
}
