		/* Selection Pointer */
#include <stdio.h>
#define MX 100

void troca (int*,int*);
void selection (int[],int);
void selection_R (int[],int,int*);

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
  } selection(v,n);
  for (q = x; q < x+n; q++)
    printf("%d ", *q);
   printf("\n");
  printf("select: ");
  for (p = v; p < v+n; p++)
    printf("%d ", *p);
   printf("\n"); p = x;
    selection_R(x,n,p);
  printf("recurs: ");
  for (q = x; q < x+n; q++)
    printf("%d ", *q);
   printf("\n");
   printf("\n");
 }
 return 0;
}

void selection_R (int v[],int n,int *p) {
  int *q;
  int *max;
 if (p == v+n)
 	 return;
 	  max = p;
 for (q = p; q < v+n; q++)
 	if (*q < *max)
 		max = q;
 if (max != p)
 	 troca(p,max);
 	selection_R(v,n,p+1);
 return;
}

void selection (int v[],int n) {
  int *p;
  int *q;
  int *max;
 for (p = v; p < v+n-1; p++) {
   max = p;
  for (q = p; q < v+n; q++)
  	if (*q < *max)
  	  max = q;
  if (max != p)
  	troca(p,max);
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
