#define waited_time 3000
void setup() {
  // defining pin number :
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
  Serial.println("System starts from here..");

}

void loop() {
  // giving output to leds:
  Serial.println("Binary number 0 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 1 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 2 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 3 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 4 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 5 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 6 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 7 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(waited_time);

  Serial.println("Binary number 8 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 9 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 10 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 11 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 12 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 13 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 14 in binary coded decimal");
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(waited_time);

  Serial.println("Binary number 15 in binary coded decimal");
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(waited_time);
 
}
