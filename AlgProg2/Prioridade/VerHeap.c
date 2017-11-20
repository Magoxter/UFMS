		/* Heap n-aria */
#include <stdio.h>
#define MX 100

int verifica (int[],int,int);
int pai (int,int);

int main (void) {
  int f,i,n;
  int v[MX];
   scanf("%d", &f);
 while (f) {
   scanf("%d", &n);
  for (i = 0; i < n; i++)
  	scanf("%d", &v[i]);
  if (verifica(v,n,f))
  	printf("sim\n");
  else
  	printf("nao\n");
  scanf("%d", &f);
 }
 return 0;
}

int verifica (int v[],int n,int f) {
  int p,i;
  int ok;
   i = n -1;
 while (i) {
   p = pai(i,f);
  if (v[p] < v[i])
  	ok = 1;
  else
  	return 0;
  i--;
 }
 return ok;
} 

int pai (int i,int f) {
 return (i -1) /f;
}
