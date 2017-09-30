    /* Ringue */
#include <stdio.h>
#define MX 100

int primo (int,int);
void adjacente (int[],int,int);
void troca (int*,int*);

int main (void) {
  int n,i,r;
  int v[MX];
   scanf("%d", &r);
 while (r--) {
 	 scanf("%d", &n);
 	for (i = 0; i < n; i++)
 		v[i] = i +1;
 	adjacente(v,n,0);
 }
 return 0;
}

void adjacente (int v[],int n,int p) {
  int x,i,y;
 if (p == n-1) {
 	for (i = 0; i <= p; i++) {
 		printf("%d ", v[i]);
 	} printf("\n\n");
 } else {
 	    x = v[p];
 	  for (i = p+1; i < n; i++) {
 	  	 y = v[i];
 	  	if (primo(x,y)) {
 	  		troca(&v[i],&v[p+1]);
 	  	 adjacente(v,n,p+1);
 	  	}
 	  }
 }
 return;
}

int primo (int x, int y) {
	int num,k;
	int primo;
	 num = x + y;
	 primo = 1;
	 k = 2;
 while (primo && k <= num/2) {
 	if (!(num %k))
 		primo = 0;
 	k++;
 } if (primo)
    return 1;
 else
 	 return 0;
}

void troca (int *x, int *y) {
  int ax;
   ax = *y;
   *y = *x;
   *x = ax;
 return;
}
