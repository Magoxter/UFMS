	/* Adicao */
// Este Programa Computa a Adicao 
// e a Imprime entre Vetores

#include <stdio.h>
#define MAX 1000

int main (void) {
  int n,i,
      v[MAX],
      u[MAX],
      add[MAX];
     n = 3;
    printf("Vetor v: ");
  for (i = 0; i < n; i++)
     scanf("%d", &v[i]);
    printf("Vetor u: ");
  for (i = 0; i < n; i++)
     scanf("%d", &u[i]);
  for (i = 0; i < n; i++)
    add[i] = v[i] + u[i];
  for (i = 0; i < n; i++)
  	printf("%d ", add[i]);
  	printf("\n");
 return 0;
}
