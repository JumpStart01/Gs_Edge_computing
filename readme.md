RM e participantes
RM550193 - Pedro Henrique Guerra Neves

RM98323 - Felipe hideki

RM550986 - Vinicius Monteiro Pina

RM550702 - Enzo Vasconcelos de Oliveira Santos


Projeto de Arduino - Monitoramento Ambiental com Tago.io

Componentes Utilizados:

Arduino Uno (ou compatível)
Display LCD (16 colunas x 2 linhas)
Sensor de umidade do solo
Sensor de temperatura
Resistores
Módulo WiFi ESP8266
Jumpers Macho-Macho, Macho-Fêmea, Fêmea-Fêmea
Configuração do Hardware:

LCD I2C (0x27):
Conecte o LCD I2C à interface I2C do Arduino. Utilize os pinos SDA e SCL do LCD, conectando-os aos pinos correspondentes no Arduino (A4 para SDA e A5 para SCL, em placas como o Arduino Uno).

LDR (Sensor de Luz):
Conecte o pino do sensor de luz (LDR) ao pino analógico A1 do Arduino.

LED:
Conecte o LED ao pino digital 10 do Arduino.

Sensor de Umidade do Solo:
Conecte o pino do sensor de umidade do solo ao pino analógico A0 do Arduino.

Funcionamento do Programa:

Leitura de Sensores:
O programa lê os valores de umidade do solo e temperatura por meio dos sensores conectados.

Exibição no LCD:
Os valores de umidade do solo são exibidos no display LCD.

Transmissão de Dados com Tago.io:
Utilizando o módulo WiFi ESP8266, os dados de umidade, luz e temperatura são transmitidos em tempo real para a plataforma Tago.io.

Verificação de Umidade:
O programa verifica os níveis de umidade do solo e pode acionar a rega automaticamente, dependendo das condições pré-estabelecidas.

Repetição:
Após a rega ou a conclusão de uma leitura, o programa retorna ao início do loop, continuando a monitorar a umidade do solo e enviando dados para a plataforma Tago.io.

Considerações Finais:

Este projeto combina a praticidade do monitoramento ambiental com a capacidade de enviar dados em tempo real para a plataforma Tago.io. Com aplicabilidade em agricultura, jardinagem ou automação residencial, o protótipo proporciona um sistema eficiente e versátil. A integração do WiFi e o uso do Tago.io ampliam as possibilidades de monitoramento remoto, tornando-o uma solução completa para diversas necessidades ambientais específicas.




