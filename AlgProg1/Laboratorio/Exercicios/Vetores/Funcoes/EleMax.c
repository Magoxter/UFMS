// Programa: elementomax.c
// Programador: Willian Xavier
// Data: 06/09/2016
// Este programa lê um conjunto de número, calcula o maior número
// e imprime o resultado. O programa usa uma função elementomax
// para computar o maior número da lista

// Bibliotecas
#include<stdio.h> // printf, scanf
// Constantes
#define MAX 1000

// início da função principal
int main(void) {

int elementomax(int tam, int lista[MAX]);

// Declaração das variáveis locais
int maximo,     // maior elemento da lista
    tam,
    lista[MAX];
int j;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista

// Passo 1.1. Leia o tamanho da lista
   printf("Entre com o tamanho da lista: ");
   scanf("%d", &tam);

// Passo 1.2. Leia os elementos da lista
   printf("Entre com os elementos da lista: ");
   for (j = 0; j < tam; j++)
      scanf("%d", &lista[j]);

// Passo 2. Compute o maior elemento da lista (chamada da função)
    maximo = elementomax(tam, lista[tam]);

// Passo 3. - Imprima os resultados
   printf("%d\n", maximo);

   return 0;

// pós: maximo && maximo == max i em {0,...,tam-1:: lista[i]
} // fim

// Função: elementoMax
// Programador:
// Data: 25/06/2013
// Esta função recebe um vetor (tamanho e elementos) e computa
// o elemento máximo do vetor

    int elementomax(int tam, int lista[tam]) {

// declaração das variáveis locais
    int maior;

// Verificar cada Elemento do Vetor e Compara-lo
    maior = lista[0];

    for (int i = 1; i < tam; i++)
        if (lista[i] > maior)
            maior = lista[i];

// pré: tam,lista[0],lista[1],...,lista[tam-1]

    return maximo;

// pós: maximo && maximo == max i em {0,...,tam-1:: lista[i]
} // fim função elementoMax
