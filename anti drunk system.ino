#define led 13
#define buzz 8
#define MQ3 A0
#define threshold_value 370
int value;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(MQ3,INPUT);
  Serial.begin(9600);
  Serial.println("System is getting ready ! ");
  digitalWrite(led,HIGH);
  tone(buzz,1000);
  delay(500);
  digitalWrite(led,LOW);
  noTone(buzz);

}

void loop() {
  // put your main code here, to run repeatedly:
   value=analogRead(MQ3);
   Serial.println(value);
g
  if (value >=threshold_value){
    digitalWrite(led,HIGH);
    digitalWrite(buzz,HIGH);
    tone(buzz,1000);
  }
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzz,LOW);
    noTone(buzz);
  }

}
