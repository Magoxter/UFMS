		/* Bubble */
#include <stdio.h>
#define MX 100

void bubble_R (int[],int);
void bubble (int[],int);
void troca (int*,int*);

int main (void) {
  int n,i,r;
  int v[MX];
  int x[MX];
   scanf("%d", &r);
 while (r--) {
 	 scanf("%d", &n);
 	for (i = 0; i < n; i++) {
 		scanf("%d", &v[i]);
 	  x[i] = v[i];
 	} bubble(v,n);
 	 printf("\nBubble:\n");
 	for (i = 0; i < n; i++)
 		printf("%d ", v[i]);
   printf("\n");
    bubble_R(x,n);
   printf("\nRecursive:\n");
 	for (i = 0; i < n; i++)
 		printf("%d ", x[i]);
   printf("\n");
 }
 return 0;
}

void bubble_R (int v[],int n) {
  int k,i;
 if (n) {
 	for (i = 0; i < n; i++) {
 		k = i+1;
 	 if (v[i] < v[k])
 	 	 troca(&v[k],&v[i]);
 	} bubble_R(v,n-1);
 }
 return;
}

void bubble (int v[],int n) {
  int k,i;
 while (n--) {
 	for (i = 0; i < n; i++) {
 		k = i +1;
 	 if (v[k] < v[i])
 	 	 troca(&v[k],&v[i]);
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
