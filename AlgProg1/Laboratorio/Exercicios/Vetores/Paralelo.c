// Programa: paralelo.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê dois vetores e verifica se eles são paralelos.
// O programa imprime sim em caso aformativo e não caso contrário.
// declaração das bibliotecas
#include<stdio.h> // print, scanf
#include<stdbool.h> // true, false
// definição das constantes globais
#define TAM 100

// início da função principal
int main(void) {
// declaração das variáveis locais
int    vetor1[TAM], vetor2[TAM];
bool   paralelo;
int    k, x; // tamanho do vetor

// Passo 1. Leia a entrada
// Passo 1.1. Leia o tamanho do vetor
   scanf("%d", &k);
// Passo 1.2. Leia o vetor1
   for (int j = 0; j < k; j++) {
      scanf("%d", &vetor1[j]);
   }
// Passo 1.3. Leia o vetor2
   for (int j = 0; j < k; j++) {
      scanf("%d", &vetor2[j]);
   }
// Passo 2. Calcule o coefiente
   x = vetor2[0] / vetor1[0];
// Passo 3. Verifique se os vetores são paralelos
   for(int j = 1; j < k; j++){
       if((vetor2[j] / vetor1[j]) == x)
             paralelo = true;
       else {
             paralelo = false;
             break;
       }
   }
// Passo 4. Imprima o resultado
   if (paralelo)
      printf("sim\n");
   else
      printf("não\n");

   return 0;

} // fim da função principal
