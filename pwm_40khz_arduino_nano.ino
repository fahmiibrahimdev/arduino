const int pinOut = 9;

void setup()
{
    pinMode(pinOut,OUTPUT);
}

void loop()
{
  digitalWrite(pinOut, HIGH);  
  delayMicroseconds(9);
  digitalWrite(pinOut, LOW);  
  delayMicroseconds(9);
}
