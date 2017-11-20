		/* HeapSort */
#include <stdio.h>
#define MX 100

void heapSort (int[],int);
void desce (int[],int,int);
void sobe (int[],int,int);
void heap (int[],int);

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
   heapSort(v,n);
  for (i = 0; i < n; i++)
  	printf("%d ", v[i]);
   printf("\n");
 }
 return 0;
}

void heapSort (int v[],int n) {
  int k,i;
  int pai;
  int filho;
   i = n /2;
 while (1) {
  if (i) {
   i--;
   k = v[i];
  } else {
      n--;
  if (!n)
    return;
   k = v[n];
   v[n] = v[0];
  } pai = i;
    filho = i *2 +1;
  while (filho < n) {
   if (filho + 1 < n  &&  v[filho +1] > v[filho])
     filho++;
   if (v[filho] > k) {
     v[pai] = v[filho];
     pai = filho;
     filho = pai *2 +1;
   } else
      break;
  } v[pai] = k;
 }
 return;
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

void troca (int *x,int *y) {
  int ax;
   ax = *y;
   *y = *x;
   *x = ax;
 return;
}
