/* This program reads from an LDR connected at analog pin A0
 *  and outputs a freq corresponding to the amount of light
 *  to a buzzer at pin 13
 * So you can control  the freq of the buzzer by movin your
 * hand above the light sensor
 */
 const int lightPin = A0;
const int buzzerPin = 13;
int sensorLow = 100;
int sensorHigh = 500;
int sensorVal;
int buzzerFreq;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(lightPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // callibration
  while (millis() < 5000){
      sensorVal = analogRead(lightPin);
      if (sensorVal < sensorLow){
        sensorLow = sensorVal;
      }
      if (sensorVal > sensorHigh){
        sensorHigh = sensorVal;
      }
      Serial.println(sensorVal);
      Serial.println(sensorLow);
      Serial.println(sensorHigh);
      Serial.println();
  }
  // execution
  sensorVal = analogRead(lightPin);
  int pitch = map(sensorVal, sensorLow, sensorHigh, 500, 5000);
  tone(buzzerPin, pitch, 10);
  Serial.println(pitch);
  Serial.println(sensorVal);
  Serial.println();
}
