int PhotoVol;
int SoundPin = 13;
int PhotoCal = A0;
float SoundCal;
void setup()

{
  pinMode(PhotoCal, OUTPUT);
  pinMode(SoundPin, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  PhotoVol = analogRead(PhotoCal);
  SoundCal = (((273/88.0)*PhotoVol)+127);
  digitalWrite(SoundPin, HIGH);
  delay(SoundCal);
  digitalWrite(SoundPin, LOW);
  delay(SoundCal);
  Serial.println(SoundCal);
  Serial.println(PhotoVol);
}