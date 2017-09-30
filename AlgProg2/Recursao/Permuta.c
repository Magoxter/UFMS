	/* Permutacao */
#include <stdio.h>
#define MAX 10

void permuta (int[],int,int,int,int*);
void troca	 (int*,int*);

int main (void) {
  int n,i,r,c,k;
  int vet[MAX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
   scanf("%d", &k);
  for (i = 0; i < n; i++)
  	vet[i] = i +1;
   c = 0;
  permuta(vet,n,0,k,&c);
 }
 return 0;
}

void permuta (int v[MAX],int n,int j,int k,int *c) {
  int i;
 if (j == n-1) {
 	 *c = *c +1;
 	if (!(*c-k)) {
 	 for (i = 0; i < n; i++)
 	 	 printf("%d", v[i]);
 	 	printf("\n");
 	}
 } else {
 	for (i = j; i < n; i++) {
 	  troca(&v[i],&v[j]);
 	 permuta(v,n,j+1,k,c);
 	  troca(&v[i],&v[j]);
 	}
 }
 return;
}

void troca (int *x, int *y) {
  int ax;
   ax = *x;
   *x = *y;
   *y = ax;
 return;
}
