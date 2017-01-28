    /* Soma */
#include <stdio.h>

int main (void) {
  int   nota1,
        nota2,
        nota3,
        soma;
  float media;
    scanf("%d", nota1);
    scanf("%d", nota2);
    scanf("%d", nota3);
  soma = nota1+nota2+nota3;
  media = soma / 3.0;
   printf("%.1f\n", media);
 return 0;
}
