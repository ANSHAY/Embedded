/*
 * Plays first line of Happy Birthday tone in a loop
 * ,if a button is pressed connected at pin 3,
 * on a speaker attached at pin 9
 * 
 */

# include "pitches.h"

#define pinSpeaker 9
#define pinButton 3
#define NumTones 6
#define beatLength 100

const int hbPitches[NumTones] = {
  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_F4, NOTE_E4
};
const int beats[NumTones] = {
  1, 1, 2, 2, 2, 4
};

void happyBday(){
  for (int i=0; i<NumTones; i++){
    tone(pinSpeaker, hbPitches[i], beats[i]*beatLength);
    delay(beatLength);
  }
  noTone(pinSpeaker);
  delay(beatLength/2);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(pinSpeaker, OUTPUT);
  pinMode(pinButton, INPUT);
  digitalWrite(pinButton, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!digitalRead(pinButton)){
      happyBday();
  }
  delay(1000);
}
