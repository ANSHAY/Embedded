void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}
int del=500,i=5;
void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(del);
  i--;
  if(i==0){
    i=5;
    if(del==500){
      del=2000;
    }
    else{
      del=500;
    }
  }
}

