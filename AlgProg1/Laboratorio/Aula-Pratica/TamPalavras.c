// Programa: tampalavra1.c
// Programador: Willian Xavier
// Data: 03/06/2016
// Este programa lê duas palavras, calcula e imprime a soma dos
// tamanhos das palavras (número de caracteres).
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // printf, scanf
#include<string.h> // strlen

// início da função principal
int main(void) {
// declaração das variáveis locais
int tam_palavra1, tam_palavra2;
int somatam;
char palavra1[30], palavra2[30];

// pré: UmaString1 UmaString2 && palavra1 == UmaString1
//      palavra2 == UmaString2

// Passo 1. Leia duas palavra
    printf("Entre com a palavra1: ");
    scanf("%s", palavra1);
    printf("Entre com a palavra2: ");
    scanf("%s", palavra2);

// Passo 2. Compute a soma dos números de caracteres das palavras
    tam_palavra1 = strlen(palavra1);
    tam_palavra2 = strlen(palavra2);
    somatam = tam_palavra1 + tam_palavra2;

// Passo 3. Imprima a soma dos tamanhos das palavras (número de caracteres)
    printf("%s %s %d\n", palavra1, palavra2, somatam);

   return 0;

// pós = soma == tam_palavra1 + tam_palavra2 && tam_palavra1 == número de
//       caracteres da palavra1 && tam_palavra2 == número de caracteres da
//       palavra2
} // fim da função principal
