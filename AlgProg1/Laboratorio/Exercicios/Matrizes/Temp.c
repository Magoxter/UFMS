// Programa: temperatura02.c
// Programador: Willian Xavier
// Data: 01/09/16
// Este programa lê um conjunto de temperaturas lidas em determinados locais
// durante os dias da semana, computa e imprime a temperatura média em
// cada um dos locais. As medidas são tomadas diariamente, em
// determinados horários e em determinados locais.

// Bibliotecas
    #include <stdio.h>

// Funcao Principal
    int main(void) {

// Variaveis
    double  temp[4][3],         // 4 Leituras em 3 Locais
            tempT[3][4],
            media[3],soma;
    int     linhas = 4,
            colunas = 3,
            l,i,n,c,k;

// pré: tempo, local, para i em {0,...,tempo-1} &&
//      para j em {0,...,local-1}: tabelaTemp[i][j]

// Leitura
    for (l = 0; l < 4; l++)
        for (c = 0; c < 3; c++)
             scanf("%lf", &temp[l][c]);

// Transpor a Matriz
    for (l = 0; l < 4; l++)
    for (c = 0; c < 3; c++)
         tempT[l][c] = temp[c][l];

// Calculo das Medias
    for (l = 0; l < 3; l++) {
         soma = 0.0;
        for (c = 0; c < 4; c++) {
             soma = soma + tempT[i][c];
        }
      media[l] = soma / 4.0;
    }

// Apresentacao
    for (l = 0; l < 3; l++) {
         printf ("%d  %f\n", l+1, media[l]);
    }

   return 0;

// pós: para j em {0,...,local-1}:tempMed[j] && tempMed[j] == soma
//      j em {0,...,tempo-1}:tabelaTemp[i][j]
} // fim da função principal
