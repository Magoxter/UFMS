	/* Linearidade */
// Este Programa Computa a
// Linearidade de 1Vetor

#include <stdio.h>
#define MAX 1000

int main (void) {
  int	n,i;
  float	v[MAX];
     n = 3;
    printf("Vetor v: ");
  for (i = 0; i < n; i++)
     scanf("%f", &v[i]);
   if (v[0] == 0 &&
       v[1] == 0 &&
       v[2] == 0)
   	  printf("LD\n");
   else
  	  printf("LI\n");
 return 0;
}
