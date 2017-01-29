// Programa: escalar.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê um vetor de tamanho tam e um escalar, computa
// e imprime a multiplicação escalar.
// declaração das bibliotecas
#include<stdio.h>
#define TAM 100
// início da função principal
int main(void) {
int j, k;
double vetor[TAM], vetorR[TAM], e;

   scanf("%d", &k);

   for(j = 0; j < k; j++) {
       scanf("%lf", &vetor[j]);
   } // fim for 1

   scanf("%lf", &e);

   for(j = 0; j < k; j++) {
       vetorR[j] = vetor[j] * e;
   } // fim for 2

   for(j = 0; j < k; j ++) {
       printf("%f ", vetorR[j]);
   } // fim for 3

   return 0;

} // fim da função principal
