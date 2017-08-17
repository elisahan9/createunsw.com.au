#include <Wire.h>  
#include <LiquidCrystal_I2C.h> // Using version 1.2.1

// based on YWRobot LCM1602 IIC V1
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

int inputPin=4;  // connect digital I/O 4 to the ECHO/Rx Pin
int outputPin=5; // connect digital I/O 5 to the TRIG/TX Pin
 
void setup(){
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  lcd.begin(16,2); // sixteen characters across - 2 lines
  lcd.backlight(); 
  delay(500);//Delay to let system boot
  lcd.setCursor(0,0);
  lcd.print("HC-04 Ultrasonic");
  lcd.setCursor(0,1);
  lcd.print("Sensor Program");
  delay(3000);//Wait before accessing Sensor
  lcd.clear();
}
 
void loop(){
    digitalWrite(outputPin, LOW);  // send low pulse for 2μs
    delayMicroseconds(1000);
    digitalWrite(outputPin, HIGH); // send high pulse for 10μs
    delayMicroseconds(1000);
    digitalWrite(outputPin, LOW);  // back to low pulse
    int distance = pulseIn(inputPin, HIGH);  // read echo value
    int distance1= distance/29/2;  // in cm
    lcd.setCursor(0,0);
    lcd.print("Nearest object");
    lcd.setCursor(0,1);
    lcd.print("is ");
    lcd.print(distance1);
    lcd.print("cm away.  ");
    delay(1000);
}
