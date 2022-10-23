void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, INPUT);
}
void loop() {
  long duration;
  digitalWrite(13, LOW);
  delayMicroseconds(2);
  digitalWrite(13, HIGH);
  delayMicroseconds(10);
  digitalWrite(13, LOW);
  duration = pulseIn(12, HIGH);
  Serial.print("The distance is >> ");
  Serial.println((duration / 2) * 0.034);
}
