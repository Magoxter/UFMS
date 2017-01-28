    /* Tempo_Segundos */
#include <stdio.h>

int main (void) {
  unsigned
  int hors,
      mins,
      segs,
      total;
    scanf("%u", &hors);
    scanf("%u", &mins);
    scanf("%u", &segs);
  total = segs +
          60*mins +
          60*60*hors;
   printf("%d\n", total);
 return 0;
}
