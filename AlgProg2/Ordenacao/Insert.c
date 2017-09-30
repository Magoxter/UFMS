		/* Insertion */
#include <stdio.h>
#define MX 100

void insertion (int[],int);

int main (void) {
  int n,i,r;
  int v[MX];
   scanf("%d", &r);
 while (r--) {
 	 scanf("%d", &n);
 	for (i = 0; i < n; i++)
 		scanf("%d", &v[i]);
  for (i = 0; i < n; i++)
 		printf("%d ", v[i]);
 	 printf("\n");
 	insertion(v,n);
 	printf("\n");
 }
 return 0;
}

void insertion (int v[],int n) {
  int k,i;
  int num;
 for (i = 1; i < n; i++) {
 	 num = v[i];
 	 k = i -1;
 	while ((k >= 0) && (v[k] > num)) {
 	  v[k+1] = v[k];
 	 k--;
 	} v[k+1] = num;
 }
 return;
}
