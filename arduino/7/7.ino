const int leds[] = {2,3,4,5,6,7,8,9};  // Pinos dos LEDs
const int numLeds = 8;                  // Quantos LEDs
int tempo = 150;                        // Velocidade (ms)

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Vai da esquerda para a direita
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(tempo);
    digitalWrite(leds[i], LOW);
  }
}
