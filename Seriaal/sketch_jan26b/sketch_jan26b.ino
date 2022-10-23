void setup() {
  Serial.begin(9600);

}

void loop() {
  int var=20;
  char c='a';
  Serial.println(10);
  delay(1000);
  Serial.print("the value of the variable is: ");
  Serial.println(var);
  delay(1000);
  Serial.println(c);
  delay(1000);
  Serial.println("Hollo World");
  delay(1000);

}
