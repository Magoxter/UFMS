// Programa: ehmaior.c
// Programador: Willian Xavier
// Data: 06/09/2016
// Este programa lê um conjunto de números, verifica se o primeiro elemento
// é o maior elemento da lista e imprime true/false. O programa usa uma função
// ehMaior para verificar se o primeior elemento é o maior da lista
// Bibliotecas Utilizadas
#include<stdio.h>   // printf, scanf
#include<stdbool.h> // true, false
// declaração das constantes
#define MAX 1000
// declaração das funções
bool ehMaior(int lista[], int tam);

// início da função principal
int main(void) {
// Declaração das variáveis locais
int  lista[MAX]; // lista de elementos
int  tam;        // tamanho da lista
bool primeiro;   // primeiro elemento da lista
int  j;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
   printf("Entre com o tamanho da lista: ");
   scanf("%d", &tam);
// Passo 1.2. Leia os elementos da lista
   printf("Entre com os elementos da lista: ");
   for (j = 0; j < tam; j++)
      scanf("%d", &lista[j]);
// Passo 2. Compute o maior elemento da lista
   primeiro = ehMaior(lista, tam);
// Passo 3. - Imprima os resultados
   if (primeiro)
      printf("true\n");
   else
      printf("false\n");

   return 0;

// pós: (MSG1 && lista[0] == max i em {0,...,tam-1}: lista[i] &&
//       lista[0] > lista[j], j em {1,2,...,tam-1}) || MSG2
} // fim

// Função: elementoMax
// Programador:
// Data: 25/06/2013
// Esta função recebe um vetor (tamanho e elementos) e computa
// o elemento máximo do vetor e verifica se o primeiro é o máximo
bool ehMaior(int lista[], int tam) {
// declaração das variáveis locais
int     maximo;
bool    maior;


// Passo eM.1. Inicialize o índice máximo
    maximo = lista[0];
    maior = true;
// Passo eM.2. Compute o maior índice do elemento máximo da lista
    for (int i = 1; i < tam; i++) {
        if (maximo <= lista[i]) {
            maior = false;
            i = tam;
        }
    }

    return maior;

// pós: (true && lista[0] == max i em {0,...,tam-1}: lista[i] &&
//       lista[0] > lista[j], j em {1,...,tam-1}) || false
} // fim função ehMaior
