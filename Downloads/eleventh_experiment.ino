#include <Servo.h>
Servo myservo;
int LightPin = A0;
int LightCal;
int ServoPin = 13;
int ServoPos;
void setup()
{
  pinMode(LightPin, INPUT);
  Serial.begin(9600);
  myservo.attach(ServoPin);
}

void loop()
{
  
  LightCal = analogRead(LightPin);
  ServoPos = (360/679.0)*(LightCal-6);
  Serial.println(ServoPos);
  myservo.write(ServoPos);

 
 
}