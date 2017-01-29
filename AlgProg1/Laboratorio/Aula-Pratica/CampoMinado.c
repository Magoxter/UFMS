// Programa: campominado.c
// Programador: Willian Xavier
// Data: 10/09/2016
// Este programa lê um mini campo-minado composto de uma matriz, 4x4, 
// onde o número (0) indica espaços livres e o número (1) indica que 
// há uma bomba no local. O programa lê um número inteiro m de (pontos)
// tentativas, dados por linhas e colunas no campo-minado. O programa
// verifica se o ponto é uma bomba ou não. Caso seja, imprimir 1, senão 0.


// Biblioteca
    #include <stdio.h>

// Funcao Principal
    int main () {

// Variaveis
    int campo[4][4],
        linhas,colunas,
        l,i,n,c,k,x,y;

// Dimensoes do Campo
    linhas = 4;
    colunas = 4;

    for (l = 0; l < linhas; l++)
        for (c = 0; c < colunas; c++)
             scanf ("%d", &campo[l][c]);

// Laco
    scanf ("%d", &n);
    for (k = 0; k < n; k++) {

// Coordenadas
    scanf ("%d %d", &x, &y);

    if (campo[x-1][y-1] == 1)
        printf ("1\n");
    else
        printf ("0\n");

    }	 	  	  		  	 	      	       	 	

    return 0;

    }
