/*
 * Uses two buttons to set two colors as 'from'
 * and 'to' and fades from 'from' and 'to' while
 * buttons are not pressed.
 * ButtonFrom at pin 2
 * ButtonTo at pin 4
 * RGB LED at pins 6, 10, 11
 */
 const int buttonFrom = 2;
 const int buttonTo = 4;
 const int pinLedR = 6;
 const int pinLedG = 10;
 const int pinLedB = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonFrom, INPUT);
  pinMode(buttonTo, INPUT);
  pinMode(pinLedR, OUTPUT);
  pinMode(pinLedG, OUTPUT);
  pinMode(pinLedB, OUTPUT);
  digitalWrite(buttonFrom, HIGH);
  digitalWrite(buttonTo, HIGH);
}
int fromR = 255;
int fromG = 0;
int fromB = 0;
int toR = 0;
int toG = 255;
int toB = 0;
int redVal = 255;
int grnVal = 0;
int bluVal = 0;

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(buttonFrom)==LOW){
    int t = fromR;
    fromR = fromG;
    fromG = fromB;
    fromB = t;
    redVal = fromR;
    grnVal = fromG;
    bluVal = fromB;
  }
  if (digitalRead(buttonTo)==LOW){
    int t = fromR;
    fromR = fromG;
    fromG = fromB;
    fromB = t;
    redVal = fromR;
    grnVal = fromG;
    bluVal = fromB;
  }
  // define RGB values for from and to colors
  
  // fades from color 'from' to color 'to'
  redVal += (toR==fromR)?0:((toR>fromR)?1:-1);
  grnVal += (toG==fromG)?0:((toG>fromG)?1:-1);
  bluVal += (toB==fromB)?0:((toB>fromB)?1:-1);
  
  // light the LED
  analogWrite(pinLedR, constrain(redVal, 0, 255));
  analogWrite(pinLedG, constrain(grnVal, 0, 255));
  analogWrite(pinLedB, constrain(bluVal, 0, 255));
}
