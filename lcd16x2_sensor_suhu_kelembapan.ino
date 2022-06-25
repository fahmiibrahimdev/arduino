#include <Adafruit_Sensor.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

uint8_t READER = 2;
DHT dht(READER, DHT11);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  pinMode(READER, INPUT);
  dht.begin();
  lcd.begin(); // inisialisasi
  lcd.backlight(); // fungsinya gatau
}

void loop()
{
  float suhu = dht.readTemperature();
  float kelembapan = dht.readHumidity();

  lcd.setCursor(0,0);
  lcd.print("Kelembapan: ");
  lcd.print(kelembapan);
  lcd.setCursor(0,1);
  lcd.print("Suhu: ");
  lcd.print(suhu);
}
