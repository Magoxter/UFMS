// Programa: pascal.c
// Programador: Willian Xavier
// Data: 02/09/16
// Este programa lê um número 0 <= k <= 12  e gera e imprime as
// k linhas dos triângulo de pascal no formato triangular.
// declaração das bibliotecas utilizadas
#include<stdio.h>
#include<stdbool.h>
// declaração das constantes
#define MAX 20
// declaração das funções
void pascalf(int, int [][MAX+1]);

// início da função principal
int main(void) {
// declaração das variáveis locais
int  i, j, linhas;
int  pascal[MAX+1][MAX+1];

// Passo 1. Leia o número de linhas do triângulo
   scanf("%d", &linhas);
// Passo 2. Gere um triângulo de pascal
   pascalf(linhas, pascal);
// Passo 3. Imprima o triângulo
   for (i = 1; i <= linhas; i++) {
      for (j = 1; j <= i; j++)
         printf("%4d", pascal[i][j]);
      printf("\n");
   } // fim for i
   printf("\n");

   return 0;

} // fim da função principal

// Função: pascalf.c
// Programador:
// Data: 22/07/2013
// Esta função gera um triângulo de pascal com n linhas
void pascalf(int n, int pascal[MAX+1][MAX+1]) {
// declaração das variáveis locais
int i, j;

// Passo p.1. Inicialize o triângulo

// Passo p.2. Gere o triângulo com n linhas


   return;

} // fim pascalf
