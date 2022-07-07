const int maxDelay = 200;
const int delayPinPositif = 1500;
const int delayPinNegatif = delayPinPositif - maxDelay;

void setup()
{
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  delayMicroseconds(delayPinPositif);
  digitalWrite(4, LOW);
  delayMicroseconds(delayPinNegatif);
}
