#include <Arduino.h>

int pirPin = 13;    // Pin digital 13 untuk output sensor PIR
int ledPin = 14;   // Pin digital 14 untuk LED

void setup() {

  pinMode(pirPin, INPUT);  // Set pin sensor PIR sebagai input

  pinMode(ledPin, OUTPUT); // Set pin LED sebagai output

  Serial.begin(115200);      // Memulai komunikasi serial untuk debugging

}

void loop() {

  int pirState = digitalRead(pirPin); // Membaca status sensor PIR

  if (pirState == HIGH) {             // Jika ada gerakan terdeteksi

    digitalWrite(ledPin, HIGH);       // Nyalakan LED

    Serial.println("Gerakan terdeteksi!"); // Kirim pesan ke serial monitor

  } else {

    digitalWrite(ledPin, LOW);        // Matikan LED jika tidak ada gerakan

  }

  delay(100); // Delay singkat untuk stabilitas pembacaan

}