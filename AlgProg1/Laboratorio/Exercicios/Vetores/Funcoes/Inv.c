// Programa: inverte.c
// Programador: Willian Xavier
// Data: 19/09/2016
// Este programa lê uma lista de tarefas, armazena numa pilha,
// computa um vetor para armazenar a lista desempilhada e
// imprime o resultado
// declaração das bibliotecas utilizadas
#include<stdio.h>
// declaração das constantes
#define TAMMAX 1000
// declaração das funções
void inverte(unsigned int, int [], int []);

// início da função principal
int main(void) {
int          pilha[TAMMAX], // armazena a pilha de tarefas
             lista[TAMMAX]; // armazena a lista desemplilhada
unsigned int tam;           // tamanho da pilha
unsigned int j;
int i, n;

// pré: tam,pilha[0],pilha[1],...,pilha[tam-1]

// Passo A. Leia o número de vetores
scanf("%d",&n);
// Passo B. Repita n vezes
for (i = 0; i < n; i++) {
// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
   printf("Entre com o tamanho da lista: ");
   scanf("%u", &tam);
// Passo 1.2. Leia os elementos da lista
   printf("Entre com os elementos da lista: ");
   for (j = 0; j < tam; j++)
      scanf("%d", &pilha[j]);
// Passo 2. Desempilhe as tarefas
   inverte(tam, pilha, lista);
// Passo 3. Imprima as tarefas desempilhadas
   printf("Lista desempilhada: ");
   for (j = 0; j < tam; j++)
      printf("%d ", lista[j]);
   printf("\n");
} // fim for i

   return 0;

// pós: lista[0],lista[1],...,lista[tam-1] && lista[i] == pilha[tam-i-1]
} // fim da função principal

// Função: inverte
// Programador:
// Data: 25/06/2013
// Esta função recebe um vetor (tamanho e elementos) e computa
// um novo vetor com os elementos na ordem inversa do vetor de entrada
void inverte(unsigned int tam, int pilha[], int lista[]) {
// declaração das variáveis locais
unsigned int i, j;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo i.1. Desempilhe o vetor pilha

   } // fim for

   return;

// pós: lista[0],lista[1],...,lista[tam-1] && lista[i] == pilha[tam-i-1]
} // fim função elementoMax
