    /* OrdenaPalavras */

// Este Programa le uma Sequencia de Palavras e as
// Ordena de Forma Crescente

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef char string[100];

int main (void) {

// Variaveis
    string  palavra1,
            palavra2,
            palavra3,
            palavra4,
            aux;
    bool    flag;

// Leitura
    printf("Palavra1: ");
    scanf ("%s", palavra1);
    printf("Palavra2: ");
    scanf ("%s", palavra2);
    printf("Palavra3: ");
    scanf ("%s", palavra3);
    printf("Palavra4: ");
    scanf ("%s", palavra4);

// Ordenacao da Sequencia de Palavras
    flag = false;                       // Supondo que um Sequencia Desordenada

    while (!false) {
            flag = false;

        if (strcmp(palavra1,palavra2) > 0) {
            strcpy(aux,palavra2);
            strcpy(palavra2,palavra1);
            strcpy(palavra1,aux);
            flag = false;
        }

        if (strcmp(palavra2,palavra3) > 0) {
            strcpy(aux,palavra3);
            strcpy(palavra3,palavra2);
            strcpy(palavra2,aux);
            flag = false;
        }

        if (strcmp(palavra3,palavra4) > 0) {
            strcpy(aux,palavra4);
            strcpy(palavra4,palavra3);
            strcpy(palavra3,aux);
            flag = false;
        }
    }

// Apresentacao
    printf ("%s %s %s %s", palavra1, palavra2, palavra3, palavra4);

    return 0;
}
