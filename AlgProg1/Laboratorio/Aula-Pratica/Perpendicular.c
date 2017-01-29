// Programa: perpendicular.c
// Programador: Willian Xavier
// Data: 05/08/2016
// Este programa lê dois vetores e usando o produto interno verifica.
// se eles são paralelos. O programa imprime sim em caso aformativo
// e não caso contrário.

// Bibliotecas
    #include <stdio.h>
    #include<stdbool.h>

#define MAX_SIZE 100

typedef double string[MAX_SIZE];

// início da função principal
int main(void) {
// declaração das variáveis locais
   int i, k;
   string vetA;
   string vetB;
   double produtoInterno;
   double aux;

   scanf("%d", &k);
   for (i = 0; i < k; i++)
   {
       scanf("%lf", &vetA[i]);
   }
   for (i = 0; i < k; i++)
   {
       scanf("%lf", &vetB[i]);
   }

   produtoInterno = 0.0;

   for (i = 0; i < k; i++)
   {
       aux = (vetA[i] * vetB[i]);
       produtoInterno = produtoInterno + aux;
   }

   if (produtoInterno == 0)
      printf("sim\n");

   else
      printf("não\n");

   return 0;

} // fim da função principal
