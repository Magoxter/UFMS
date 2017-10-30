	/* Azulejos */
#include <stdio.h>

int azul (int);

int main (void) {
  int n,r;
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
  printf("%d\n", azul(n+1));
 }
 return 0;
}

int azul (int n) {
 if (n < 3)
   return 1;
 else
   return azul(n-1) + azul(n-2);
}
