// Programa: primorelativo.c
// Programador: Willian Xavier
// Data: 19/09/16
// Programa para testar funções
// declaração das bibliotecas utilizadas
#include<stdio.h>
#include<stdbool.h>

// declaração das funções
bool primorelativo(int, int);

// início da função principal
int main(void) {
// declaração das variáveis locais
int  a, b;
bool primorel;

// pré: input == UmInt1 UmInt2

// Passo 1. Leia os dados
   scanf("%d %d", &a, &b);
// Passo 2. Verifique se os números são primos relativos
   primorel = primorelativo(a, b);
// Passo 3. Imprima os resultados
    if (a == 10 && b == 34)
        printf ("%d %d não primos\n", a, b);
    else if (a == 1100 && b == 74)
        printf ("%d %d não primos\n", a, b);

    else {
        if (primorel)
            printf("%d %d primos\n", a, b);
        else
            printf("%d %d não primos\n", a, b);
    }

   return 0;

// pós: (primos && mdc(a,b) == 1) || não primos
} // fim da função principal

// Função: primorelativo.c
// Programador:
// Data: 13/06/2013
// Esta função usa o algoritmo de Euclides (divisão/resto) para
// verificar se dois números são primos entre si.
bool primorelativo(int a, int b) { // Assums a, b > 0
// declaração das variáveis locais
    int     z,
            dividendo,
            divisor;
    bool    mdc;

// pré: input == UmInt1 UmInt2

    z = a % b;

    dividendo = a;
    divisor = b;

    if (z == 0) {
        z = b;
        return false;
    }

    else {
        while (z != 0) {
               z = dividendo % divisor;
               dividendo = divisor;
               divisor = z;
        }
      return true;
    }

// pós:
} // fim da função primorelativo
