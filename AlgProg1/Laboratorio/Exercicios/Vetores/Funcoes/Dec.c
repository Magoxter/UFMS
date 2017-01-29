// Programa: decrescente.c
// Programador: Willian Xavier
// Data: 19/09/2016
// Este programa lê uma lista de números verifica se os números
// da lista estão em ordem decrescente e imprime o resultado.
// O programa usa a função verifiqueOrdem para verificar se a
// lista está em ordem decrescente.
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf
#include<stdbool.h> // true, false
// declaração das constantes
#define MAX 1000
// declaração das funções
bool verifiqueOrdem(int, int* []);

// início da função principal
int main(void) {
// Declaração das variáveis locais
int  lista[MAX]; // lista de elementos
int  tam;        // tamanho da lista
bool decrescente; // informa se a lista está em ordem decrescente
int  j;
int i, n;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
//   printf("Entre com o tamanho da lista: ");
   scanf("%d", &tam);
// Passo 1.2. Leia os elementos da lista
//   printf("Entre com os elementos da lista: ");
   for (j = 0; j < tam; j++)
      scanf("%d", &lista[j]);
// Passo 2. Compute o maior e o menor elemento da lista
    decrescente = verifiqueOrdem(tam,lista[MAX]);
// Passo 3. Imprima os resultados
   if (decrescente)
      printf("true\n");
   else
      printf("false\n");

   return 0;

// pós: true && para i em {0,...,tam-2}: lista[i] > lista[i+1] ||
//      false
} // fim

// Função: verificaOrdem
// Programador:
// Data: 25/06/2013
// Esta função recebe uma lista (tamanho e elementos) e verifica
// se a lista está em ordem crescente
bool verificaOrdem(int tam, int lista[MAX]) {

// declaração das variáveis locais
    int     maior,idmax,i,
            atual,proximo;
    bool    decresc;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo vO.1. Inicilalize ordem
    maior = 1;

    for (i = 0; i < tam; i++) {
         atual = lista[i];
         proximo = lista[i+1];

        if (atual > proximo)
            decresc = true;

// Passo vO.2. Verifique se a lista está em ordem decrescente
        else
            decresc = false;
    }

    return decresc;

// pós: true && para i em {0,...,tam-2}: lista[i] > lista[i+1] ||
//      false
} // fim função verificaOrdem
