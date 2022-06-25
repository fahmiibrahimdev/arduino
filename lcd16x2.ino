#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.begin(); // inisialisasi
  lcd.backlight(); // fungsinya gatau
}

void loop()
{
  lcd.setCursor(1,0); // setCursor(kolom, baris);
  lcd.print("Fahmi Ibrahim");
  lcd.setCursor(0,1);
  lcd.print("MicroController");
}
