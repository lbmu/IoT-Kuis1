#include <Arduino.h>
#include <UltraSense.h>

// Definisi Pin Sensor
const uint8_t PIN_TRIG = 32;
const uint8_t PIN_ECHO = 35;

// Definisi Pin LED (Hanya 2 LED)
const uint8_t LED_PWM = 14;     // Pin yang mendukung PWM
const uint8_t LED_FAR = 26;     // Pin Digital biasa

// Inisialisasi objek sensor
UltraSense sensor(PIN_TRIG, PIN_ECHO);

// Batas jarak (dalam cm)
const float THRESHOLD_DISTANCE = 30.0; 

// Variabel untuk smoothing PWM (Resolusi 12-bit: 0 - 4095)
float currentPwmValue = 0.0; 
const float SMOOTH_FACTOR = 0.1; // Faktor kelembutan transisi

void setup() {
  Serial.begin(115200);
  
  // Konfigurasi pin LED
  pinMode(LED_PWM, OUTPUT);
  pinMode(LED_FAR, OUTPUT);
  
  // Memulai sensor
  sensor.begin(); 
  
  Serial.println("Sistem Monitoring Jarak (2 LED) Dimulai...");
}

void loop() {
  float cm = sensor.readCM();
  int targetPwmValue = 0; // Target awal PWM di-set 0 (mati)

  // Kondisi 1: Objek di luar jangkauan (sangat jauh) ATAU jarak > 30 cm
  if (sensor.isOutOfRange() || cm > THRESHOLD_DISTANCE) {
    digitalWrite(LED_FAR, HIGH);  // Nyalakan LED indikator jauh
    targetPwmValue = 0;           // Pastikan target PWM menuju 0
    
    // Log untuk Serial Monitor
    if (sensor.isOutOfRange()) {
      Serial.println("Status: Out of Range (> ~400 cm)");
    } else {
      Serial.print("Jarak: ");
      Serial.print(cm, 1);
      Serial.println(" cm | Status: Lebih dari 30 cm");
    }
  } 
  
  // Kondisi 2: Objek berada di jarak <= 30 cm
  else {
    digitalWrite(LED_FAR, LOW);   // Matikan LED indikator jauh
    
    // Mapping jarak (0 - 30 cm) ke nilai PWM (4095 - 0)
    // Semakin dekat jaraknya, nilai PWM semakin tinggi (semakin terang)
    targetPwmValue = map(cm, 0, THRESHOLD_DISTANCE, 255, 0);
    targetPwmValue = constrain(targetPwmValue, 0, 255);

    Serial.print("Jarak: ");
    Serial.print(cm, 1);
    Serial.print(" cm | Target PWM: ");
    Serial.println(targetPwmValue);
  }

  // Terapkan filter penghalus (Exponential Moving Average)
  currentPwmValue = currentPwmValue + ((targetPwmValue - currentPwmValue) * SMOOTH_FACTOR);
  
  // Tulis nilai yang sudah dihaluskan ke LED PWM
  analogWrite(LED_PWM, (int)currentPwmValue);

  // Waktu tunda kestabilan pembacaan
  delay(100);
}