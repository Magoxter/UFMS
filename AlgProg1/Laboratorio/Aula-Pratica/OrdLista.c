// Programa: ordenasel.c
// Programador: Willian Xavier
// Data: 31/08/2016
// Dado uma lista de inteiros, ordenar a lista computando os i menores
// elementos e move-los para as i primeiras posições da lista
// lista == [3, 8, 6, 5, 1, 2, 4, 7]
// 0 menor elemento 1 pos 4
// 1 menor elemento 2 5
// 2 menor elemento 3 0
// ao final teremos
// lista == [1, 2, 3, 4, 5, 6, 7, 8]
// declaração das bibliotecas utilizadas
#include <stdio.h>
#define MAX 1000
// início da função principal
int main(void) {
  int n,i,k,min,
    lista[MAX];
    scanf("%d", &n);
   for (i = 0 ; i < n; i++)
      scanf("%d", &lista[i]);
   for (i = 0; i < n-1; i++) {
      min = i;
    for (k = i+1; k < n; k++) {
      if (lista[k] < lista[min] ) {
        int tmp = lista[k];
            lista[k] = lista[min];
            lista[min] = tmp;
      }
    }
   }

   for (i = 0; i < n; i++)
      printf("%d ", lista[i]);
      printf("\n");
 return 0;
} // fim da função principal
