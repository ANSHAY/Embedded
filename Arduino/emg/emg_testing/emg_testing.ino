const int analog_input_pin = A0;
int emg_value = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  emg_value = analogRead(analog_input_pin);
  Serial.println(emg_value);
  delay(100);
}
