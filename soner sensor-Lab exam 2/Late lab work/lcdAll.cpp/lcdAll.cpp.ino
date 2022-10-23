#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
byte heart[8] = {0b00000, 0b01010, 0b11111, 0b11111, 0b11111, 0b01110, 0b00100, 0b00000};
void setup() {
}
void loop() {
  lcd.begin(16, 2);
  lcd.print("Hello, World!");
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  lcd.clear();
  delay(100);
  // Auto Scroll
  lcd.setCursor(0, 0);
  for (int Character = 0; Character <= 9; Character++)
  {
    lcd.print(Character);
    delay(500);
  }
  lcd.setCursor(16, 1);
  lcd.autoscroll();
  for (int Character = 0; Character <= 9; Character++)
  {
    lcd.print(Character);
    delay(500);
  }
  lcd.noAutoscroll();
  lcd.clear();
  delay(100);
  // Blink
  lcd.noBlink();
  delay(3000);
  lcd.blink();
  delay(3000);
  lcd.clear();
  delay(100);
  // Cursor
  lcd.noCursor();
  delay(500);
  lcd.cursor();
  delay(500);
  lcd.clear();
  delay(100);
  // Custom Char
  lcd.createChar(0, heart);
  lcd.clear();
  delay(100);
  // Display
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
  lcd.clear();
  // Scroll
  for (int countPosition = 0; countPosition <= 12; countPosition++)
  {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  for (int countPosition = 0; countPosition <= 28; countPosition++)
  {
    lcd.scrollDisplayRight();
    delay(150);
  }
  for (int countPosition = 0; countPosition <= 15; countPosition++)
  {
    lcd.scrollDisplayLeft();
    delay(150);
  }
  delay(1000);
  lcd.clear();
  // Set Cursor
  lcd.begin(16, 2);
  for (int Letter = 'a'; Letter <= 'z'; Letter++)
  {
    for (int Row = 0; Row <= 1; Row++)
    {
      for (int Column = 0; Column <=15; Column++)
      {
        lcd.setCursor(Column, Row);
        lcd.write(Letter);
        delay(200);
      }
    }
  }
  lcd.clear();
  delay(100);
  // Text direction
  int Character = 'a';
  lcd.begin(16, 2);
  lcd.cursor();
  if (Character == 'm')
  {
    lcd.rightToLeft();
  }
  if (Character == 's')
  {
    lcd.leftToRight();
  }
  if (Character > 'z')
  {
    lcd.home();
    Character = 'a';
  }
  lcd.write(Character);
  delay(1000);
  Character++;
  delay(100);
}
