    /* Receita */
#include <stdio.h>

int main (void) {
  unsigned
  int   instalacoes,
        metrosCabo;
  float tarifaServico,
        custoMetro,
        receita;
    scanf("%f", &tarifaServico);
    scanf("%f", &custoMetro);
    scanf("%d", &instalacoes);
    scanf("%d", &metrosCabo);
  receita = instalacoes * tarifaServico
          + custoMetro * metrosCabo;
   printf("%f\n", receita);
 return 0;
}
