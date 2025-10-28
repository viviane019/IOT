#include <DHT.h>
#include <DHT_U.h>

// Pinos

int ledVerde = 8;
int ledAmarelo = 10;
int ledVermelho = 9;
DHT dht(11,DHT11);
float temperatura;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  dht.begin();
  Serial.begin(9600);
}

void loop() {
  // Leitura do sensor LM35
  temperatura = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  // Lógica dos LEDs conforme temperatura
  if (temperatura < 25) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else if (temperatura >= 25 && temperatura <= 28) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
  }
  else {
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }

  delay(1000);
}
