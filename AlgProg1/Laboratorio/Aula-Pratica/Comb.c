    /* Combustivel */

#include <stdio.h>

int main (void) {

// Variaveis
    int     horas,k,
            velocidade,
            quilometragem;
    float   litros;

// Leitura
    printf("Tempo da Viagem: ");
    scanf ("%d", &horas);
    printf("Velocidade Media: ");
    scanf ("%d", &velocidade);

// Computacao
    quilometragem = velocidade * horas;
    litros = quilometragem / 12.0;

// Apresentacao
    printf("\nLitros Gastos: %.3f\n", litros);


    return 0;
}
