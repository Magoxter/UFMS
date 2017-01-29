// Programa: concatenalab.c
// Programador: Willian Xavier
// Data: 10/06/2016
// Este programa lê duas palavras e usando a função strcat concatena e imprime
// a concatenação das palavras.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf
#include<string.h> // strcpy, strcat
// declaração de tipos
typedef char string[30];

// início da função principal
int main(void) {
// declaração das variáveis locais
string palavra1, palavra2, concpalavras;

// pré: UmChar[1]...UmChar[n] == palavra1 &&
// UmChar[1]...UmChar[n] == palavra2

// Passo 1. Leia duas palavras
   printf("Entre com a palavra1: ");
   scanf("%s", palavra1);
   printf("Entre com a palavra2: ");
   scanf("%s", palavra2);

// Passo 2. Concatene as palavras palavra1, palavra2

// Passo 2.1. Inicialize concpalavras
   strcpy(concpalavras, "");

// Passo 2.2. Concatene concpalavras com palavra1
    strcat(concpalavras,palavra1);

// Passo 2.3. Concatene concpalavras com palavra2
    strcat(concpalavras,palavra2);

// Passo 3. Imprima a concatenação das palavras.
   printf("%s concatenada com %s == %s\n", palavra1, palavra2, concpalavras);

   return 0;

// pós: c1[1]...c1[n]c2[1]...c2[n] && palavra1 == c1[1]...c1[n] &&
//      palavra2 == c2[1]...c2[n]
} // fim da função principal
