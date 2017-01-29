// Programa: inverte01.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê uma lista de tarefas, armazena numa pilha,
// computa um vetor para armazenar a lista desempilhada e
// imprime o resultado
// declaração das bibliotecas utilizadas
#include<stdio.h>
// declaração das constantes
#define TAMMAX 1000

// início da função principal
int main(void) {
// declaração das variáveis locais
int          pilha[TAMMAX], // armazena a pilha de tarefas
             desempilha[TAMMAX]; // armazena a lista desemplilhada
unsigned int tam;           // tamanho da pilha

// pré: tam,pilha[0],pilha[1],...,pilha[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
   //printf("Entre com o tamanho da lista: ");
   scanf("%u", &tam);
// Passo 1.2. Leia os elementos da lista
   //printf("Entre com os elementos da lista: ");
   for (int i = 0; i < tam; i++)
      scanf("%d", &pilha[i]);
// Passo 2. Desempilhe as tarefas
   int j = 0;
   for(int i = tam-1; i>=0; i--){
       desempilha[j] = pilha[i];
       j++;
   }
// Passo 3. Imprima as tarefas desempilhadas
   //printf("Lista desempilhada: ");
   for (int i = 0; i < tam; i++)
      printf("%d ", desempilha[i]);
   printf("\n");

   return 0;

// pós: desempilha[0],desempilha[1],...,desempilha[tam-1] && desempilha[i] == pilha[tam-i-1]
} // fim da função principal
