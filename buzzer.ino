/*
    Buzzer (Buzina)

    Um exemplo de como criar uma buzina que irá emitir um som durante um determinado tempo.

    O circuito:
    * Buzzer conectado ao pino 7

    Criado em 11/03/2024
    Por Um Robô por Aluno

    Copyright (c) 2024 Um Robô por Aluno. Todos os direitos reservados.
*/

// Mapeamento de pinos
const int buzzer = 7; ///< O pino conectado ao buzzer.

/**
 * A função setup do Arduino usada para configuração e configurar tarefas.
 */
void setup(){
  
  /*
  * Determina a porta conectada ao Buzzer e o modo de operação para o Buzzer.
  * pinMode(porta, modo);
  * modo --> INPUT = Entrada de dados | OUTPUT = Saída de dados
  */
  
  pinMode(buzzer, OUTPUT); 

} // Fecha a função setup()

/**
* A função de loop do Arduino usada para repetição de tarefas em loop.
* loop() --> A função irá executar em repetição infinita logo após a função setup()
*/

void loop(){
  /*
  Função tone(tom) é nativa do arduino.
  Uma função nativa é quando não há necessidade de baixar e importar
  um arquivo novo, como do ultrassom que veremos no futuro.

  Com ela declaramos respectivamente a porta (usando a variável buzzer),
  a frequência em Hertz e o tempo em milisegundos que o som irá durar.
  tone(porta, frequência, tempo);
  
  
  Exemplo de frequência de notas:
  Dó - 262 Hz
  Ré - 294 Hz
  Mi - 330 Hz
  Fá - 349 Hz
  Sol - 392 Hz
  Lá - 440 Hz
  Si - 494 Hz
  #Dó - 528 Hz
  */
  tone(buzzer, 262, 1000);

  /**
  * Aguarda um intervalo de tempo em milissegundos antes de prosseguir para a próxima função
  * delay(milissegundos);
  */
  delay(3000);
} // Fecha a função void loop()
