
const int ledBluePin = 13;
const int ledYellouPin = 12;
const int ledRedPin = 11;

void setup() {
  pinMode(ledBluePin, OUTPUT);
  pinMode(ledYellouPin, OUTPUT);
  pinMode(ledRedPin, OUTPUT);
  
  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop() {
  if(Serial.available()>0){ 
    String data=Serial.readString();
    delay(100);
    if(data == "r1") 
      digitalWrite(ledRedPin,HIGH);
    else if(data == "r0") 
      digitalWrite(ledRedPin,LOW);
    else if(data == "y1") 
      digitalWrite(ledYellouPin,HIGH);
    else if(data == "y0") 
      digitalWrite(ledYellouPin,LOW);
    else if(data == "b1") 
      digitalWrite(ledBluePin,HIGH);
    else if(data == "b0") 
      digitalWrite(ledBluePin,LOW);
  }
}
