    /* Sequencia Maxima */
// Este programa le uma Lista de Inteiros
// e retorna a maior Sequencia Crescente
// dentro dela

#include <stdio.h>

int main (void) {
  int atl;
  int nxt;
  int aux;
  int count;
   scanf("%d", &atl);
  aux = count = 1;
 while (scanf("%d", &nxt) != EOF) {
   if (nxt > atl)
     aux++;
   else
     aux = 1;
   if (aux > count)
     count = aux;
    atl = nxt;
 } printf("%d\n", count);
 return 0;
}
