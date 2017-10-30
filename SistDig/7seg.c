    /* Freq - 7seg */
// Em um Display cada Numero eh Representado
// por 7 Segmentos. Dessa Maneira, cada numero possui
// r representacoes Numericas no Display.
// Dado valor inteiro n de Numeros a serem Representados
// este Programa Computa e Imprime a Frequencia com que
// cada Segmento eh Acionado.
// Sendo a Ordem dos Displays segundo o Programa Logisim.
#include <stdio.h>
#define MAX 100

void continua (int,int[][MAX],int);

int main (void) {
  int l,i,n,c,
      cont,k,
      linhas,
      colunas,
      seg[MAX][MAX];
    printf("Qtd de Num a serem Representados: ");
     scanf("%d", &n);
    printf("*Caso maior que 10 sera Representado por Letras\n");
    printf("\n");
      linhas = 10;
      colunas = 7;
    for (l = 0; l <= n; l++)
     for (c = 0; c < colunas; c++)
        seg[l][c] = -1;
    for (l = 0; l < linhas; l++) {
      printf("%d - ", l);
      c = 0;
     while (seg[l][c] != 0) {
        c++;
       scanf("%d", &seg[l][c]);
     }
    } continua(10,seg,n);
    for (l = 0; l < linhas; l++) {
       printf("%d - ", l);
     for (c = 0; c < colunas; c++)
        printf("%d ", seg[l][c]);
        printf("\n");
    }
   printf("\nFrequencia... \n");
    cont = 0;
  for (k = 1; k <= 7; k++) {
   for (l = 0; l < linhas; l++)
    for (c = 0; c < colunas; c++)
      if (seg[l][c] == k)
        cont++;
    printf("Seg-%.1d - %2d/%d\n", k, cont, n);
    cont = 0;
  }
 return 0;
}

void continua (int ctrl,int seg [MAX][MAX],int n) {
  int i,c;
    if (ctrl == n+1)
      return;
     printf("%c - ", ctrl+55);
    c = 0;
 while (seg[ctrl][c] != 0) {
    c++;
   scanf ("%d", &seg[ctrl][c]);
 }
 return continua(ctrl+1,seg,n);
}
