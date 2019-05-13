/* lights up the LEDs from top to bottom
   and then goes backwards so only one LED is on at any time.
   8 LEDs are connected from pin 2 to 9 through 330ohm resistors each.
*/
const int pinArray[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i<8; i++){
    pinMode(pinArray[i], OUTPUT);
  }
  digitalWrite(pinArray[0], HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=1; i<8; i++){
    digitalWrite(pinArray[i-1], LOW);
    digitalWrite(pinArray[i], HIGH);
    delay(100);
  }
  for (int i=7; i>0; i--){
    digitalWrite(pinArray[i-1], HIGH);
    digitalWrite(pinArray[i], LOW);
    delay(100);
  }
}
