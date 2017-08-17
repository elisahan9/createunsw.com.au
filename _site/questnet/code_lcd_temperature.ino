#include <DHT.h>
#include <Wire.h>  
#include <LiquidCrystal_I2C.h> // Using version 1.2.1

// based on YWRobot LCM1602 IIC V1
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

byte degree[8] = {
    B00111,
    B00101,
    B00111,
    B00000,
    B00000,
    B00000,
    B00000,
    B00000
};

#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11 
DHT dht(DHTPIN, DHTTYPE);
 
void setup(){
  lcd.begin(16,2); // sixteen characters across - 2 lines
  lcd.backlight(); 
  lcd.createChar(0,degree);
  delay(500);//Delay to let system boot
  lcd.setCursor(0,0);
  lcd.print("DHT11 Humidity &");
  lcd.setCursor(0,1);
  lcd.print("Temperature");
  delay(3000);//Wait before accessing Sensor
  dht.begin();
  lcd.clear();
}
 
void loop(){
    lcd.setCursor(0,0);
    float t = dht.readTemperature();
    float h = dht.readHumidity();
    if (isnan(h) || isnan(t)) {
        lcd.print("Failed to read");
        lcd.setCursor(0,1);
        lcd.print("from DHT sensor!");
    } else {
        lcd.print("Temp. ");
        lcd.print(t);
        lcd.print(char(0));
        lcd.print("C ");
        lcd.setCursor(0,1);        
        lcd.print("Humidity ");
        lcd.print(h);
        lcd.print("% ");   
    }
    delay(2000); 
}