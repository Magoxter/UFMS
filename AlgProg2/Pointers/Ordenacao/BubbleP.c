    /* Bubble Pointer */
#include <stdio.h>
#define MX 100

void bubble (int[],int);

int main (void) {
  int *p;
  int n,r;
  int v[MX];
   scanf("%d", &r);
 while (r--) {
 	 scanf("%d", &n);
  for (p = v; p < v+n; p++) {
    scanf("%d", p);
  } bubble(v,n);
 }
 return 0;
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
    int x;
     x = *p;
     *p = *q;
     *q = x;
    count++;
   }
 	}
 } printf("%d\n", count);
 return;
}
