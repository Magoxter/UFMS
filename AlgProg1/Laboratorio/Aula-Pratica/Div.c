    /* Divindade */
#include <stdio.h>

int main (void) {
  int resto,
      divisor,
      dividendo,
      quociente;
    scanf("%d", &dividendo);
    scanf("%d", &divisor);
  if (divisor != 0) {
    quociente = dividendo / divisor;
    resto = dividendo % divisor;
     printf("%d\n", quociente);
     printf("%d\n", resto);  }
  else
    printf("Impossivel Calcular\n");
 return 0;
}
