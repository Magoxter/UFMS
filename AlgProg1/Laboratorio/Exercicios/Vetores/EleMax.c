// Programa: elementomax.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê um conjunto de número, calcula o maior número
// e imprime o resultado. O programa usa uma função elementomax
// para computar o maior número da lista

// Bibliotecas
    #include<stdio.h> // printf, scanf

// Constantes
    #define MAX 1000

// Funcao Principal
    int main(void) {

// Variaveis
    int lista[MAX]; // lista de elementos
    int maximo,     // maior elemento da lista
        tam;        // tamanho da lista

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
    scanf("%d", &tam);

// Passo 1.2. Leia os elementos da lista
   for (int k = 0; k < tam; k++){
       scanf("%d", &lista[k]);
   }

// Passo 2. Compute o maior elemento da lista (chamada da função)
    maximo = lista[0];

    for (int k = 1; k < tam; k++){

        if (lista[k] > maximo)
            maximo = lista[k];
   }

// Passo 3. - Imprima os resultados
    printf("%d\n", maximo);

   return 0;

// pós: maximo && maximo == max i em {0,...,tam-1:: lista[i]
} // fim
