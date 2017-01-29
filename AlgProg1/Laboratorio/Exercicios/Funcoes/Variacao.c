// Programa: variacao.c
// Programador: Willian Xavier
// Data: 06/09/16
// Este programa lê dois números inteiros e calcula e imprime o intervalo
// de variação entre eles

// Bibliotecas
    #include<stdio.h>  // scanf, printf
    #include<stdlib.h> // abs

// declaração das funções
    int variacao(int, int);

// início da função principal
    int main(void) {

// Declaração das Variáveis locais
    int num1, num2,    // num1, num2
        var;           // intervalo de variação

// pré: UmInt1 UmInt2 && UmInt1 == num1 && UmInt2 == num2

// Passo 1. Leia dois números inteiros
   printf("Leia dois inteiros: ");
   scanf("%d %d", &num1, &num2);

// Passo 2 – Calcule o intervalo de variação
   var = variacao(num1, num2);

// Passo 3 - Imprima a Soma
   printf("%d\n", var);

   return 0;

// pós: var = |num1 - num2|
} // fim da função principal

// Função: variacao.c
// Programador:
// Data: 13/06/2013
// Esta função computa a variação entre numero1 e numero2

// Funcao
    int variacao(int numero1, int numero2) {

// Variaveis
    int varia;

// pré: numero1 numero2

// Computacao da Variacao entre o Maior e o Menor Numero
    varia = abs(numero1 - numero2);

    return varia;

// pós: varia = |numero1 - numero2|
} // fim da função variação
