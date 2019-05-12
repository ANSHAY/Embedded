/* draws a pattern over 8 LEDs connected from pin 2 to 9
 *  The LEDs are lit in the following pattern
 *            _ _ _ _ _ _ _ _
 *            * _ _ _ _ _ _ *
 *            _ * _ _ _ _ * _ 
 *            _ _ * _ _ * _ _
 *            _ _ _ * * _ _ _
 *            _ _ _ * * _ _ _
 *            _ _ * * * * _ _
 *            _ * * * * * * _
 *            * * * * * * * *
 *            * * * _ _ * * *
 *            * * _ _ _ _ * *
 *            * _ _ _ _ _ _ *
 *            
 */

const int pinLED_array[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<8; i++){
      pinMode(pinLED_array[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // phase 1: reset all LEDs
  for(int i=0; i<8; i++){
      digitalWrite(pinLED_array[i], LOW);
  }
  delay(500);
  // phase 2: collision - lights approaching each other
  for (int j=0; j<4; j++){
    for(int i=0; i<8; i++){
      if (i==j || i==(7-j)){
        digitalWrite(pinLED_array[i], HIGH);
      }
      else{
        digitalWrite(pinLED_array[i], LOW);
      }
    }
    delay(1000);
  }
  // phase 3: explosion - LEDs lighting from center outwards
  for (int j=3; j>=0; j++){
    for(int i=0; i<8; i++){
      if (i>=j && i<=(7-j)){
        digitalWrite(pinLED_array[i], HIGH);
      }
      else{
        digitalWrite(pinLED_array[i], LOW);
      }
    }
    delay(1000);
  }
  // phase 4: extinguish - LEDs dying out from center outwards
  for (int j=3; j>=0; j++){
    for(int i=0; i<8; i++){
      if (i>=j && i<=(7-j)){
        digitalWrite(pinLED_array[i], LOW);
      }
      else{
        digitalWrite(pinLED_array[i], HIGH);
      }
    }
    delay(1000);
  }

  /* Another way to do the same
   *  for(int i=0; i<12; i++){
      if(i<4){
        digitalWrite(pinMode_array[i], !digitalRead(pinMode_array[i]));
        digitalWrite(pinMode_array[7-i], !digitalRead(pinMode_array[7-i]));
        try{
          digitalWrite(pinMode_array[i-1], !digitalRead(pinMode_array[i-1]));
          digitalWrite(pinMode_array[8-i], !digitalRead(pinMode_array[8-i]));
        }
      }
      else if(i>4){
        j = 3 - i%4;
        digitalWrite(pinMode_array[j], !digitalRead(pinMode_array[j]));
        digitalWrite(pinMode_array[7-j], !digitalRead(pinMode_array[7-j]));
      }
      delay(500);
      }
   */
}
