    /* Bubble Pointer */
#include <stdio.h>
#define MX 100

void bubble_R (int[],int);
void bubble (int[],int);
void troca (int*,int*);

int main (void) {
  int *p;
  int *q;
  int n,r;
  int v[MX];
  int x[MX];
   scanf("%d", &r);
 while (r--) {
 	 scanf("%d", &n);
    q = x;
  for (p = v; p < v+n; p++) {
    scanf("%d", p);
    *q = *p; q++;
  } bubble(v,n);
  for (q = x; q < x+n; q++)
    printf("%d ", *q);
   printf("\n");
  printf("bub: ");
  for (p = v; p < v+n; p++)
    printf("%d ", *p);
   printf("\n");
    bubble_R(x,n);
  printf("rec: ");
  for (q = x; q < x+n; q++)
    printf("%d ", *q);
   printf("\n");
   printf("\n");
 }
 return 0;
}

void bubble_R (int v[],int n) {
  int *p;
  int *q;
 if (n == 1)
   return;
 for (p = v; p < v+n-1; p++) {
   q = p +1;
  if (*q < *p)
    troca(p,q);
 } bubble_R(v,n-1);
 return;
}

void bubble (int v[],int n) {
  int k;
  int *p;
  int *q;
  int count;
   count = 0;
   k = n;
 while (k--) {
 	for (p = v+1; p < v+n; p++) {
 		q = p -1;
 	 if (*p < *q) {
     troca(p,q);
    count++;
   }
 	}
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
