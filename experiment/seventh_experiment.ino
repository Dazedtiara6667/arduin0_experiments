int PushButton1 = 4;
int PushButton2 = 8;
int PushVolt1;
int PushVolt2;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(PushButton1, INPUT);
  pinMode(PushButton2, INPUT);
  Serial.begin(9600);
}


void loop()
{
  PushVolt1 = digitalRead(PushButton1);
  PushVolt2 = digitalRead(PushButton2);
  Serial.println(PushVolt1);
  if(PushVolt1 == 0){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
  if(PushVolt2 == 0){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}