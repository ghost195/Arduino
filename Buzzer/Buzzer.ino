/*
  Melody

 Plays a melody

 circuit:
 * 8-ohm speaker on digital pin 8

 created 21 Jan 2010
 modified 30 Aug 2011
 by Tom Igoe

This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Tone

 */
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  // iterate over the notes of the melody:
  int noteDuration = 1000 / noteDurations[1];
  tone(8,melody[4],noteDuration);
   noTone(8);
   tone(8,melody[3],noteDuration);
    tone(8,melody[4],noteDuration);
     tone(8,melody[5],noteDuration);
      tone(8,melody[6],noteDuration);
  
}

void loop() {
  // no need to repeat the melody.
  
    
}
