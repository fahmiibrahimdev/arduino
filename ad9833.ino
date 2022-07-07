#include <AD9833.h>

AD9833 gen(10);       // Defaults to 25MHz internal reference frequency
long f;
int sw1, sw2;

void setup() {
  //  pinMode(3, INPUT); pinMode(4, INPUT);
  gen.Begin();
  
  gen.EnableOutput(true);
  gen.ApplySignal(SINE_WAVE, REG0, 40000);
  pinMode(4, OUTPUT);

  // VCC -> 5V
  // DGND -> GND
  // SDATA -> PIN 11
  // SCLK -> PIN 13
  // FSYNC -> PIN 10
  // AGND -> GND OSI
  // OUT -> OUT OSI
}

void loop() {
  
  digitalWrite(4, HIGH);
  delay(0050);
  digitalWrite(4, LOW);
  delay(0050);
  
  //  f = map(analogRead(A6), 0, 1023, 1000, 5000);
  //  sw1 = digitalRead(3); sw2 = digitalRead(4);
  //
  //  if( sw1 == LOW && sw2 == LOW )
  //  {
  //    gen.ApplySignal(SINE_WAVE, REG0, f);
  //  } else if ( sw1 == LOW && sw2 == HIGH )
  //  {
  //    gen.ApplySignal(TRIANGLE_WAVE, REG0, f);
  //  } else if ( sw1 == HIGH && sw2 == LOW )
  //  {
  //    gen.ApplySignal(SQUARE_WAVE, REG0, f);
  //  } else if ( sw1 == HIGH && sw2 == HIGH )
  //  {
  //    gen.ApplySignal(HALF_SQUARE_WAVE, REG0, f);
  //  }
}
