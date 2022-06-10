#include <DHT.h>
uint8_t READER = 14; // PIN GPIO14 ( D5 )
DHT dht(READER, DHT22); // KONFIGURASI DHT
  
void setup() {
  Serial.begin(115200); // SERIAL BAUD
  pinMode(READER, INPUT);
  dht.begin();
}

void loop() {
  float suhu = dht.readTemperature();
  float kelembapan = dht.readHumidity();
  Serial.println("Kelembapan: "); 
  Serial.println(kelembapan);
  Serial.println("Temperatur Suhu: ");
  Serial.println(suhu);
  delay(100);
}
