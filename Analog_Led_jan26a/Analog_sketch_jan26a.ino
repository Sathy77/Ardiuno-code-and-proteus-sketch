int ledPin = 9;

void setup() {
 pinMode(ledPin, OUTPUT);

}

void loop() {
  for(int fadeValue = 0; fadeValue<=255; fadeValue+=5)
    analogWrite(ledPin, fadeValue);
    delay(50);

  for(int fadeValue = 255; fadeValue>=0; fadeValue-=5)
    analogWrite(ledPin, fadeValue);
    delay(50);

}
