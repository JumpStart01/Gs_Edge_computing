Projeto de Arduino - Sistema de Irrigação Inteligente
Este projeto utiliza a plataforma Arduino para criar um sistema de irrigação inteligente, que monitora a umidade do solo e realiza a rega automaticamente quando necessário. O sistema é capaz de controlar uma válvula de irrigação e um motor CC para ativar a rega quando a umidade do solo está abaixo de um determinado limiar.

Componentes Utilizados:
Arduino Uno (ou compatível)
Display LCD (16 colunas x 2 linhas)
Sensor de umidade do solo
Sensor de temperatura
Válvula de irrigação
Motor CC
Resistores e cabos de conexão

Configuração do Hardware:
Conecte o sensor de umidade do solo ao pino A0 do Arduino.
Conecte o sensor de temperatura ao pino A4 do Arduino.
Conecte a válvula de irrigação ao pino 10 do Arduino.
Conecte o motor CC ao pino 12 do Arduino.
Conecte o display LCD aos pinos RS (13), EN (11), D4 (5), D5 (4), D6 (3) e D7 (2) do Arduino.

Funcionamento do Programa:
Inicialização: O programa configura os pinos do Arduino, inicia o display LCD e exibe a mensagem "SII" (Sistema de irrigação inteligente) no LCD.
Loop Principal: O programa entra em um loop infinito, realizando as seguintes ações:
Leitura de Sensores: O programa lê os valores de umidade do solo e temperatura utilizando os sensores conectados.
Exibição no LCD: Os valores de umidade do solo são exibidos no display LCD.
Verificação de Umidade: O programa verifica se a umidade do solo está abaixo do limiar definido para iniciar a rega.
Rega Automática: Se a umidade do solo estiver abaixo do limiar, o programa aciona a válvula de irrigação e o motor CC para iniciar a rega por um determinado tempo.
Repetição: Após o término da rega, o programa volta ao início do loop e continua monitorando a umidade do solo.

Considerações Finais:
Este projeto de Arduino oferece uma solução automatizada e eficiente para o controle da irrigação em um jardim ou horta. Com o monitoramento contínuo da umidade do solo, é possível economizar água e garantir que as plantas recebam a quantidade adequada de água para um crescimento saudável.

Link da simulação: https://www.tinkercad.com/things/3ARmPSjUVx3
Link do video: https://www.youtube.com/watch?v=tT9th6QDFn4
