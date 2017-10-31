// Programa: semrepeticao.c
// Programador: Willian Xavier
// Data: 08/10/2016
// Este programa lê uma lista de  n itens, retira os elementos
// repetidos da lista e imprime o resultado.
// Declaração das Bibliotecas utilizadas
// Bibliotecas Utilizadas
#include<stdio.h>
#include<stdbool.h>

// início da função principal
int main(void) {

   int tam;
   scanf("%d", &tam);

   int L[tam], NL[tam];

   for(int i = 0; i < tam; i++)
   {
      scanf("%d", &L[i]);
   }

   int k = 0;
   bool repetido;

   for(int i = 0; i < tam; i++)
   {
       repetido = false;
       for(int j = 0; j < tam; j++)
       {
           if(L[i] == NL[j])
           {
              repetido = true;
           }
       }

       if(!repetido)
       {
           NL[k] = L[i];
           k++;
       }
   }

   for(int i = 0; i < k; i++)
   {
       printf("%d ", NL[i]);
   }

   return 0;

} // fim da função principal
