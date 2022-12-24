int led=11;
int brightness=0;
int fadeamount=5;
void setup() {
  // declare pin no to be an output
  pinMode(led,OUTPUT);
}

void loop() {
  // the loop routine runs over and again foreover
  analogWrite(led,brightness);
  brightness= brightness+fadeamount;

  if(brightness<=0||brightness>=255){
    fadeamount=-fadeamount;
  }
  delay(30);
  // digitalWrite(12,HIGH);
  // delay(1000);
  // digitalWrite(12,LOW);
  // delay(1000);
  // digitalWrite(12,HIGH);
  // delay(1000);

}
