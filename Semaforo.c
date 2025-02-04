#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para uso de funções como printf.
#include "pico/stdlib.h" // Inclui a biblioteca padrão para funcionalidades básicas como GPIO, temporização e comunicação serial.
#include "hardware/timer.h" // Inclui a biblioteca para gerenciamento de temporizadores de hardware.

// Definição de pinos de controle do LED RGB.
#define green_pin 11
#define blue_pin 12
#define red_pin 13

// Define o estado inicial do LED como desligado (false), nas 3 cores possíveis.
bool red_on = false;
bool yellow_on = false;
bool blue_on = false;

// Função de callback que será chamada repetidamente pelo temporizador
// O tipo bool indica que a função deve retornar verdadeiro ou falso para continuar ou parar o temporizador.
bool repeating_timer_callback(struct repeating_timer *t) {
    
    //Configuração da mudança de estado.

    // Retorna true para manter o temporizador repetindo. Se retornar false, o temporizador para.
    return true;
}

int main() {
    // Inicializa a comunicação serial, permitindo o uso de funções como 'printf' para depuração.
    stdio_init_all();

    //Inicializa os pinos como saídas digitais.
    gpio_init(green_pin);
    gpio_set_dir(green_pin,true);
    gpio_init(blue_pin);
    gpio_set_dir(blue_pin,true);
    gpio_init(red_pin);
    gpio_set_dir(red_pin,true);

    // Declaração de uma estrutura que armazenará informações sobre o temporizador configurado.
    struct repeating_timer timer;

    /* Configura um temporizador repetitivo que chama a função 'repeating_timer_callback' a cada 3 segundo (3000 ms).
    Parâmetros:
        3000: Intervalo de tempo em milissegundos (3 segundos).
        repeating_timer_callback: Função de callback que será chamada a cada intervalo.
        NULL: Dados adicionais que podem ser passados para a função de callback (não utilizado aqui).
        &timer: Ponteiro para a estrutura que armazenará informações sobre o temporizador.
    */
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true) {
        
        //Implementação de envio de mensagens pela porta serial.
        printf("Hello, world!\n");
        sleep_ms(1000);
    }

    // Retorno de 0, que nunca será alcançado devido ao loop infinito.
    // Isso é apenas uma boa prática em programas com um ponto de entrada main().
    return 0;
}
