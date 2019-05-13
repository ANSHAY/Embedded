/* draws a pattern over 8 LEDs connected from pin 2 to 9
 *  through 330ohm resistors each.
 *  The LEDs are lit in the following pattern
 * 01           * _ _ _ _ _ _ *
 * 02           _ * _ _ _ _ * _ 
 * 03           _ _ * _ _ * _ _
 * 04           _ _ _ * * _ _ _
 * 05           _ _ _ * * _ _ _
 * 06           _ _ * * * * _ _
 * 07           _ * * * * * * _
 * 08           * * * * * * * *
 * 09           * * * _ _ * * *
 * 10           * * _ _ _ _ * *
 * 11           * _ _ _ _ _ _ *
 * 12           _ _ _ _ _ _ _ _
 *            
 */

const int pinLedArray[] = {2, 3, 4, 5, 6, 7, 8, 9};
int ledState[] = {HIGH, LOW, LOW, LOW}; 
int count = 0;
byte pattern = 0b1000001;

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<8; i++){
      pinMode(pinLedArray[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  count = (count++)%12;
  if (count == 0){
    pattern = 0b0000001;
  }
  else if (count < 4){
    pattern = pattern << 1;
  }
  else if(count < 8){
    pattern = 0b1000 + (pattern >> 1);
  }
  else{
    pattern = pattern >> 1;
  }
  byte temp = pattern;
  for (int i=0; i<4; i++){
    ledState[i] = temp%2;
    temp = temp >> 1;
    digitalWrite(pinLedArray[i], ledState[i]);
    digitalWrite(pinLedArray[7-i], ledState[i]);
  }
  delay(1000); 
  
  /* Another method of making this pattern
    // phase 1: reset all LEDs
    for(int i=0; i<8; i++){
        digitalWrite(pinLedArray[i], LOW);
    }
    delay(500);
    // phase 2: collision - lights approaching each other
    for (int j=0; j<4; j++){
      for(int i=0; i<8; i++){
        if (i==j || i==(7-j)){
          digitalWrite(pinLedArray[i], HIGH);
        }
        else{
          digitalWrite(pinLedArray[i], LOW);
        }
      }
      delay(1000);
    }
    // phase 3: explosion - LEDs lighting from center outwards
    for (int j=3; j>=0; j++){
      for(int i=0; i<8; i++){
        if (i>=j && i<=(7-j)){
          digitalWrite(pinLedArray[i], HIGH);
        }
        else{
          digitalWrite(pinLedArray[i], LOW);
        }
      }
      delay(1000);
    }
    // phase 4: extinguish - LEDs dying out from center outwards
    for (int j=3; j>=0; j++){
      for(int i=0; i<8; i++){
        if (i>=j && i<=(7-j)){
          digitalWrite(pinLedArray[i], LOW);
        }
        else{
          digitalWrite(pinLedArray[i], HIGH);
        }
      }
      delay(1000);
    }
   */

  /* Yet another way to do the same
   *  for(int i=1; i<=12; i++){
        if (i==12){
          ledState[0] = !ledState[0];
          digitalWrite(pinLedArray[0], ledState[0]);
          digitalWrite(pinLedArray[7], ledState[0]));
        }
        else if(i<4){
          ledState[i] = !ledState[i];
          digitalWrite(pinLedArray[i], ledState[i]);
          digitalWrite(pinLedArray[7-i], ledState[i]));
          ledState[i-1] = !ledState[i-1];
          digitalWrite(pinLedArray[i-1], ledState[i-1]));
          digitalWrite(pinLedArray[8-i], ledState[i-1]));
        }
        else if(i>4){
          j = 3 - i%4;
          ledState[j] = !ledState[j];
          digitalWrite(pinLedArray[j], ledState[j]));
          digitalWrite(pinLedArray[7-j], ledState[j]));
        }
        delay(500);
      }
   */

  /* Yet another and better way
    count = (count++)%12;
    if (count == 0){
      ledState[count] = !ledState[count];
    }
    else if (count < 4){
      ledState[count] = !ledState[count];
      ledState[count-1] = !ledState[count-1];
    }
    else if (count > 4 && count < 8){
      ledState[count] = !ledState[count];
    }
    else if (count >=8 ){
      ledState[count-4] = !ledState[count-4];
    }
    for (int i=0; i<4; i++){
      digitalWrite(pinLedArray[i], ledState[i]);
      digitalWrite(pinLedArray[7-i], ledState[i]);
    }
    delay(500);
   */   
}
