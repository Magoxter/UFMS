    /* Area Perimetro */
#include <stdio.h>

int main (void) {
  float lado,
        perim,
        area;
    scanf("%f", &lado);
  perim = 4 * lado;
  area = lado * lado;
   printf("%.2f\n", perim);
   printf("%.2f\n", area);
 return 0;
}
