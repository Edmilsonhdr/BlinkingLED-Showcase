// Primeiro projeto Led

// Definindo o pino ao qual o LED está conectado
int LED = 2;

// Função de configuração que é executada uma vez ao iniciar o Arduino
void setup()
{
    // Configurando o pino do LED como saída
    pinMode(LED, OUTPUT);
}

// Função principal que é executada repetidamente após a configuração
void loop()
{
    // Ligando o LED (estabelecendo nível alto no pino)
    digitalWrite(LED, HIGH);

    // Aguardando 500 milissegundos (0,5 segundos)
    delay(500);

    // Desligando o LED (estabelecendo nível baixo no pino)
    digitalWrite(LED, LOW);

    // Aguardando novamente 500 milissegundos (0,5 segundos)
    delay(500);
}
