// Programa: transposta.c
// Programador: Willian Xavier
// Data: 01/09/16
// Matriz transposta, em matemática, é o resultado da troca de linhas por
// colunas em uma determinada matriz. Este programa lê um número inteiro
// n indicando a quantidade de matrizes, (com no máximo 100 linhas e
// 100 colunas < 100) em diversos formatos, lê as matrizes e computa e
// imprime a matriz transposta para cada uma dessas matrizes da entrada.

// Bibliotecas
    #include <stdio.h>

// Funcao Principal
    int main(void) {

// Variaveis
    int linhas,
        colunas,
        matriz[100][100],
        matrizT[100][100];
    int l,i,n,c,k;

// pré: m, n, para i em {0,...,m-1} &&
//      para j em {0,...,n-1}: A[i][j]

// Leitura
    scanf ("%d", &linhas);
    scanf ("%d", &colunas);

    for (l = 0; l < linhas; l++) {
        for (c = 0; c < colunas; c++) {
             scanf("%d", &matriz[l][c]);
        }
    }

// Transposicao da Matriz
    for (l = 0; l < linhas; l++) {
        for (c = 0; c < colunas; c++) {
             matrizT[c][l] = matriz[l][c];
        }
    }

// Apresentacao
    for (l = 0; l < colunas; l++) {
        for (c = 0; c < linhas; c++) {
         printf ("%d ", matrizT[l][c]);
        }
      printf ("\n");
    }

   return 0;

// pós: n, m, para j em {0,...,n-1} &&
//      para i em {0,...,m-1}: A[j][i]
} // fim da função principal
