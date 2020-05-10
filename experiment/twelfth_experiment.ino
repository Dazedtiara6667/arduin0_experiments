int PhotoPin = A0;
int PhotoVolt;
int RedPin = 13;
void setup()
{
  pinMode(PhotoPin, OUTPUT);
  pinMode(RedPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 PhotoVolt = analogRead(PhotoPin);
 Serial.println(PhotoVolt);
  if(PhotoVolt<=50){
    digitalWrite(RedPin, HIGH);
  }
  else if(PhotoVolt>20){
    digitalWrite(RedPin, LOW);
  }
}