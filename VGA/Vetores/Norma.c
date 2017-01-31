	/* Norma */
// Eeste Programa Computa a
// Norma de dado Vetor

#include <stdio.h>
#define MAX 1000

int main (void) {
  float v[MAX];
  int 	n,i,
  		norma;
  	n = 3;
   for (i = 0; i < n; i++)
   	 scanf("%f", &v[i]);
 	norma = v[0] * v[0] +
 			    v[1] * v[1] +
 			    v[2] * v[2] ;
  printf("Norma: Raiz de %d\n", norma);
 return 0;
}
