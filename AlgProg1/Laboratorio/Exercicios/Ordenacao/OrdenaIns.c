// Programa: ordenains.c
// Programador:
// Data: 16/09/2016
// Este algoritmo lê uma lista de tam elementos e ordena os elementos
// da lista em ordem não decrescente usando o algoritmo do insertion sort
// Declaração das bibliotecas utilizadas
#include <stdio.h>
#define MAX 1024
// Declaração das funções
void insertionsortf(int [], int);

// Início da função principal
int main (void){
// Declaração das variáveis
int lista[MAX];
int tam;
int n;
scanf("%d", &n);
for(int l = 0; l < n; l++){

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
   scanf("%d", &tam);
// Passo 1.2. Leia os elementos da lista
   for(int i = 0; i < tam; i++){
    scanf("%d", &lista[i]);
   }
// Passo 2. Ordene a lista
   insertionsortf(lista, tam);
// Passo 3. Imprima a lista
   for(int i = 0; i < tam; i++) {
    printf("%d ", lista[i]);
   }
   printf("\n");

}
return 0;
}

// Implementação das funções
// Função: insertionsortf.c
// Programador:
// Esta função ordena uma lista em ordem não decrescente usando
// o método do insertion sort
void insertionsortf(int lista[], int tam) {
// declaração das variáveis
int aux;
int pos;

// Passo i.1. Inicialize a posição do primeiro elemento
   pos = 0;
// Passo i.2. Verifique se os elementos a[1].. a[tam-1] estão em ordem
   for(int j = 1; j < tam; j++){
// Passo i.2.1. Coloque a[j] na posição correta
   pos = j - 1;
// Passo i.2.2. Percorra a lista movendo os elementos maiores para a direita
   while(lista[pos+1] < lista[pos] && pos >= 0) {
    aux = lista[pos];
    lista[pos] = lista[pos+1];
    lista[pos+1] = aux;
    pos--;
   } // fim while
   } // fim for
return;
} // fim da função
