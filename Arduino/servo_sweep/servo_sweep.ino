/*
 * Servo sweep from 0 to 180 degree.
 * Sweeps a servo from 0 to 180 degrees and back
 * slowly slowly.
 */
#include <Servo.h>

const int pin_servo = 1;
Servo servo;
int angel = 0;
int speeed = 1;

void setup() {
  // put your setup code here, to run once:
  servo.attach(pin_servo);
}

void loop() {
  // put your main code here, to run repeatedly:
  angel += speeed;
  if (angel >= 180){
    angel = 180;
    speeed *= -1;
  }
  else if (angel <= 0){
    angel = 0;
    speeed *= -1;
  }
  servo.write(angel);
  delay(20);
}
