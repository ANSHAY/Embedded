/*
 * Stopwatch with play/pause button, reset
 * button, and LCD to display the stopwatch
 * time.
 * change these pin numbers to the ones that
 * devices are connected on.
*/
#include <LiquidCrystal.h>

const int pin_play = 1;
const int pin_reset = 2;
bool runing = false;
bool reset = false;
String text1 = "Stopwatch..";
String text2 = "00:00";
int start_time = 0;
LiquidCrystal lcd(12,11,5,4,3,2); // change these pin numbers to the ones that lcd is connected to

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_play, INPUT);
  pinMode(pin_reset, INPUT);
  digitalWrite(pin_play, HIGH);
  digitalWrite(pin_reset, HIGH);
  lcd.begin(16, 2);
  lcd.print("Welcome");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!digitalRead(pin_reset)){
    while(!digitalRead(pin_reset)){
      // wait for button to release
    }
    reset = true;
    runing = false;
  }
  else if (!digitalRead(pin_play)){
    while(!digitalRead(pin_play)){
      // wait for button to release
    }
    runing = !runing;
    if(runing){
      reset = false;
      start_time = millis();
    }
    else{
      text1 = "stopped....";
    }
  }
  if (runing){
    text1 = "counting...";
    int time_mil = millis() - start_time;
    int time_sec = (time_mil/1000)%60;
    int time_min = (time_mil/60000);
    text2 = String(String(time_min) + ":" + String(time_sec));
  }
  if (reset){
    // set text to default text
    text1 = "Stopwatch..";
    text2 = "00:00";
  }
  //Display text on LCD
  lcd.setCursor(0, 0);
  lcd.print(text1);
  lcd.setCursor(0, 1);
  lcd.print(text2);
}
