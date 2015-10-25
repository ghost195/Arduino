#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7,3, POSITIVE);
/**********************************/
const int keyPin = 8; //the number of the key pin
const int ledPin = 2;//the number of the led pin
int analogPin = 0;
int val = 0;
int valneu = 0;
int z = 0;
boolean state = false;
/**********************************/
void setup()
{
  pinMode(keyPin,INPUT);//initialize the key pin as input 
  pinMode(ledPin,OUTPUT);//initialize the led pin as output
  Serial.begin(9600);

 lcd.begin (16,2);
 lcd.setBacklight(HIGH);
 lcd.print("Helligkeit");
 //delay(2000);
}
/**********************************/
void loop()
{
   val = analogRead(analogPin);    // read the input pin
   //lcd.setCursor(0,1);
   //lcd.print(val);
  
  valneu = valneu + val; 
  //Serial.println(valneu);
   if(z == 100)
   {
           
           
           valneu = valneu/100;
           //Serial.println(valneu);
           lcd.clear();
           lcd.setCursor(0,1);
           lcd.print(valneu);  
           z = 0;
           valneu = 0;
   }
  z = (z+1);
  if(valneu <= 250)
  {
    digitalWrite(ledPin,HIGH);
    Serial.println(valneu);
  }
  //Serial.println(z);
  //read the state of the key value
  //and check if the kye is pressed
  //if it is,the state is HIGH 
//Serial.println(check_switch());
  
  if(check_switch()== HIGH)
  {
    
     digitalWrite(ledPin,HIGH);
     
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }

 
 

}
/************************************/

boolean check_switch(){
 state = false;
 
    if(digitalRead(keyPin) ==HIGH )
  {
    
    state = true;
    //Serial.println(state);
    
    
  }
  else 
  {
    state = false;
    //Serial.println(state);
  }
 return state;
}

