		/* Matrix Pointer */
#include "stdio.h"
#define MX 100

int main (void) {
  int r,*p,*q;
  int lin,col;
  int v[MX][MX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &lin);
   scanf("%d", &col);
  for (p = v; p <= v+lin; p++)
   for (q = p; q <= p+col; q++)
    scanf("%d", q);
  for (p = v; p <= v+lin; p++) {
   for (q = p; q <= p+col; q++)
  	printf("%d ", *q);
   printf("\n");
  } printf("\n");
 }
 return 0;
}
