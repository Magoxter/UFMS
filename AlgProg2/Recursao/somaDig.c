	/* SomaDig */
#include <stdio.h>

int somaDig (int);

int main (void) {
  int n,r;
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
  printf("%d\n", somaDig(n));
 }
 return 0;
}

int somaDig (int n) {
  int sum;
   sum = 0;
 if (n < 10)
   sum += n;
 else
   sum += n % 10 + somaDig(n/10);
 return sum;
}
