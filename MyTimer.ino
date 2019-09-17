/*
  Button

  Starts a countdown to Star Wars theme song

*/

// include the library code:
#include <LiquidCrystal.h>
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_D3,NOTE_D3,NOTE_D3,NOTE_G3,NOTE_D4,NOTE_C4,NOTE_B3,NOTE_A3,NOTE_G4,NOTE_D4, \
  NOTE_C4,NOTE_B3,NOTE_A3,NOTE_G4,NOTE_D4,NOTE_C4,NOTE_B3,NOTE_C4,NOTE_A3,0};
 
int noteDurations[] = {
  10,10,10,2,2,10,10,10,2,4, \
  10,10,10,2,4,10,10,10,2,4};

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 9;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int run=0;
int total_time;
int end_time;
unsigned long time;


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Push the button!");

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH)
    {
     if(run == 0)
     {
         run = 255;
         total_time=5;
         end_time=millis()/1000+total_time;
     }
     else
     {
         run = 0;
     }
  }
  if(run > 0)
  {
     unsigned long remaining_time=end_time -(millis()/1000);
     lcd.setCursor(0,0);
     lcd.print("                  ");
     lcd.setCursor(0,1);
     if((millis()/1000) < end_time){
        lcd.print(remaining_time);        
      }
      else {
        lcd.setCursor(0,0);
        lcd.print ("Star Wars Time!");
        lcd.setCursor(0,1);
        lcd.print ("on repeat...");

        //Play Star Wars
        for (int thisNote = 0; thisNote < 20; thisNote++) {

        // to calculate the note duration, take one second divided by the note type.
        //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
        int noteDuration = 1000 / noteDurations[thisNote];
        tone(8, melody[thisNote], noteDuration);

        // to distinguish the notes, set a minimum time between them.
        // the note's duration + 30% seems to work well:
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);
        // stop the tone playing:
        noTone(8);}
      }
    }
  }
