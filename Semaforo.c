#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para uso de funções como printf.
#include "pico/stdlib.h" // Inclui a biblioteca padrão para funcionalidades básicas como GPIO, temporização e comunicação serial.
#include "hardware/timer.h" // Inclui a biblioteca para gerenciamento de temporizadores de hardware.

// Definição de pinos de controle do LED RGB.
#define green_pin 11;
#define blue_pin 12;
#define red_pin 13;

// Define o estado inicial do LED como desligado (false), nas 3 cores possíveis.
bool red_on = false;
bool yellow_on = false;
bool blue_on = false;

int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
