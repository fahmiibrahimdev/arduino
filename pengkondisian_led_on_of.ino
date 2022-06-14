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

int buttonClick;
int i = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(D2, OUTPUT);
  pinMode(D6, INPUT);
}

void loop()
{
  buttonClick = digitalRead(D6);

  if( buttonClick == 1 )
  {
    i++;
    delay(300);
  }

  if( i%2==0 )
  {
    digitalWrite(D2, LOW);
  } else
  {
    digitalWrite(D2, HIGH);
  }
  
  Serial.println(i);
  Serial.println(buttonClick);
}

