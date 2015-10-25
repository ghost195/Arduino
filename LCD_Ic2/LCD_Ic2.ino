/*
I2C address 0x27
RS P0
RW P1
E P2
D4 P4
D5 P5
D6 P6
D7 - P7
Backlight - P3
Bl Polarity POSITIVE
*/
 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
 
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7,3, POSITIVE); // Wichtig ist 0x3F
 
void setup()
{
 lcd.begin (16,2);
 lcd.setBacklight(HIGH);
 lcd.print("Hallo Philipp");
 lcd.setCursor(0,1);
 
 lcd.print("Tolles Wetter");
  
}
 
void loop()
{

}
