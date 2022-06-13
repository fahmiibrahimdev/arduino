static const uint8_t D0   = 16;
static const uint8_t D1   = 5;
static const uint8_t D2   = 4;
static const uint8_t D3   = 0;
static const uint8_t D4   = 2;
static const uint8_t D5   = 14;
static const uint8_t D6   = 12;
static const uint8_t D7   = 13;
static const uint8_t D8   = 15;
static const uint8_t RX   = 3;
static const uint8_t TX   = 1;

int buttonClick1 = 0;
int buttonClick2 = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(D4, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D6, INPUT);
  pinMode(D5, INPUT);
}

void loop()
{
  buttonClick1 = digitalRead(D6);
  buttonClick2 = digitalRead(D5);

  Serial.println(buttonClick1);
  Serial.println(buttonClick2);

  if ( buttonClick1 == 1 && buttonClick2 == 0 )
  {
    digitalWrite(D4, HIGH);
  } else
  {
    digitalWrite(D4, LOW);
  }

  if ( buttonClick1 == 0 && buttonClick2 == 1 )
  {
    digitalWrite(D3, HIGH);
  } else
  {
    digitalWrite(D3, LOW);
  }

  if ( buttonClick1 == 1 && buttonClick2 == 1 )
  {
    digitalWrite(D2, HIGH);
  } else
  {
    digitalWrite(D2, LOW);
  }

}
