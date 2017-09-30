	/* Busca */
#include <stdio.h>
#define MX 100

void busca (int[],int,int);

int main (void) {
  int n,i,x ;
  int v[MX];
   scanf("%d", &n);
 for (i = 0; i < n; i++)
 	scanf("%d", &v[i]);
   scanf("%d", &x);
  busca(v,n,x);
 return 0;
}

void busca (int v[],int n,int x) {
  int i;
   i = 0;
 while (i < n && v[i] != x) {
  i++;
 } if (i == n)
     printf("N0\n");
  else
  	printf("%d\n", i);
 return;
}
