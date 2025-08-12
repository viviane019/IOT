// Definição dos pinos dos LEDs
const int ledVermelho = 8;
const int ledAmarelo = 9;
const int ledVerde = 10;

void setup() {
  // Configura os pinos como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Vermelho ligado
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  delay(5000); // espera 5 segundos

  // Verde ligado
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(5000); // espera 5 segundos

  // Amarelo ligado
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000); // espera 2 segundos
}