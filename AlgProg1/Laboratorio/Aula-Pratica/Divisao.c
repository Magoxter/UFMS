// Programa: divisao.c
// Programador: Willian Xavier
// Data: 03/06/2016
// O Diálogo: Este programa lê dois números inteiros calcula o quociente
// e o resto da divisão entre os dois números e imprime os resultados.
// Declaração das biliotecas utilizadas
#include<stdio.h> // scanf, printf

// início da função principal
int main(void) {
// Declaração das Variáveis Locais
int intDividendo; // dividendo
int intDivisor;   // divisor
int intQuo;       // quociente
int intResto;     // resto

// pré: UmInt1, UmInt2

// Passo 1. Leia o dividendo e o divisor
    printf("Leia o dividendo e o divisor:")
    scanf ("%d", &intDividendo);
    scanf ("%d", &intDivisor);

// Passo 2.1. Calcule o quociente
    intQuo = intDividendo / intDivisor;

// Passo 2.2. Calcule o resto
    intResto = intDividendo % intDivisor;

// Passo 3. Imprima o quociente e o resto
   printf("%d / %d = %d\n", intDividendo, intDivisor, intQuo);
   printf("%d %% %d = %d\n", intDividendo, intDivisor, intResto);

   return 0;

// pós: intQuo == intDividendo/intDivisor && intResto == intDividendo % intResto
} // fim da função principal
