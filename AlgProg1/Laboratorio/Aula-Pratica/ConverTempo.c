    /* ConverTempo */
#include <stdio.h>

int main (void) {
  int total,
      segs,
      mins,
      hors;
    scanf("%d", &total);
  segs = total % 60;
  mins = (total/60) % 60;
  hors = (total/60) / 60;
   printf("%d:%d:%d\n", hors,mins,segs);
 return 0;
}
