	/* Linearidade */
// Este Programa Computa a
// Linearidade entre 3Vetores

#include <stdio.h>
#define MAX 1000

int main (void) {
  int	n,i,
  		det;
  float	v[MAX],
      	u[MAX],
      	w[MAX];
     n = 3;
    printf("Vetor v: ");
  for (i = 0; i < n; i++)
     scanf("%f", &v[i]);
    printf("Vetor u: ");
  for (i = 0; i < n; i++)
     scanf("%f", &u[i]);
    printf("Vetor w: ");
  for (i = 0; i < n; i++)
     scanf("%f", &w[i]);
   det = (v[0]*u[1]*w[2]) +
 	 (v[1]*u[2]*w[0]) +
 	 (v[2]*u[0]*w[1]) -
 	 (v[2]*u[1]*w[0]) -
 	 (v[1]*u[0]*w[2]) -
 	 (v[0]*u[2]*w[1]) ;
   if (det == 0)
     printf("LD\n");
   else
     printf("LI\n");
 return 0;
}
