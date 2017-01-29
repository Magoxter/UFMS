    /* SoMatrizes */
// Programador: Willian Xavier
// Data: 01/09/16
// Este Programa Computa a Soma de 2 Matrizes Dadas

#include <stdio.h>

#define MAX 100

int main (void) {

// Variaveis
    int A[MAX][MAX],
        B[MAX][MAX],
        S[MAX][MAX];
    int linha,coluna,
        l,i,n,c,k,y;

// Leitura
    printf("Dimensoes das Matrizes...\n");
    printf("Linhas: ");
    scanf ("%d", &linha);
    printf("Colunas: ");
    scanf ("%d", &coluna);

    for (l = 0; l < linha; l++)
        for (c = 0; c < coluna; c++)
             scanf ("%d", &A[l][c]);

    for (l = 0; l < linha; l++)
        for (c = 0; c < coluna; c++)
             scanf ("%d", &B[l][c]);

// Soma das Matrizes
    for (l = 0; l < linha; l++)
        for (c = 0; c < coluna; c++)
             S[l][c] = A[l][c] + B[l][c];

// Apresentacao
    for (l = 0; l < linha; l++) {
        for (c = 0; c < coluna; c++)
             printf("%d ", S[l][c]);
        printf("\n");
    }

    return 0;
}
