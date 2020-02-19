void setup() {
  //declare pin usage
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D5,INPUT);
}

void loop() {
  //create the switchstate variable
int switchState = digitalRead(D5);
 //declare a condition, if the sensor is inactive the pin D3 will be powered
if (switchState == LOW) {
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
 //if the first condition does not happen, the pin D2 will receive power
  }else {
digitalWrite(D1,LOW);
digitalWrite(D2,LOW);
digitalWrite(D3,HIGH);
 }
}
