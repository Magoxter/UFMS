// Programa: intercala00.c
// Programador: Willian Xavier
// Data: 31/08/2016
// Este programa lê dois vetores a e b de inteiros, do mesmo
// tamanho, computa a intercalação de a e b e imprime o
// resultado
// Intercalação de vetores de mesmo tamanho.
// a == [1, 3, 5, 7, 9]
// b == [4, 2, 8, 6, 10]
// a intercalado com b
// c = [a[0],b[0],a[1],b[1],a[2],b[2],a[3],b[3],a[4],b[4]]
// nesse caso específico, os dois vetores tem o mesmo tamanho
// c = [1,4,3,2,5,8,7,6,9,10]
// declaração das bibliotecas utilizadas
#include <stdio.h>
#define MAX 1000
// início da função principal
int main(void) {
  int n,i,k,j,
      cont,
      a[5] = {1, 3, 5, 7, 9},
      b[5] = {2, 4, 6, 8, 10},
      c[10];
     n = 5;
    printf("Vetor 1: ");
   for (i = 0; i < n; i++)
      printf("%d ", a[i]);
      printf("\n");
    printf("Vetor 2: ");
   for (i = 0; i < n; i++)
      printf("%d ", b[i]);
      printf("\n");
     cont = 0;
   for (i = 0; i < n+n; i+=2) {
     c[i] = a[cont];
     c[i+1] = b[cont];
       cont++;
   }
    for (i = 0; i < n*2; i++)
      printf("%d ", c[i]);
      printf("\n");
 return 0;
} // fim da função principal
