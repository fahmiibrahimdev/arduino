#include <DHT.h>
int fanSensor = A2;
int PWM = 3;
int sensorVal;
int PWMVal;
int pinSensor = 4;

DHT dht(pinSensor, DHT22); // konfigurasi DHT sensor

void setup() {
  Serial.begin(9600); // inisialisasi bahwa kita membuat serial
  pinMode(pinSensor, INPUT); // DHT
  pinMode(fanSensor, INPUT); // Fan
  pinMode(PWM, OUTPUT); // Fan
  dht.begin(); // inisialisasi dht sensor suhu dan kelembapan
}

void loop() {
  
  analogWrite(PWM, 0);
  
  float suhu = dht.readTemperature(); // membaca suhu
  float kelembapan = dht.readHumidity(); // membaca kelembapan

  if( (suhu >= 35) && (suhu <= 39) ) // jika suhu lebih dari sama dengan 35 dan suhu kurang dari sama dengan 39
  {
    Serial.println("RPM Set to 300"); // munculkan text di serial monitor
    analogWrite(PWM, 300); // setting kecepatan fan sebesar 300
  } else if ( (suhu >= 40) && (suhu <= 55) ) // jika suhu lebih dari sama dengan 40 dan suhu kurang dari sama dengan 55
  {
    Serial.println("RPM Set to 1200"); // munculkan text di serial monitor
    analogWrite(PWM, 1200); // setting kecepatan fan sebesar 1200
  } else if ( suhu <= 34 ) // jika suhu kurang dari sama dengan 34
  {
    Serial.println("RPM Set to 0"); // munculkan text di serial monitor
    analogWrite(PWM, 0); // setting kecepatan fan sebesar 0
  }
  /**
    * Kecepatan Fan sebesar 0 bukan berarti fan mati
  */
  Serial.print("Suhu: ");
  Serial.println(suhu);
  Serial.print("Kelembapan: ");
  Serial.println(kelembapan);
  delay(1000);
}
