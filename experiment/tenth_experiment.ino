int LatchPin=11;
int clockPin=9;
int DataPin=12;
byte LED1s=0b00000000;
void setup()
{
  pinMode(LatchPin, OUTPUT);
  pinMode(DataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  digitalWrite(LatchPin, LOW);
  shiftOut(DataPin,clockPin,LSBFIRST,LED1s);
  digitalWrite(LatchPin, HIGH);
  LED1s=LED1s+1;
  Serial.println(LED1s,	BIN);
  delay(1000);
}