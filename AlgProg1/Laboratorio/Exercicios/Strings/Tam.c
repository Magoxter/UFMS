// Programa: tamanhom.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê uma palavra de tamanho máximo 49, calcula e imprime
// o tamanho de cada uma delas. O programa não faz uso da função strlen
// e o final da palavra é dado pelo caractere \0.

// Bibliotecas
    #include<stdio.h>

// Tipos da String
    typedef char String[50];

// início da função principal
    int main(void) {

// declaração das variáveis locais
    int    tam;        // tamanho da palavras
    String palavra;
    char   caractere;

// pré: UmaString && palavra == UmaString

// Passo 1 Leia uma palavra
    scanf ("%s", palavra);

// Passo 2. Compute o tamanho da palavra
// Passo 2.1. Inicialize a quantidade de caracteres
   tam = 0;

// Passo 2.2. Copie o primeiro caractere da palavra
   caractere = palavra[tam];

// Passo 2.3. Enquando não chegar no final da palavra faça
    while (caractere != '\0') {
// Passo 2.3.1. Conte o caractere tam
        tam++;
// Passo 2.3.2. Atribua a caractere o próximo caractere da palavra
      caractere = palavra[tam];
   } // fim while
// Passo 3. Imprima o tamanho da palavra
   printf("%d\n",tam);

   return 0;

// tam == número de caracteres da palavra
} // fim da função principal
