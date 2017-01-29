// Programa: soma.c
// Programador: Willian Xavier
// Data: 03/06/2016
// O Diálogo: Este programa lê dois números inteiros calcula a soma
// dos dois números e imprime os resultados.

// Declaração das biliotecas utilizadas
#include<stdio.h> // scanf, printf

// início da função principal
int main(void) {
// Declaração das Variáveis Locais
int numero1;   // primeiro numero
int numero2;   // segundo número
int soma;   // soma dos número

// pré: UmInt1, UmInt2

// Passo 1. Leia os dois números
   printf("Leia os dois números: ");
   scanf ("%d", &numero1);
   scanf ("%d", &numero2);

// Passo 2. Calcule a soma
    soma = numero1 + numero2;

// Passo 3. Imprima a soma
   printf("%d + %d = %d\n", numero1, numero2, soma);

   return 0;

// pós: soma == numero1 + numero2
} // fim da função principal
