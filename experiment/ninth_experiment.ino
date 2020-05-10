int LatchPin=11;
int clockPin=9;
int DataPin=12;
byte LEDs=0b10101010;
byte LED1s=0b01010101;
void setup()
{
  pinMode(LatchPin, OUTPUT);
  pinMode(DataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop()
{
  digitalWrite(LatchPin, LOW);
  shiftOut(DataPin,clockPin,LSBFIRST,LEDs);
  digitalWrite(LatchPin, HIGH);
  delay(500);
  digitalWrite(LatchPin, LOW);
  shiftOut(DataPin,clockPin,LSBFIRST,LED1s);
  digitalWrite(LatchPin, HIGH);
  delay(500);
}