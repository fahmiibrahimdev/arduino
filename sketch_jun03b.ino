void setup() {
  // memndefinisikan pinLED yang ingin dinyalakan
  pinMode(D4, OUTPUT);
}

void loop() {
  /**
   * perintah HIGH untuk menyalakan lampu
   * perintah LOW untuk mematikan lampu
   * perintah DELAY untuk memberhentikan program selama ....ms
  */

  // membuat lampu nyala pada pin D4
  digitalWrite(D4,HIGH);
  // tunggu 3s
  delay(3000);
  // lampu pin D4 mati
  digitalWrite(D4,LOW);
}
