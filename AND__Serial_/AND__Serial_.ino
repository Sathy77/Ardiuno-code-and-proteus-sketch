int input1, input2;
void setup() {
  pinMode(13, INPUT);
  pinMode(12,INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  input1= digitalRead(13);
  input2= digitalRead(12);

  if((input1==HIGH)|| (input2==HIGH)){
    digitalWrite(11,HIGH);  
  }

  else{
    digitalWrite(11,LOW);
  }

}
