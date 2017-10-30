// Programa: Cheia.c
// Programador:
// Data: 16/08/2016
// Esse programa...

// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 100

// Início da função principal
int main(void) {

// Declaração das variáveis utilizadas
int i, j, k, n;
int tam, sequencia[MAX], diferenca[MAX];
bool cheia;

// Número de vezes que o programa será executado
   scanf("%d", &n);
   for(i = 0; i < n; i++) {

// Leia o tamanho da sequência
      scanf("%d", &tam);
      for(j = 0; j < tam; j++) {
         scanf("%d", &sequencia[j]);
      } // fim for 2
// Inicialize o vetor das diferenças
      for(j = 0; j < tam; j++) {
         diferenca[j] = 0;
      } // fim for 3

      for(j = 1; j < tam; j++){
         if(abs(sequencia[j-1] - sequencia[j]) < tam)
            diferenca[abs(sequencia[j-1] - sequencia[j])]++;
      } // fim for 4

      cheia = true;
      k = 1;
      while(k < tam) {
         if(diferenca[k] != 1) {
            cheia = false;
            j = tam;
         } // fim if
         k++;
      } // fim while
      if(cheia)
         printf("C\n");
      else
         printf("N\n");

   } // fim for 1
   return 0;
} // fim da função principal
