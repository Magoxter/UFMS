	/* Mult - R*v */
// Este Programa Computa a Multiplicacao 
// de um Numero Real por um Vetor

#include <stdio.h>
#define MAX 1000

int main (void) {
  float real,
  		v[MAX];
  int 	n,i;
  	 n = 3;
   printf("Real: ");
  	scanf("%f", &real);
   printf("Vetor: ");
  for (i = 0; i < n; i++)
	scanf("%f", &v[i]);
  for (i = 0; i < n; i++)
  	 v[i] = v[i] * real;
  	printf("\n");
  for (i = 0; i < n; i++)
  	printf("%.0f ", v[i]);
  	printf("\n");
 return 0;
}
