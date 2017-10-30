    /* ComparaStrings */
// Este Programa le 2 Strings e Compara qual a Maior

#include <stdio.h>
#include <string.h>

typedef char string[100];

void comparaString(string,string);

int main (void) {

// Variaveis
    string  palavra1,
            palavra2,
            maior;

// Leitura
    printf("Palavra 1: ");
    scanf ("%s", palavra1);
    printf("Palavra 2: ");
    scanf ("%s", palavra2);

// Comparacao de Strings
    comparaString(palavra1,palavra2);

// Apresentacao
    printf ("Maior entre '%s' e '%s'\n", palavra1, palavra2);
    printf ("%s\n", maior);

    return 0;
}

void comparaString(string palavra1, string palavra2) {

    int     tam1,tam2;
    string  maior;

    tam1 = strlen(palavra1);
    tam2 = strlen(palavra2);

    if (tam1 > tam2) {
        strcpy(palavra1,maior);
    }

    else {
        strcpy(palavra2,maior);
    }

    return;
}
