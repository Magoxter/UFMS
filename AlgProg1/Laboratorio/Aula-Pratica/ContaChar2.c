// Programa: contachar.c
// Programador: Willian Xavier
// Data: 27/06/2016
// Este programa lê uma palavra e dois caracteres e conta o
// número de ocorrências dos caracteres (independente se for maiúsculo
// ou minúsculo) na palavras e imprime o resultado.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<string.h> // strlen

// declaração de tipos
typedef char string[25];

// início da função principal
int main(void) {
// Declaração das variáveis locais
string palavra; //
char   caractere1;   // caractere1 a ser procurado
char   caractere2;   // caractere2 a ser procurado
int    tam;         // tamanho da palavra
int    j;       // índice do caractere da palavra
int    numero;      // numero de caracteres em cada palavra

// pré: UmaString && UmChar &&
//      UmaString == UmChar[0]...UmChar[m_j] &&
//      1 <= j <= K && 0 <= m_j <= m

// Passo 1. Leia a entrada
// Passo 1.1. Leia uma palavra
   printf("Leia uma palavra: ");
   scanf("%s", palavra);

// Passo 1.2. Leia o caractere c1
   printf("Leia um caractere: ");
   scanf(" %c", &caractere1);

// Passo 1.3 Leia o caractere c
   printf("Leia um caractere: ");
   scanf(" %c", &caractere1);

// Passo 2. Compute o tamanho da string
   tam = strlen(palavra);

// Passo 3. Inicialize o número de caracteres e a posição inicial da palavra
   numero = 0;
   j = 0;

// Passo 5. Compute o número de caracteres que ocorrem na palavra
   while (j < tam) {

// Passo 5.1. Verifique se o caractere1 ou o caractere2 é igual a posição j da palavra
        if (caractere1 || caractere2 == palavra[j])
            numero++;
        j++;
   } // fim do while
// Passo 5. Imprima o número de caracteres c na palavra.
   printf("%d\n", numero);

   return 0;

// pós: numero == sum i em {1,...,n-1}: UmChar[i] == (caractere1 || caractere2)
} // fim da função principal
