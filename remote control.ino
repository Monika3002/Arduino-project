int digitalmotor1pin1=2;
int digitalmotor2pin1=3;

int digitalmotor2pin1=4;
int digitalmotor2pin2=5;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
Serial.begin(9600);

void loop() {  
  // put your main code here, to run repeatedly:
  if(Serial.available()==1)
  {
    string val=Serial.readstring();
    Serial
  }
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);

  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);

  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);

  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(1000);

 
}
