    /* Caractere */
#include <stdio.h>
#define MAX 80

typedef char string[MAX];

int main (void) {
  char   letra;
  string palavra;
    scanf("%s", palavra);
  letra = palavra[0];
   printf("%c\n", letra);
 return 0;
}
