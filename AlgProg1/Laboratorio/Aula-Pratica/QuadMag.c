// Programa: quadmagico.c
// Programador: Willian Xavier
// Data: 10/09/2016
// Este programa lê uma matriz quadrada e verifica se possui somas
// constantes. Ou seja, se a soma das linhas, colunas e diagonais principal
// e secundária tem o mesmo valor.

// Bibliotecas
    #include<stdio.h>
    #include<stdbool.h>

// início da função principal
    int main(void) {

// declaração das variáveis locais
    int mat[10][10];
    int m, n;
    int linhas, colunas;
    int diagonalp, diagonals;
    bool quadmag;

// Passo 1. Leia a matriz
// Passo 1.1. Leia as dimensões da matriz
    scanf("%d %d", &m, &n);
// Passo 1.2. Leia os elementos da matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

// Passo 3. Compute a soma das linhas e colunas
    for (int i = 0; i < m; i++) {           // fixei linha/coluna
        linhas = 0;
        colunas = 0;
        quadmag = true;
        for (int j = 0; j < m; j++) {       // para os elementos da coluna/linha
            linhas = linhas + mat[i][j];
            colunas = colunas + mat[j][i];
        }
// Passo 3.1. Verifique se as somas são iguais
        if (linhas != colunas) {
            quadmag = false;
            i = 2*m; // sair do laço i
        }
    }

// Passo 4. Verifique a soma das diagonais se as linhas e colunas são iguais
    if (quadmag) {
        diagonalp = 0;
        diagonals = 0;
// Passo 4.1. Compute a soma da diagonal principal
        for (int i = 0; i < m; i++) {
            diagonalp = diagonalp + mat[i][i];
        }
// Passo 4.2. Compute a soma da diagonal secundária
        for (int i = n-1, j = 0; i >= 0, j < n; i--, j++) {
            diagonals = diagonals + mat[i][j];
        }
// Passo 4.3. Verifique se as somas são iguais
        if (diagonalp != linhas || diagonals != linhas)
            quadmag = false;
    }

// Passo 5. Imprima a mensagem
    if (!quadmag)
        printf("0\n");
    else
        printf("1\n");

   return 0;

} // fim da função principal
