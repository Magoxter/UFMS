// Programa: alfabetica.c
// Programador: Willian Xavier
// Data: 23/06/2011
#include<stdio.h>
#include<stdbool.h>
// declaração das constantes globais
#define MAX 100
// declaração das funções
//bool linha(char u[MAX+1]);
//bool coluna(int m, char A[MAX][MAX+1], int j);
bool linha(char []);
bool coluna(int, char[][MAX+1], int);


// início da função principal
int main(void) {
// declaração das variáveis locais
char A[MAX][MAX+1];
int  k, m, n;
bool lin, col;

// pré:

// Passo A. Leia o número de casos teste
scanf("%d", &k);
for (int p = 0; p < k; p++) {
// Passo 1. Leia a dimensão da matriz
   scanf("%d%d", &m, &n);
// Passo 2. Leia a matriz
   for (int i = 0; i < m; i++)
      scanf("%s", A[i]);

     /* for (i = 0; i < m; i++){
        for(int j=0; j < n; j++){
            scanf("%c", &A[i][j]);
        }
      }*/
// Passo 3. Compute se a matriz é linha alfabética
   lin = true;
   for (int i = 0; i < m && lin; i++)
      lin = linha(A[i]); // a matriz é armazenada por linha
// Passo 4. Compute se a matriz é coluna alfabética
   col = true;
   for (int j = 0; j < n && col; j++)
      col = coluna(m, A, j);
// Passo 5. Classifique a matriz e imprima o resultado
   if (lin && col)
      printf("T\n");
   else if (lin)
      printf("L\n");
   else if (col)
      printf("C\n");
   else
      printf("N\n");
} // fim for p

  return 0;

// pós:
} // fim da função principal

// Função: linha.c
// Programador:
// Data: 23/06/2011
// Recebe uma cadeia de caracteres u e devolve 1 se os caracteres
// estão dispostos em ordem crescente e 0 em caso contrário
bool linha(char u[MAX+1]) {

// pré:

// Passo l.1. compute se a matriz é linha alfabética
    for(int j = 0; u[j+1] != '\0'; j++){
        if(u[j] >= u[j+1]){
            return false;
        }
    }

    return true;
// pós:
} // fim da função linha

// Função: coluna.c
// Programador:
// Data: 23/06/2011
// Recebe um número inteiro m > 0, uma matriz A de caracteres com m
// linhas e um índice j de uma coluna de A, e devolve true  se os
// caracteres da coluna j estão dispostos em ordem crescente e false em
// caso contrário
bool coluna(int m, char A[MAX][MAX+1], int j) {

// pré:

// Passo c.1. compute se a matriz é coluna alfabética
    for(int i = 0; i < m-1; i++){
        if(A[i][j] >= A[i+1][j]){
            return false;
        }
    }
// pós:
return true;
} // fim da função coluna
