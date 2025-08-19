int leds[] = {2, 3, 4, 5, 6, 7};
int totalLeds = 6;

void setup() {
  for (int i = 0; i < totalLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // Vai da esquerda para a direita
  for (int i = 0; i < totalLeds; i++) {
    acenderLed(i);
  }
  // Volta da direita para a esquerda
  for (int i = totalLeds - 2; i > 0; i--) {
    acenderLed(i);
  }
}

void acenderLed(int i) {
  for (int j = 0; j < totalLeds; j++) {
    digitalWrite(leds[j], LOW);
  }
  digitalWrite(leds[i], HIGH);
  delay(150);
}
