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

  /**
 * cable Red    = LEDRed
 * cable Yellow = LEDBlue
 * cable White  = LEDGreen
 * 
 * LEDRed     = D4
 * LEDBlue    = D3
 * LEDGreen   = D2
 */

static const uint8_t LEDRed   = D4;
static const uint8_t LEDBlue  = D3;
static const uint8_t LEDGreen = D2;

static const uint8_t LEDRed2   = D7;
static const uint8_t LEDBlue2  = D6;
static const uint8_t LEDGreen2 = D5;
 
void setup() {
  pinMode(D7, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(LEDRed, OUTPUT);
  pinMode(LEDBlue, OUTPUT);
  pinMode(LEDGreen, OUTPUT);
}

void loop() {
  digitalWrite(LEDRed2, LOW);
  digitalWrite(LEDBlue2, LOW);
  digitalWrite(LEDGreen2, LOW);
  digitalWrite(LEDRed, LOW);
  digitalWrite(LEDBlue, LOW);
  digitalWrite(LEDGreen, LOW);
  delay(3000);
  
  digitalWrite(LEDRed2, HIGH);
  digitalWrite(LEDBlue2, LOW);
  digitalWrite(LEDGreen2, LOW);
  digitalWrite(LEDRed, LOW);
  digitalWrite(LEDBlue, LOW);
  digitalWrite(LEDGreen, HIGH);
  delay(5000);

  digitalWrite(LEDRed2, HIGH);
  digitalWrite(LEDBlue2, HIGH);
  digitalWrite(LEDGreen2, LOW);
  digitalWrite(LEDRed, LOW);
  digitalWrite(LEDBlue, HIGH);
  digitalWrite(LEDGreen, HIGH);
  delay(2500);

  digitalWrite(LEDRed2, LOW);
  digitalWrite(LEDBlue2, LOW);
  digitalWrite(LEDGreen2, HIGH);
  digitalWrite(LEDRed, HIGH);
  digitalWrite(LEDBlue, LOW);
  digitalWrite(LEDGreen, LOW);
  delay(5000);
}
