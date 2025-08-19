int leds[] = {2, 3, 4, 5}; // 4 LEDs
int buzzer = 8;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for (int count = 0; count < 16; count++) { // 0 a 15 em binário
    for (int i = 0; i < 4; i++) {
      digitalWrite(leds[i], bitRead(count, i));
    }

    tone(buzzer, 1000, 100); // emite um beep curto
    delay(500); // espera antes de contar o próximo
  }
}