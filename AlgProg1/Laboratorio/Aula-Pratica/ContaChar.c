// Programa: contachar.c
// Programador: Willian Xavier
// Data: 27/07/2016
// Este programa lê uma palavra e um caracteres e conta o
// número de ocorrências do caractere (independente se for maiúsculo
// ou minúsculo) em cada uma das palavras e
//imprime o resultado.

// Declaração das bibliotecas utilizadas
    #include<stdio.h> // scanf, printf
    #include<string.h> // strlen

// declaração de tipos
    typedef char string[25];

// início da função principal
    int main(void) {

// Declaração das variáveis locais
    string palavra; //
    char   caractere;   // caractere a ser procurado
    int    tam;         // tamanho da palavra
    int    j;       // índice do caractere da palavra
    int    numero;      // numero de caracteres em cada palavra

// pré: UmaString && UmChar &&
//      UmaString == UmChar[0]...UmChar[m_j] &&
//      1 <= j <= K && 0 <= m_j <= m

// Passo 1. Leia a palavra
    printf("Leia uma palavra: ");
    scanf("%s", palavra);

// Passo 2. Leia o caractere c
    printf("Leia um caractere: ");
    scanf(" %c", &caractere);

// Passo 3. Compute o tamanho da string
    tam = strlen(palavra);

// Passo 4. Inicialize o número de caracteres e a posição inicial da palavra
    numero = 0;
    j = 0;

// Passo 5. Compute o número de caracteres que ocorrem na palavra
    while (j < tam) {

// Paso 5.1. Verifique se o caractere é igual a posição j da palavra
      j++;
   } // fim do while

// Passo 5. Imprima o número de caracteres c na palavra.
   printf("%d\n", numero);

   return 0;

// pós: numero == sum i em {1,...,n-1}: UmChar[i] == caractere
} // fim da função principal

