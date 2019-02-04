  /* Alternates two red LEDs if a button is not pressed,
  but lights up a green LED when the button is pressed. */
  
  const int red1 = 5;
  const int red2 = 3;
  const int green = 6;

  const int switchButton = 4;
  
  void setup() {
  // put your setup code here, to run once:
    pinMode(red1, OUTPUT);
    pinMode(red2, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(switchButton, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int switchVal;
  switchVal = digitalRead(switchButton);

  if(switchVal == LOW){
    digitalWrite(green, LOW);
    
    digitalWrite(red1, HIGH);
    digitalWrite(red2, LOW);

    delay(500);

    digitalWrite(red1, LOW);
    digitalWrite(red2, HIGH);

    delay(500);
  }
  else{
    digitalWrite(green, HIGH);
    digitalWrite(red1, LOW);
    digitalWrite(red2, LOW);
  }
}
