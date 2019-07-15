/*
 * Shoots a rubber band with a servo motor.. boom!!
 * Then plays a victory tone! Tan-ta-dan!
 */
Servo servo;
const int pin_servo = 1;
const int pin_shoot = 2;

void setup() {
  // put your setup code here, to run once:
  servo.attach(pin_servo);
  servo.write(0);
  servo.detach(pin_servo);
  pinMode(pin_shoot, INPUT);
  digitalWrite(pin_shoot, HIGH);
}

void playTune(){
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!digitalRead(pin_shoot)){
      servo.attach(pin_servo);
      servo.write(180);
      delay(1000);
      servo.write(0);
      servo.detach(pin_servo);
      playTune();
  }
}
