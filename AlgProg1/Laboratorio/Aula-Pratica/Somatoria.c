    /* Somatoria */
#include <stdio.h>

int main (void) {
  unsigned
  int ultimoNumero,
      contador,soma;
    scanf("%u", &ultimoNumero);
   contador = 1;
   soma = 0;
  while (contador <= ultimoNumero) {
    soma += contador;
    contador++;
  }
   printf("%u", soma);
 return 0;
}
