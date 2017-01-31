	/* Linearidade */
// Este Programa Computa a
// Linearidade entre Vetores

#include <stdio.h>
#define MAX 1000

int main (void) {
  int	n,i;
  float	lamb,
      	v[MAX],
      	u[MAX];
     n = 3;
    printf("Vetor v: ");
  for (i = 0; i < n; i++)
     scanf("%f", &v[i]);
    printf("Vetor u: ");
  for (i = 0; i < n; i++)
     scanf("%f", &u[i]);
    lamb = v[0]/u[0];
   if (v[1]/u[1] == lamb &&
       v[2]/u[2] == lamb)
     printf("LD\n");
   else
     printf("LI\n");
 return 0;
}
