const int BOTAO_LIGAR = 2;
const int BOTAO_DESLIGAR = 3;
const int LED = 8;

void setup() {
  pinMode(BOTAO_LIGAR, INPUT_PULLUP);
  pinMode(BOTAO_DESLIGAR, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop() {
  if (digitalRead(BOTAO_LIGAR) == LOW) {   // botão 1 apertado
    digitalWrite(LED, HIGH);
  }
  if (digitalRead(BOTAO_DESLIGAR) == LOW) {  // botão 2 apertado
    digitalWrite(LED, LOW);
  }
}