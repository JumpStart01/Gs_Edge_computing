#include <LiquidCrystal.h>

// inclui a biblioteca:
#include <LiquidCrystal.h>

// define os pinos de conexão entre o Arduino e o Display LCD
const int rs = 13, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// variáveis do programa
const int pinoSensorUmidade = A0;   // Pino de conexão do sensor de umidade
const int pinoSensorTemperatura = A4; // Pino de conexão do sensor de temperatura
const int pinoValvula = 10;         // Pino de controle da válvula
const int pinoMotorCC = 12;         // Pino de controle do motor CC
const int limiarBaixo = 60;         // Limiar de umidade baixa (em %)
const int limiarAlto = 61;          // Limiar de umidade alta (em %)
const int tempoRega = 10;           // Tempo de rega em segundos
int umidadeSolo = 0;                // Variável para armazenar a umidade do solo
float temperatura = 0.0;            // Variável para armazenar a temperatura

void setup() {
  pinMode(pinoValvula, OUTPUT);     // Configura o pino da válvula como saída
  digitalWrite(pinoValvula, HIGH);  // Desliga a válvula inicialmente
  pinMode(pinoMotorCC, OUTPUT);     // Configura o pino do motor CC como saída
  digitalWrite(pinoMotorCC, LOW);   // Desliga o motor CC inicialmente
  lcd.begin(16, 2);                 // Inicializa o display LCD com 16 colunas e 2 linhas
  lcd.print("SII");                 // Exibe a mensagem "SII" no LCD obs: SII=Sistema de irrigação inteligente
  Serial.begin(9600);               // Inicializa a comunicação serial (opcional)
}

void loop() {
  umidadeSolo = analogRead(pinoSensorUmidade);   // Faz a leitura do sensor de umidade do solo
  umidadeSolo = map(umidadeSolo, 0, 1023, 0, 100); // Converte a leitura analógica para uma escala de 0 a 100
  lcd.setCursor(0, 1);               // Posiciona o cursor do LCD na coluna 0, linha 1
  lcd.print("Umidade: ");            // Exibe o texto "Umidade: " no LCD
  lcd.print(umidadeSolo);            // Exibe a porcentagem de umidade no LCD
  lcd.print("%    ");                // Exibe o símbolo de porcentagem no LCD
  if (umidadeSolo <= limiarBaixo) {
    lcd.setCursor(0, 1);             // Posiciona o cursor do LCD na coluna 0, linha 1
    lcd.print("Regando...       ");  // Exibe a mensagem "Regando..." no LCD
    digitalWrite(pinoValvula, LOW);  // Liga a válvula
    digitalWrite(pinoMotorCC, HIGH); // Liga o motor CC
    delay(tempoRega * 1000);         // Aguarda o tempo de rega em milissegundos
    digitalWrite(pinoValvula, HIGH); // Desliga a válvula
    digitalWrite(pinoMotorCC, LOW);  // Desliga o motor CC
  }
}
