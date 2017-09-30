		/* Josephus */
#include <stdio.h>

int Josephus (int,int);

int main (void) {
  int n,k,r;
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
   scanf("%d", &k);
  printf("%d\n", Josephus(n,k));
 }
 return 0;
}

int Josephus (int n, int k) {
 if (n == 1)
   return 1;
 else
   return (((Josephus(n-1,k) + k-1) %n) +1);
}
