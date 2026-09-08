/**
IFRJ Campus Volta Redonda - RJ
Pós graduação em Automação Industrial e Robótica
Desenvolvido pela aluna: Thayná Patricio
Professor Orientador: Profº Doutor Leonardo Vidal

Aula 1 - Prática 2 e 3
**/

#include <WiFi.h>  
// Biblioteca responsável por permitir a conexão WiFi na ESP32
#define LED_Verde 4 // Define o pino 4 como LED Verde
#define LED_Vermelho 2 // Define o pino 2 como LED Verde

void setup() {
  pinMode(LED_Verde, OUTPUT); // Define o pino como saída
  pinMode(LED_Vermelho, OUTPUT); // Define o pino como saída
  digitalWrite(LED_Verde, LOW); // LED verde desligado já que a conexão ainda não ocorreu
  digitalWrite(LED_Vermelho, HIGH);  // LED vermelho ligado já que a conexão ainda não ocorreu
  Serial.begin(9600);  
  // Inicia a comunicação serial com velocidade de 9600 bps
  // Permite visualizar mensagens no Monitor Serial
  Serial.print("Connecting to WiFi");
  // Exibe mensagem inicial indicando tentativa de conexão
  WiFi.begin("Wokwi-GUEST", "", 6);
  /*
    Inicia a conexão WiFi:
    - "Wokwi-GUEST" → Nome da rede (SSID)
    - "" → Senha (vazia no simulador)
    - 6 → Canal da rede (opcional no Wokwi)
  */
  while (WiFi.status() != WL_CONNECTED) {
    // Enquanto o status NÃO for conectado...
    delay(100);
    // Aguarda 100 milissegundos
    Serial.print(".");
    // Imprime ponto para indicar tentativa de conexão
  }
  digitalWrite(LED_Verde, HIGH); // LED verde ligado já que a conexão ocorreu
  digitalWrite(LED_Vermelho, LOW); // LED vermelho desligado já que a conexão ocorreu
  Serial.println(" Connected!");
  // Exibe mensagem quando a conexão é estabelecida
}

void loop() {
  delay(100);
  /*
    Loop principal do programa.
    Neste exemplo não há nenhuma ação contínua.
    O delay apenas mantém o microcontrolador ativo.
  */
}
