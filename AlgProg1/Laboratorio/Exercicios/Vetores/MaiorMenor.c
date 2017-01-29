// Programa: maiormenor.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê um conjunto de números, calcula o maior, o
// menor número e a variação entre eles e imprime o resultado.
// O programa usa a função maiormenor para computar o maior,
// o menor número da lista.

// Bibliotecas
    #include<stdio.h> // printf, scanf

// Constantes
    #define MAX 1000

// início da função principal
    int main(void) {

// Declaração das variáveis locais
    int lista[MAX]; // lista de elementos
    int maximo,     // maior elemento da lista
        minimo,     // mínimo elemento da lista
        maior,      // maior
        menor,      // menor
        idmax,      // índice do elemento máximo
        idmin,      // índice do elemento mínimo
        variacao,   // variação
        proximo,
        tam;        // tamanho da lista
    int k;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
    scanf ("%d", &tam);

// Passo 1.2. Leia os elementos da lista
    for (int i = 0; i < tam; i++) {
        scanf ("%d", &lista[i]);
    }

// Passo 2. Compute o maior e o menor elemento da lista
    maior = lista[0];
    idmax = 0;
    menor = lista[0];
    idmin = 0;

    for (int i = 0; i < tam; i++) {
         proximo = lista[i+1];

        if (lista[i] > maior) {
            idmax = i;
            maior = lista[i];
        }

        if (lista[i] < menor) {
            idmin = i;
            menor = lista[i];
        }
    }

// Passo 3. Compute a variação
    variacao = maior - menor;

// Passo 4. Imprima os resultados
    printf(" [%d,%d] ", idmax, maior);
    printf("[%d,%d] ", idmin, menor);
    printf("%d\n", variacao);

   return 0;

// pós: maximo && maximo == max i em {0,...,tam-1}: lista[i]
//      minimo && minimo == min i em {0,...,tam-1}: lista[i]
} // fim
