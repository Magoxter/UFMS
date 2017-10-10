		/* Heap */
#include <stdio.h>
#define MX 100

void heap (int[],int);
void desce (int[],int,int);
void sobe (int[],int,int);

void print (int[],int);

int raix (int,int);
void troca (int*,int*);

int pai (int);
int esq (int);
int dir (int);

int main (void) {
  int n,i,r;
  int v[MX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
   heap(v,n);
   print(v,n);
 }
 return 0;
}

void desce (int v[],int n,int i) {
  int d,e;
  int max;
   d = dir(i);
   e = esq(i);
   max = i;
  if (d < n && v[d] > v[max])
    max = d;
  if (e < n && v[e] > v[max])
    max = e;
 if (max != i) {
   troca(&v[max],&v[i]);
   desce(v,n,max);
 }
 return;
}

void sobe (int v[],int n,int i) {
 while (v[pai(i)] < v[i]) {
   troca(&v[pai(i)],&v[i]);
  i = pai(i);
 }
 return;
}

int pai (int i) {
 if (!i)
   return i;
 else
   return (i -1) /2;
}

int esq (int i) {
 return (2 *i) +1;
}

int dir (int i) {
 return (2 *i) +2;
}

void heap (int v[],int n) {
  int i;
   i = pai(n-1);
 while (i >= 0) {
   desce(v,n,i);
  i--;
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

void print (int v[],int n) {
  int k,i;
  int cont;
   k = 0;
   cont = 1;
 for (i = 0; i < n; i++) {
   printf("%d ", v[i]);
  if (cont < raix(2,k))
    cont++;
  else {
    printf("\n");
   cont = 1; k++;
  }
 } printf("\n");
 return;
}

int raix (int n,int x) {
  int raiz;
   raiz = 1;
 while (x--)
   raiz *= n;
 return raiz;
}
