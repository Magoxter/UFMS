// Programa: maxfator.c
// Programador Willian Xavier
// Data: 19/09/16
// Programa para testar funções
// declaração das bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h>

// declaração das funções
int maxfator(int);

// início da função principal
int main(void) {
// declaração das variáveis locais
int a;
int num;

// pré: UmInt1

// Passo 1. Leia os dados
   scanf("%d", &a);
// Passo 2. Compute o fator máximo de a
   num = maxfator(a);
// Passo 3. Imprima os resultados
   printf("%d %d\n", a, num);

   return 0;

// pós: num == max i em {2, 3, ..., a/2}: a%i == 0
} // fim da função principal

// Função: maxfator.c
// Programador:
// Data: 13/06/2013
// Esta função computa o divisor máximo de um inteiro
int maxfator(int a) {
// declaração das variáveis locais
    int num,i;

// pré: UmInt1

    dividendo = x;
 divisor = y;

 while ( z !=0 ){
 z = dividendo % divisor;
 dividendo = divisor;
 divisor = z;
 };

 mdc = dividendo;

    return mdc;

// pós: b == max i em {2, 3, ..., a/2}: a%i == 0
} // fim da função primorelativo
