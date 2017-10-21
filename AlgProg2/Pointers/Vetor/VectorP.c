		/* Vector Pointer */
#include "stdio.h"
#define MX 100

int main (void) {
  int n,r,*p;
  int v[MX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
  for (p = v; p < v+n; p++)
    scanf("%d", p);
  for (p = v; p < v+n; p++)
  	printf("%d ", *p);
   printf("\n");
 }
 return 0;
}
