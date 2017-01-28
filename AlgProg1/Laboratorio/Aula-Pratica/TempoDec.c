    /* Tempo Decorrido */
#include <stdio.h>

int main (void) {
  unsigned
  int totalS,
      totalM,
      segs,
      mins,
      hors;
    printf("Total Segundos: ");
    scanf("%u", &totalS);
  segs = totalS % 60;
  totalM = totalS / 60;
  mins = totalM % 60;
  hors = totalM / 60;
   printf("%u Segundos eh igual a\n", totalS);
   printf("%u Horas, %u Minutos, %u Segundos\n",
          hors,mins,segs);
 return 0;
}
