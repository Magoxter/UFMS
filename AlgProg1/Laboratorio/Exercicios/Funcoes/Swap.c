// Programa: swap.c
// Programador: Willian Xavier
// Data: 19/09/16
// Programa para testar funções
// declaração das bibliotecas utilizadas
#include<stdio.h>

// declaração das funções
void swap(int*, int*);

// início da função principal
int main(void) {
// declaração das variáveis locais
int  a, b;

// pré: input == umInt1 umInt2

// Passo 1. Leia os dados
   scanf("%d %d", &a, &b);
// Passo 2. Troque o valor de a por b e b por a
   swap(&a, &b);
// Passo 3. Imprima os resultados
   printf("%d %d\n", a, b);

   return 0;

// pós: b a
} // fim da função principal

// Função: swap
// Programador:
// Data: 14/02/97
// O Diálogo: Esta função troca o valor de duas variáveis do tipo int
void swap(int* a, int* b) {
// declaração das variáveis locais
int aux;

// pós: output == a == UmInt2 && b == UmInt1
    aux = *a;
    *a = *b;
    *b = aux;

} // fim da função Swap
