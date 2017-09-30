	/* Somatorio */
#include <stdio.h>

int sum (int);

int main (void) {
  int n;
   scanf("%d", &n);
  printf("%d\n", sum(n));
 return 0;
}

int sum (int n) {
  if (!(n-1))
  	return n;
  else
  	return n+sum(n-1);
}
