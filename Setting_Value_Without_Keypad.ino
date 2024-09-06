// Setting_Value_Without_Keypad
#define tombolSET 8
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int adc,nilai, pos, setpoint; 

void setup(){ 
  pinMode(8,LOW);
  digitalWrite(8, HIGH);  
  lcd.begin(16, 2); 
  lcd.print("Seting Nilai");
  lcd.setCursor(0,1);
  lcd.print("Tanpa Keypad");
  delay(1000); 
  lcd.clear();
  lcd.print("Nilai=");
  
}

void loop(){
  adc = analogRead(0);    
  if(adc<25) nilai=0;
  else if(adc<50) nilai=1;
  else if(adc<75) nilai=2;
  else if(adc<100) nilai=3;
  else if(adc<125) nilai=4; 
  else if(adc<150) nilai=5; 
  else if(adc<175) nilai=6; 
  else if(adc<200) nilai=7;
  else if(adc<225) nilai=8; 
  else if(adc<250) nilai=9;        
 // lcd_gotoxy (6+pos,1);                
  lcd.setCursor(6+pos,1);
  lcd.print(nilai);
  
  if(digitalRead(tombolSET)==LOW){          
          setpoint=setpoint*10+nilai;
          lcd.setCursor(6,1);   
          lcd.print(setpoint);          
          pos++;
          delay(200);          
     } 
  delay(100);  
}

