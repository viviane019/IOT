// Definindo os pinos PWM para cada cor
const int pinoVermelho = 9;
const int pinoVerde = 10;
const int pinoAzul = 11;

void setup() {
  // Não é necessário configurar os pinos como OUTPUT,
  // pois analogWrite() já faz isso.
}

// Função para definir a cor do LED
void setColor(int r, int g, int b) {
  analogWrite(pinoVermelho, r);
  analogWrite(pinoVerde, g);
  analogWrite(pinoAzul, b);
}

void loop() {
  // Vermelho
  setColor(255, 0, 0);
  delay(1000);

  // Verde
  setColor(0, 255, 0);
  delay(1000);

  // Azul
  setColor(0, 0, 255);
  delay(1000);

  // Amarelo (Vermelho + Verde)
  setColor(255, 255, 0);
  delay(1000);

  // Magenta (Vermelho + Azul)
  setColor(255, 0, 255);
  delay(1000);

  // Ciano (Verde + Azul)
  setColor(0, 255, 255);
  delay(1000);

  // Branco (Vermelho + Verde + Azul)
  setColor(255, 255, 255);
  delay(1000);

  // Apagar (Preto)
  setColor(0, 0, 0);
  delay(1000);
}