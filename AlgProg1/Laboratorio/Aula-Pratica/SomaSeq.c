// Programa: somasequencia01.c
// Programador: Willian Xavier
// Data: 15/07/2016
// Este algoritmo calcula a soma da sequência dos num termos da
// sequência S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

// Biblioteca
    #include<stdio.h>   // printf

// início da função principal
    int main(void){

// declaração das variáveis locais
    float soma, termo;
    int   numerador, denominador;
    int   num, i;

// pré: UmInt

// Passo 1. Leia o número de termos e inicialize a soma
// Passo 1.1. Leia o número de termos
    // printf("Entre com o número de termos: ");
    scanf ("%d", &num);

// Passo 1.2. Inicialize a soma
    soma = 0.0;

// Passo 2. Compute o primeiro numerador e denominador
    numerador = 1;
    denominador = 1;
    termo = numerador / denominador;

// Passo 2.2 Calcule os primeiros num termos da soma
    for (i = 1; i <= num; i++) {

// Passo 2.1. Compute o termo
    termo = numerador / denominador;

// Passo 2.2. adicione termo a soma
    soma = soma + termo;

// Passo 2.3. Calcule o próximo numerador
    numerador = numerador + 2;

// Passo 2.4. Calcule o próximo denominador
    denominador = denominador + 1;

// Passo 2.5. Calculo do Proximo Termo
    termo = (double) numerador / (double) denominador;

    }

// Passo 3. Imprima o valor da soma
   printf("%f\n", soma);

   return 0;

// pós: soma == Soma i em {1,...,50}: termo[i] &&
//      termo[i] == 2*i – 1/i
} // fim da função principal
