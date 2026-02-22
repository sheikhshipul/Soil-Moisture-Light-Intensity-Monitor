#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define Sensor_1  A0
#define Sensor_2  A2


void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  for (int i = Sensor_1; i <= Sensor_2; i++)
  pinMode(i,INPUT);
lcd.setCursor(0,0);
lcd.print("SOIL MONITOR");
//lcd.print("SM= ");
//lcd.print("In= ");
delay (1000);
lcd.clear();
}
void loop() {
   SM_readings();
   In_readings();
  //delay(1000);
   }
void SM_readings(){
  int value_1 = analogRead(Sensor_1);
  //Serial.print("MOISTURE LEVEL : ");
   value_1= analogRead(Sensor_1);
   value_1= value_1/10;
  //lcd.setCursor(3,0);
  //lcd.print(!value_1);
 // Serial.print("Soil Moisture=");
  //Serial.print(!value_1);
  lcd.setCursor(0,0);
  lcd.print("Moisture=");
  //lcd.setCursor(10,0);
  lcd.print(value_1);
  lcd.print("%");
 
}

void In_readings(){
  int value_2 = analogRead(Sensor_2);
  value_2 = analogRead(Sensor_2);
  value_2 = (((2500/(analogRead(Sensor_2)*0.1))-500)/10);
  
  lcd.setCursor(0,1);
  lcd.print("Intensity=");  
  //lcd.setCursor(11,1);
  lcd.print(value_2);
 
  //Serial.print("Intensity=");
  //Serial.print(value_2);
  //Serial.print("\t");    
}
