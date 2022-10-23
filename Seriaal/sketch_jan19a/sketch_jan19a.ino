void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(1000);
 

}


#include "Keyboard.h"
void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Keyboard.begin();
}
void loop() {
  if (Serial.available() > 0) {
    char Char = Serial.read();
    if(Char=='1')
    {
      digitalWrite(13, HIGH);
    }
    else
    {
      digitalWrite(12, HIGH);
    }
  }
}
