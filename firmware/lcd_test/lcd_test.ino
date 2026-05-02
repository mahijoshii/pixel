#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hi, I'm Pixel :)");

  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  lcd.print(millis() / 1000);

  delay(1000);
}