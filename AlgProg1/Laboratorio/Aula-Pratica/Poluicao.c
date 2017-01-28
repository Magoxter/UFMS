    /* Poluicao */
#include <stdio.h>
#include <string.h>
#define MAX 80

typedef char string[MAX];

int main (void) {
  unsigned
  int    leitura1,
         leitura2,
         leitura3,
         linhaCorte;
  float  soma,
         indice;
  string mensagem;
    scanf("%d", &leitura1);
    scanf("%d", &leitura2);
    scanf("%d", &leitura3);
    scanf("%d", &linhaCorte);
  soma = leitura1
       + leitura2
       + leitura3;
  indice = soma / 3.0;
    if (indice < linhaCorte)
      strcpy(mensagem,"Condicao Segura");
    else
      strcpy(mensagem,"Condicao Perigosa");
   printf("%s\n", mensagem);
 return 0;
}
