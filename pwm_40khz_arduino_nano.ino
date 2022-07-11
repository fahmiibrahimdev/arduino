const int pinOut = 9;

void setup()
{
    pinMode(pinOut,OUTPUT); // inisialisasi pin arduino
}

void loop()
{ 
  // Set PWM to 40KHz
  digitalWrite(pinOut, HIGH);  
  delayMicroseconds(9);
  digitalWrite(pinOut, LOW);  
  delayMicroseconds(9);
}
