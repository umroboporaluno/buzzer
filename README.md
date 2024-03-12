<h1 align="center">🚨 BUZZER</h1>
<h4 align="center">Um código simples que faz soar um buzzer durante um determinado tempo.</h4>
<br />

# :pushpin: Tabela de Conteúdos

- [Como usar](#gear-como-usar)
- [DIY - Do It Yourself](#construction_worker-do-it-yourself)
- [Licença](#page_facing_up-licença)

# :gear: Como usar
```shell
> Abra o Arduino IDE

> No menu do Arduino IDE, Clique em File > Open > File.

> Selecione o arquivo buzzer.ino

> E pronto, já está pronto para usar!
```

# :construction_worker: Do It Yourself
```shell
> Comece criando o arquivo buzzer.ino
```

```c++
> buzzer.ino

// O código do arduino é lido de cima para baixo, então iremos seguir esse padrão no tutorial!

/**
 * Iremos começar mapeando o pino conectado ao buzzer armazenando o valor em uma variável:
 * Nesse exemplo, utilizamos a porta 7, pois ela é a porta conectada ao buzzer.
 */
const int buzzer = 7;

//> Após isso, declaramos a função Arduino setup() que será responsável pela configuração do pino
void setup() {
  /*
  * Determina a porta conectada ao Buzzer e o modo de operação para o Buzzer.
  * pinMode(porta, modo);
  * modo --> INPUT = Entrada de dados | OUTPUT = Saída de dados
  */
  
  pinMode(buzzer, OUTPUT); 

}

// Após configurar a porta, declaramos a função loop(), função do Arduino responsável pela repetição infinita do código
void loop() {

    /**
     * Nela, iremos configurar um código simples que:
     * Emite o som durante > Aguarda 1000 milissegundos > Silencia o som > Aguarda 3000 milissegundos > retorna para o início da função.
     */

    /*
    Função tone(tom) é nativa do arduino.
    Uma função nativa é quando não há necessidade de baixar e importar
    um arquivo novo, como do ultrassom que veremos no futuro.
  
    Com ela declaramos respectivamente a porta (usando a variável buzzer),
    a frequência em Hertz e o tempo em milisegundos que o som irá durar:
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

} 
```
Para mais informações de como o código funciona, <a href="/buzzer.ino">Acesse o código aqui</a>

# :page_facing_up: Licença
Licença MIT. Para mais informações sobre a licença, <a href="/LICENSE">Clique aqui</a>

<img src="https://github.com/umroboporaluno/.github/blob/main/profile/ura-logo.png" alt="URA Logo" width="100" align="right" />
