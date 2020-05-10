int messageRead;
int RedPin =13;
int GreenPin = 11;
int BluePin = 12;
void setup()
{
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  
  while(Serial.available()==0){
    
  }
  messageRead = Serial.parseInt();
  if(messageRead==1){
    digitalWrite(RedPin, HIGH);
    digitalWrite(BluePin, LOW);
    digitalWrite(GreenPin, LOW);


  }
  else if(messageRead==2){
    digitalWrite(BluePin, HIGH);
    digitalWrite(RedPin, LOW);
    digitalWrite(GreenPin, LOW);

  }
  else if(messageRead==3){
    digitalWrite(GreenPin, HIGH);
    digitalWrite(RedPin, LOW);
    digitalWrite(BluePin, LOW);
  }
  else if(messageRead==4){
    analogWrite(GreenPin, 0);
    digitalWrite(RedPin, HIGH);
    analogWrite(BluePin, 255);

  }
  

}