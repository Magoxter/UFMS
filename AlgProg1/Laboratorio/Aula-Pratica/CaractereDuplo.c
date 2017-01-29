// Programa: caractereduploe.c
// Programador: Willian Xavier
// Data: 15/07/2016
// O Diálogo:  Escreva um programa que conte todas as ocorrências de duas
// letras seguidas em uma dada frase de um texto lido de um arquivo. O
// programa deve ser executado para n frase. Uma frase é um conjunto
// caracteres num dado idioma e que é finalizada por um ponto (.)
// (podem ocorrer .´s sem que isso signifique o final da frase,
// exemplo 1.8 Mhz). Nos idiomas utilizados não existem palavras
// com a ocorrência de três caracteres consecutivos iguais e na frase
// não existem dois caracteres branco consecutivos.

// Declaração das bibliotecas utilizadas
    #include<stdio.h> // scanf, printf

// início da função principal
    int main(void) {

// Declaração das variáveis locais
    char   caractere, // caractere lido
           anterior;  // caractere anterior na palavra
    int    numero;    // numero de caracters duplos na frase
    int    i, n;      // número de nomes

// pré: UmaFrase1 == UmaString[1] UmaString[2] ... UmaString[K] &&
//      UmaString[j] == UmChar[1]...UmChar[m_j] &&
//      1 <= j <= K && 1 <= m_j <= m

// Passo 1. Inicialize o número de caracteres duplos e o anterior
        numero = 0;
        anterior = ' ';

// Passo 2. Leia a frase (leia todos os caracteres até o . final)
        caractere = getchar();

    while (!(anterior == '.' && (caractere == '\n' || caractere == ' '))) {
        anterior = caractere;
        caractere = getchar ();

    if (anterior == caractere)
        numero = numero + 1;

} // fim for

// Passo 3. Imprima o número de caracteres duplos na frase.
    printf ("%d\n", numero);

   return 0;

// pós: numero == sum i em {1,...,n-1}: UmChar[i] == UmChar[i+1]
} // fim da função principal
