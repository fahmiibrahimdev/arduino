const int PWM_C = 9; // Kudu di sini, coy!
const int EN_PWM = 4;
const int nilaiAwal = 20;
const int nilaiMaks = 250;
const int nilaiNaik = 20;
int flagPWM = 1;
int nilaiPWM = nilaiAwal;

void setup() {
  //pinMode(PWM_C, OUTPUT);
  pinMode(EN_PWM, OUTPUT);
  //analogWrite(PWM_C, 80);  

  digitalWrite(EN_PWM, HIGH);
  Serial.begin(9600);
}

void loop() {
  analogWrite(PWM_C, nilaiPWM);  
  Serial.println(nilaiPWM);
  //digitalWrite(EN_PWM, HIGH);
  delay(2000);
  //digitalWrite(EN_PWM, LOW);
  //delay(1000);
  if (flagPWM == 1){
    if ((nilaiPWM += nilaiNaik) > nilaiMaks) {
      nilaiPWM -= nilaiNaik;
      flagPWM = 0;
    }   
  }else if (flagPWM == 0){
    if ((nilaiPWM -= nilaiNaik) < nilaiAwal) {
      nilaiPWM += nilaiNaik;
      flagPWM = 1;
      digitalWrite(EN_PWM, LOW);
      delay(4000);
      digitalWrite(EN_PWM, HIGH);
    }   
  }
}
