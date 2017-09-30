		/* Busca */
#include <stdio.h>
#define MX 100

void troca (int*,int*);
void ordena (int[],int);
int buscaBin (int[],int,int,int);

int main (void) {
  int n,i,x;
  int v[MX];
   scanf("%d", &n);
 for (i = 0; i < n; i++) {
 	 scanf("%d", &v[i]);
 } scanf("%d", &x);
 	ordena(v,n);
 if (buscaBin(v,0,n,x) != -1) {
 	for (i = 0; i < n; i++) {
 	 if (i == buscaBin(v,0,n,x))
 	 	 printf("X ");
 	 else
 	 	 printf("%d ", v[i]);
 	} printf("\n");
 } else
 	   printf("ERR0R\n");
 return 0;
}

int buscaBin (int v[],int e,int d,int x) {
  int m;
   m = (e + d) /2;
 if (v[m] == x)
 	 return m;
 if (e >= d)
 	 return -1;
 else {
 	if (v[m] < x)
 		return buscaBin(v,m,d,x);
 	else
 		return buscaBin(v,e,m,x);
 }
}

void ordena (int v[],int n) {
  int min;
  int k,i;
 for (i = 0; i < n-1; i++) {
 	 min = i;
 	for (k = i+1; k < n; k++)
 	 if (v[k] < v[min])
 	 	 min = k;
 	if (min != i)
 		troca(&v[min],&v[i]);
 }
 return;
}

void troca (int *x,int *y) {
  int ax;
   ax = *y;
   *y = *x;
   *x = ax;
 return;
}
