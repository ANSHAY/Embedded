/* This program plays Magic Ball8
 *  It takes in an input through a button at pin switchPin- 6
 *  and displays a message at the lcd screen by randomly 
 *  generating one of the 8 possible messages.
 * 
 */
#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int prevSwitchState = 0;
int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);
  
  lcd.begin(16, 2);
  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Magic 8 ball");
}

void loop() {
  // put your main code here, to run repeatedly:  
  switchState = digitalRead(switchPin);
  
  if (switchState != prevSwitchState){
    if (switchState == LOW){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Magic Ball says:");
      lcd.setCursor(0, 1);
      int reply = random(8);
      switch(reply){
        case 0:
          lcd.print("Yes");
          break;
        case 1:
          lcd.print("Maybe");
          break;
        case 2:
          lcd.print("Certainly");
          break;
        case 3:
          lcd.print("No way in hell");
          break;
        case 4:
          lcd.print("Even I dont know");
          break;
        case 5:
          lcd.print("Probably");
          break;
        case 6:
          lcd.print("As If!!");
          break;
        case 7:
          lcd.print("You tell me!!!");
          break; 
      }
    }
  }
  prevSwitchState = switchState;
}
