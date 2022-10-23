#include <LiquidCrystal.h>
long duration;
LiquidCrystal lcd(11, 10, 5, 4, 3, 2);
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}
void loop() {
  digitalWrite(13, LOW);
  delayMicroseconds(2);
  digitalWrite(13, HIGH);
  delayMicroseconds(10);
  digitalWrite(13, LOW);
  duration = pulseIn(12, HIGH);
  lcd.begin(16, 2);
  lcd.print((duration / 2) * 0.034);
}
