#include <CapacitiveSensor.h>

CapacitiveSensor capSense = CapacitiveSensor(4, 2);
int ledPin = 12;
int threshold = 1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long sensor_val = capSense.capacitiveSensor(30);
  Serial.println(sensor_val);
  if (sensor_val > threshold){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
  delay(10);
}
