/* Posicao Letra */

// Este Programa Le uma Palavra e Separa a Letra de uma
// Posicao dada.

// Bibliotecas
    #include <stdio.h>
    #include <string.h>

// Tipo String
    typedef char string [80];

// Funcao Principal
    int main (void) {

// Variaveis
    char palavra[80];
    char letra;
    int  posicao;

// Leitura
    printf("Digite a Palavra: ");
    scanf ("%s", palavra);

    printf("Qual o Numero da Posicao que Deseja Obter a Letra.?! ");
    scanf ("%i", &posicao);

// Algoritmo
    letra = palavra[posicao-1];

// Apresentacao
    printf("A %i Letra da Palavra %s eh Exatamente %c\n", posicao, palavra, letra);

    return 0;

    }
