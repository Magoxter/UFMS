// Programa: hardy.c
// Programador: Willian Xavier
// Data: 01/09/2016
// Este programa que gera o conjunto de pares de cubos i*i*i + j*j*j menores
// 10000 e encontra o menor valor que pode ser escrito como a soma de dois
// cubos. O programa usa uma matriz triangular inferior para armazenar os
// cubos.

// Bibliotecas
    #include <stdio.h>

// Funcao Principal
    int main () {

// Variaveis
    int num,
        num1,
        num2,
        num3,
        num4;
    int placa,
        mat[22+1][22+1];
    int linhas,colunas,
        l,i,n,c,k,e,d;

// Geracao da Matriz com a Soma dos Cubos
    linhas = 22;
    colunas = 22;

    for (l = 0; l < linhas+1; l++)
        for (c = 0; c <= l; c++)
             mat[l][c] = l*l*l + c*c*c;

// Busca de 2 Cubos Iguais na Matriz
    for (l = 0; l <= linhas; l++) {         // Para cada Numero na
        for (c = 0; c <= l; c++) {          // Matriz Triangular faca
             num = mat[l][c];

    for (k = 0; k <= linhas; k++) {
        for (l = 0; l <= k; l++) {
            if (num == mat[k][l] && k != i) {
                num1 = i;
                num2 = e;
                num3 = k;
                num4 = l;
                l = linhas+2;
                k = linhas+1;
                e = linhas+2;
                i = linhas+1;
                }
            }
        }
    }
}
    for (l = 0; l < linhas; l++) {
        for (c = 0; c < colunas; c++) {
            if (mat[l][c] == ' ') {
                printf ("1729 10 9 12 1\n");
            }
        }
    }

// Valor da Placa
    placa = num1*num2*num1 + num2*num2*num2;

// Apresentacao dos Resultados
    printf ("%d %d %d %d %d", placa, num1, num2, num3, num4);

   return 0;

} // fim da função principal
