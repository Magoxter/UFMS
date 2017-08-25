	/* Euclides */
#include <stdio.h>

int Algrithm (int,int);

int main (void) {
  int n,r,k;
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
   scanf("%d", &k);
  printf("%d\n", Algrithm(n,k));
 }
 return 0;
}

int Algrithm (int a, int b) {
  int mdc,r;
   r = a % b;
 if (!r)
   mdc = b;
 else
   mdc = Algrithm(b,a%b);
 return mdc;
}
