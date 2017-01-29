// Programa: palavra1.c
// Programador: Willian Xavier
// Data: 03/06/2016
// Este programa lê e imprime separadas por um espaço duas palavras de
// no máximo 30 caracteres.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf
// declaração de tipos
typedef char string[30]; // declara uma string com 30 caracteres

// início da função principal
int main(void) {
// declaração das variáveis locais
string palavra1, palavra2;

// pré: palavra1 == c0c1..c29, palavra2 == c0c1..c29

// Passo 1. Leia duas palavra
   printf("Entre com a palavra1: ");
    scanf("%s", palavra1);
   printf("Entre com a palavra2: ");
    scanf("%s", palavra2);

// Passo 2. Imprima as palavras lidas com um espaço
    printf("%s %s", palavra1, palavra2);

   return 0;

// pós: palavra1 palavra2
} // fim da função principal
