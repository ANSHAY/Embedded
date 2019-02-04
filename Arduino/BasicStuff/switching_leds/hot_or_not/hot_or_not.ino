/* inputs the temperature from a sensor and 
 * lits five LEDs depending on the temperature
 * measurement.  
 */
const int tempPin = A0;
int tempVal, temp;

void setup() {
  // put your setup code here, to run once:
  for (int i=1; i<=5; i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  tempVal = analogRead(tempPin);
  // voltage = tempVal*5/1024, temp = (voltage-0.5)/0.01
  temp = (tempVal / 2 - 50);   
  Serial.print("temp:");
  Serial.print(temp);
  for (int i=1; i<=5; i++){
    if (temp > 20 + 5*i){
      digitalWrite(i, HIGH);
    }
    else{
      digitalWrite(i, LOW);        
    }
  }
}
