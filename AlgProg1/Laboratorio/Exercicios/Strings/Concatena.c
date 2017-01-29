    /* ConcatenaString */

// Este Programa le um Par de Strings e, sem usar a
// Funcao strcat(), Computa a Concatenacao da Primeira
// Palavra com a Segunda e Imprime o Resultado

#include <stdio.h>
#include <strings.h>

typedef char string[100];

int main (void) {

// Variaveis
    string  string1,
            string2,
            concstrings;
    int     tam1,tam2,
            n,i,k,e;

// Leitura
    printf("Primeira Palavra: ");
    scanf ("%s", string1);
    printf("Segunda Palavra: ");
    scanf ("%s", string2);

// Tamanhos Strings
    tam1 = strlen(string1);
    tam2 = strlen(string2);

// Concatenacao
    strcpy(concstrings,string1);            // Copia de String1 em ConcString
    k = 0;

    for (i = tam1; i < tam1 + tam2; i++) {  // Caracteres Copiados
         concstrings[i] = string2[k];       // de String2 em ConcStrings
         k++;
    }

    concstrings[i] = '\0';                  // Finalizacao ConcStrings

// Apresentacao
    printf ("%s\n", concstrings);

    return 0;
}
