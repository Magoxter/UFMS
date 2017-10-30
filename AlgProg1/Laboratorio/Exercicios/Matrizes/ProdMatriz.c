/* Produto */

// Este Programa le 2 Matrizes e Computa seu Produto

// Biblioteca
    #include <stdio.h>
    #include <stdbool.h>

// Funcao Principal
    int main () {

// Variaveis
    int     matriz1[100][100],
            matriz2[100][100],
            produto[100][100],
            mult1,mult2,soma;
    int     linha1,coluna1,
            linha2,coluna2,
            linha3,coluna3,
            l,i,n,c,k,e,d;
    bool    prod;

// Dimensoes
    scanf ("%d", &linha1);
    scanf ("%d", &coluna1);

    for (l = 0; l < linha1; l++) {
        for (c = 0; c < coluna1; c++) {
             scanf ("%d", &matriz1[l][c]);
        }
    }

    scanf ("%d", &linha2);
    scanf ("%d", &coluna2);

    for (l = 0; l < linha2; l++) {
        for (c = 0; c < coluna2; c++) {
             scanf ("%d", &matriz2[l][c]);
        }
    }

// Dimensoes do Produto
    prod = false;

    if (coluna1 == linha2) {
        prod = true;
        linha3 = linha1;
        coluna3 = coluna2;
    }

// Produto
    for (l = 0; l < linha3; l++) {
        for (c = 0; c < coluna3; c++) {
             produto[l][c] = 0;
            for (k = 0; k < linha3; k++) {
                 produto[l][c] = produto[l][c] + (matriz1[l][k]*matriz2[k][c]);
            }
        }
    }

// Apresentacao
    if (prod) {
        for (l = 0; l < linha3; l++) {
            for (c = 0; c < coluna3; c++) {
                 printf ("%d ", produto[l][c]);
            }
          printf ("\n");
        }
    }

    else {
        printf ("produto não definido\n");
    }

    return 0;

    }
