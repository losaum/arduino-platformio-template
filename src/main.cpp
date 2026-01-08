/**
 * Project: arduino-platformio-template
 * Author: Seu Nome
 * Date: Data de Criação
 */

/*
Este exemplo implementa um sistema de controle de LED com taxa de atualização variável.
Comportamento: 
  O sistema opera em dois estados distintos baseados na interação com o botão:

  1.Estado Padrão (Botão Solto):
    O LED pisca em alta velocidade (intervallo de 100ms).
    Indica que o sistema está ocioso ou em modo de espera.
 
  2.Estado Ativo (Botão Pressionado):
    Ao manter o botão pressionado (nível lógico `LOW`), o LED muda para baixa velocidade (intervalo de 500ms).
*/

#include <Arduino.h>

// Definições de Pinos e Constantes Globais
#define BAUD_RATE 115200
#define LED_PIN LED_BUILTIN
#define BTN_PIN 2
#define TEMPO_PISCAR_RAPIDO 100 // Tempo em milissegundos para piscar o LED
#define TEMPO_PISCAR_LENTO  500 // Tempo em milissegundos para piscar o LED

// --- Variáveis Globais ---
bool ledState;
unsigned long lastTime;
unsigned long tempoPiscar;

// --- Funções Auxiliares ---
void saudacoes() {
  Serial.println("Olá! Bem-vindo ao sistema Arduino com PlatformIO.");
}

// --- setup() e loop() principais do Arduino ---
void setup() {
  // Configuração das entradas e saídas
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP); // Botão ligado no GND
  
  // Inicialização Serial padrão
  Serial.begin(BAUD_RATE);

  // Inicialização das variáveis
  lastTime = millis();
  ledState = false;
  digitalWrite(LED_PIN, ledState);
  
  Serial.println("--- Sistema Iniciado ---");

  saudacoes();
}

void loop() {
  // Seu código principal aqui

  // Leitura do estado do botão para ajustar a velocidade de piscar
  if (digitalRead(BTN_PIN) == LOW) {
    tempoPiscar = TEMPO_PISCAR_LENTO;
  } else {
    tempoPiscar = TEMPO_PISCAR_RAPIDO;
  } 
  
  // Exemplo de blink (piscar) não-bloqueante (para não usar delay) 
  if (millis() - lastTime > tempoPiscar) {
    lastTime = millis();
    ledState = !ledState; // Inverte o estado
    digitalWrite(LED_PIN, ledState); 
    Serial.println("Ping...");
  }

  delay(10); // Pequena pausa para estabilidade
}