    /* Heap */
#include <stdio.h>
#include <math.h>
#define MAX 10000

int main (void) {
  int n,i,k,
      cont,
      v[MAX];
    scanf("%d", &n);
   for (i = 0; i < n; i++)
     v[i] = i;
     printf("\n");
    k = 0;
    cont = 1;
   for (i = 0; i < n; i++) {
      printf("%d ", v[i]);
     if (cont < pow(2,k))
        cont++;
     else {
        printf("\n");
        cont = 1; k++;
     }
   } printf("\n");
 return 0;
}
