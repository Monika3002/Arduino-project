int ledPin = 13;
int state=0;
int brightness=0;
int fadeAmount=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);
  Serial.begin(9600);
}

void fade(){

    analogWrite(ledPin, brightness);
    brightness = brightness + fadeAmount;
    if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
    }
    delay(30);
}

void loop() {
    if(Serial.available()){
    state = Serial.read(); 
    }
    if (state == '0') {
    digitalWrite(ledPin,LOW);
    Serial.println('LED is OFF !!');
    }
    else if (state=='1') {
    digitalWrite(ledPin,HIGH);
    Serial.println('LED is ON !!');
    }
    else if(state == '2'){
      fade();
      Serial.println('LED is Fading !!');
    }
}