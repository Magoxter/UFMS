// Programa: maiormenor.c
// Programador: Willian Xavier
// Data: 19/09/2016
// Este programa lê um conjunto de números, calcula o maior, o
// menor número e a variação entre eles e imprime o resultado.
// O programa usa a função maiormenor para computar o maior,
// o menor número da lista.
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf
// declaração das constantes
#define MAX 1000
// declaração das funções
void maiormenor(int, int, int, int);

// início da função principal
int main(void) {
// Declaração das variáveis locais
int lista[MAX], // lista de elementos
    maximo,     // maior elemento da lista
    minimo,     // mínimo elemento da lista
    idmax,      // índice do elemento máximo
    idmin,      // índice do elemento mínimo
    variacao,   // variação
    tam;        // tamanho da lista
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
// Passo 2. Compute o maior e o menor elemento da lista
    idmax = 0;
    idmin = 0;
   maiormenor(tam,lista[MAX],idmax,idmin);
// Passo 3. Compute a variação
   maximo = lista[idmax];
   minimo = lista[idmin];
   variacao = maximo - minimo;
// Passo 4. Imprima os resultados
   printf("[%d,%d] ", idmax, maximo);
   printf("[%d,%d] ", idmin, minimo);
   printf("%d\n", variacao);

   return 0;

// pós: maximo && maximo == max i em {0,...,tam-1}: lista[i]
//      minimo && minimo == min i em {0,...,tam-1}: lista[i]
} // fim

// Função: maiormenor
// Programador:
// Data: 25/06/2013
// Esta função recebe uma lista (tamanho e elementos) e computa
// os índices dos elementos máximo e mínimo da lista
void maiormenor(int tam,int lista[MAX], int idmax, int idmin) {
// declaração das variáveis locais
    int maior;
    int menor;
    int i;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo eM.1. Inicilalize o máximo e o mínimo
    maior = 1;
    menor = 99;
// Passo eM.2. Compute os índices dos elementos máximo e mínimo da lista
    for (i = 0; i < tam; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
            idmax = i;
        }
        else if (lista[i] < menor)
                 menor = lista[i];
                 idmin = i;
    }

   return;

// pós: *idmax && *idmax == i | max i em {0,...,tam-1}: lista[i]
//      *idmin && *idmin == i | min i em {0,...,tam-1}: lista[i]
} // fim função maior
