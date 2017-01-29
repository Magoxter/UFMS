// Programa: soma.c
// Programador: Willian Xavier
// Data: 02/08/16
// Este programa lê dois vetores e e calcula a soma dos dois vetores.

// Bibliotecas
    #include<stdio.h> // print, scanf

// Constantes Globais
    #define TAM 100

// Funcao Principal
    int main(void) {

// declaração das variáveis locais
    int    vetor1[TAM], vetor2[TAM];
    int    soma[TAM];
    int    k;                       // tamanho do vetor

// Passo 1. Leia a entrada

// Passo 1.1. Leia o tamanho do vetor
    printf("Leia o tamanho do vetor: ");
    scanf("%d", &k);

// Passo 1.2. Leia o vetor1
    for (int i = 0; i < k; i++) {
        printf("Leia vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
   }

// Passo 1.3. Leia o vetor2
    for (int i = 0; i < k; i++) {
        printf("Leia vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
   }

// Passo 2. Calcule o vetor soma
    for (int i = 0; i < k; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

// Passo 3. Imprima o vetor soma
    for (int i = 0; i < k; i++) {
        printf ("%d ", soma[i]);
    }

   return 0;

} // fim da função principal
