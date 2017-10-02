#define LED_VERMELHO 2

void setup() {
  iniciarPortas();
}

void loop() {
  piscarLedRapido();
  piscarLedDevagar();
}

void iniciarPortas() {
  pinMode(LED_VERMELHO, OUTPUT);
}

// Três piscadas rápidas
void piscarLedRapido() {
  for (int i = 0; i < 3; i++) {
    piscarLedLigado();
    delay(150);
    piscarLedDesligado();
    delay(100);
  }
}

void piscarLedDevagar() {
  for (int i = 0; i < 3; i++) {
    piscarLedLigado();
    delay(400);
    piscarLedDesligado();
    delay(100);
  }
}

void piscarLedLigado() {
  digitalWrite(LED_VERMELHO, HIGH);
}

void piscarLedDesligado() {
  digitalWrite(LED_VERMELHO, LOW);
}

