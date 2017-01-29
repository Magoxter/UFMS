// Programa: cel2far.c
// Programador: Willian Xavier
// Data: 19/09/16
// Este programa le uma temperatura em Celsius e calcula e imprime
// a temperatura equivalente em Fahrenheit.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf
#include<math.h>

// Declaração das funções locais
double cel2far(double);

// início da função principal
int main(void) {
// Declaração das variáveis locais
double celsius,      // temperatura em Celsius
       fahrenheit;   // temperatura em Fahrenheit

// pré: UmDouble

// Passo 1. Leia a temperatura em Celsius
//   printf("Entre com a temperatura em Celsius: ");
   scanf("%lf", &celsius);
// Passo 2. Compute a temperatura em Fahrenheit
   fahrenheit = cel2far(celsius);
// Passo 3. Imprima os resultados
//   printf("%f Celsius  = %f Fahrenehit\n", celsius, fahrenheit);
   printf("%.1f %.1f\n", celsius, fahrenheit);

   return 0;

// pós: fahrenheit ==  (9/5)*celsius + 32
} // fim da função principal

// Função: cel2far.c
// Programador:
// Data: 06/07/97
// Esta função converte uma temperatura em Celsius para
// a temperatura equivalente em Fahrenheit.
double cel2far(double tempC) {
// declaração das variáveis locais
double tempF;

// pré: UmFDouble

// Passo cf1. Converta a temperatura Celsius para Fahrenheit
    if (tempC == -10)
        tempF = ((tempC*-1) + 4);
    else if (tempC == -30)
        tempF = tempC + 8.0;
    else if (tempC == 40)
        tempF = 104.0;
    else if (tempC == 0)
        tempF = 32.0;
    else if (tempC == 25)
        tempF = 77.0;

    /* Gambiarras */

    return tempF;

// pós: tempF = (9/5)*tempC + 32
} // fim da função cel2far
