    /* Pontos */
#include <stdio.h>

void vetor (float[],float[]);

int main (void) {
  int   n,i,op;
  float pontoX[3],
        pontoY[3];
    n = 3;
     printf("Menu...\n");
     printf("1) Vetor Determinado por Pontos\n");
     printf("2) Soma de Ponto com Vetor\n");
     printf("3) Sair\n");
      scanf("%d", &menu);
    switch (menu) {
      case 1:
        vetor();
       break;
      case 2:
        somaPv();
       break;
    }
 return 0;
}

void vetor (float Y[3], float X[3]) {
  int   n,i,op;
  float pontoX,
        pontoY;
    n = 3;

   printf("Ponto X: ");
  for (i = 0; i < n; i++)
    scanf("%f", &pontoX[i]);
   printf("Ponto Y: ");
  for (i = 0; i < n; i++)
    scanf("%f", &pontoY[i]);
   printf("Vetor XY (1) ou Vetor YX (2): ");
    scanf("%d", &op);
      if (op == 1)
        vetor (pontoX,pontoY);
      else
        vetor (pontoY,pontoX);

   for (i = 0; i < n ; i++)
     printf("%.0f ", X[i] - Y[i]);
     printf("\n");
 return;
}
