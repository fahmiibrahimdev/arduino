#include <DHT.h>
const int pinSuhu = 6;
const int PWM_C = 9; // PWM HANYA BISA DI PIN 3, 5, 6, 9, 10, or 11
const int EN_PWM = 4; // PIN LED
const int nilaiAwal = 20; // SET NILAI AWAL
const int nilaiMaks = 250; // SET NILAI MAKS
const int nilaiNaik = 20; // SET NILAI NAIK
int flagPWM = 1; // SET FLAGPWM
int nilaiPWM = nilaiAwal; // NILAIPWM = NILAI AWAL

unsigned long sebelum = 0;

DHT dht(pinSuhu, DHT22);

void setup() {
  //pinMode(PWM_C, OUTPUT);
  dht.begin();
  pinMode(EN_PWM, OUTPUT); // INISIALISASI LED MODE OUTPUT
  pinMode(pinSuhu, INPUT);
  //analogWrite(PWM_C, 80);  

  digitalWrite(EN_PWM, HIGH); // MENYALAKAN LED
  Serial.begin(9600); // INISIALISASI SERIAL MONITOR 9600 BAUD
}

void loop() {
  digitalWrite(EN_PWM, LOW);
  // delay(2000);
  // if (flagPWM == 1){ // jika flagPWM == 1 
  //   if ((nilaiPWM += nilaiNaik) > nilaiMaks) { // jika nilaiPWM lebih dari sama dengan nilaiNaik lebih dari nilaiMaks
  //     nilaiPWM -= nilaiNaik;
  //     flagPWM = 0;
  //   }   
  // }else if (flagPWM == 0){
  //   if ((nilaiPWM -= nilaiNaik) < nilaiAwal) {
  //     nilaiPWM += nilaiNaik;
  //     flagPWM = 1;
  //     digitalWrite(EN_PWM, LOW);
  //     delay(4000);
  //     digitalWrite(EN_PWM, HIGH);
  //   }   
  // }
  

  unsigned long sekarang = millis();
  if( sekarang - sebelum >= 900 )
  {
    float suhu = dht.readTemperature(); // membaca suhu
    float kelembapan = dht.readHumidity(); // membaca kelembapan
    Serial.print("Suhu: ");
    Serial.println(suhu);

    if( (suhu > 35.0) && (suhu <= 40.0) )
    {
      digitalWrite(EN_PWM, HIGH);
      delay(1000);
      analogWrite(PWM_C, nilaiPWM);   // SETTING KECEPATAN PWM BERDASARKAN nilaiPWM
      Serial.println(nilaiPWM); // SERIAL MONITOR NILAIPWM NYA
      if ((nilaiPWM += nilaiNaik) > 70) {
        nilaiPWM = 50;
      }
    } 
    else if ( (suhu > 40.0) && (suhu <= 45.0) )
    {
      digitalWrite(EN_PWM, HIGH);
      delay(1000);
      analogWrite(PWM_C, nilaiPWM);   // SETTING KECEPATAN PWM BERDASARKAN nilaiPWM
      Serial.println(nilaiPWM); // SERIAL MONITOR NILAIPWM NYA
      if ((nilaiPWM += nilaiNaik) > 79) {
        nilaiPWM = 100;
      }
    }
    else if ( (suhu > 45.0) && (suhu <= 50.0) )
    {
      digitalWrite(EN_PWM, HIGH);
      delay(1000);
      analogWrite(PWM_C, nilaiPWM);   // SETTING KECEPATAN PWM BERDASARKAN nilaiPWM
      Serial.println(nilaiPWM); // SERIAL MONITOR NILAIPWM NYA
      if ((nilaiPWM += nilaiNaik) > 99) {
        nilaiPWM = 150;
      }
    }
    else if ( (suhu > 50.0) && (suhu <= 55.0) )
    {
      digitalWrite(EN_PWM, HIGH);
      delay(1000);
      analogWrite(PWM_C, nilaiPWM);   // SETTING KECEPATAN PWM BERDASARKAN nilaiPWM
      Serial.println(nilaiPWM); // SERIAL MONITOR NILAIPWM NYA
      if ((nilaiPWM += nilaiNaik) > 139) {
        nilaiPWM = 200;
      }
    }
    else if ( (suhu > 55.0) && (suhu <= 60.0) )
    {
      digitalWrite(EN_PWM, HIGH);
      delay(1000);
      analogWrite(PWM_C, nilaiPWM);   // SETTING KECEPATAN PWM BERDASARKAN nilaiPWM
      Serial.println(nilaiPWM); // SERIAL MONITOR NILAIPWM NYA
      if ((nilaiPWM += nilaiNaik) > 159) {
        nilaiPWM = 250;
      }
    }
    

    sebelum = sekarang;
  }
  
  //digitalWrite(EN_PWM, LOW);
  //delay(1000);
  
}
