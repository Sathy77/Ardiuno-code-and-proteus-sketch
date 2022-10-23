void setup() {
  Serial.begin(9600);

}

void loop() {
 int a;
 if(Serial.available()>0)
 {
  a= Serial.read();
  Serial.println(a);
  if(a==101)
  {
    Serial.println("Well done");
  }
  }
}
