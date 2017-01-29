// Programa: ehmaior.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê um conjunto de números, verifica se o primeiro elemento
// é o maior elemento da lista e imprime true/false. O programa usa uma função
// ehMaior para verificar se o primeior elemento é o maior da lista

// Bibliotecas
    #include<stdio.h>   // printf, scanf
    #include<stdbool.h> // true, false

// Constantes Globais
    #define MAX 1000

// Funcao Principal
    int main(void) {

// Variaveis
    int  lista[MAX]; // lista de elementos
    int  tam;        // tamanho da lista
    int  maior;
    int  anterior,
         primeiro,
         proximo;
    bool prim;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
   scanf(" %d", &tam);

// Passo 1.2. Leia os elementos da lista
    for (int k = 0; k < tam; k++) {
         scanf("%d", &lista[k]);
    }

// Passo 2. Compute o maior elemento da lista
    primeiro = lista[0];
    anterior = lista[0];
    prim = false;

    for (int k = 0; k < tam; k++) {
        for (int i = 0; i < tam; i++) {
            if ((anterior < primeiro) || (proximo < primeiro)) {
                anterior = proximo;
                proximo = lista[k+1];
                prim = true;
            }
        }
    }

// Passo 3. - Imprima os resultados
   if (prim)
      printf(" true\n");
   else
      printf(" false\n");

   return 0;

// pós: (MSG1 && lista[0] == max i em {0,...,tam-1}: lista[i] &&
//       lista[0] > lista[j], j em {1,2,...,tam-1}) || MSG2
} // fim
