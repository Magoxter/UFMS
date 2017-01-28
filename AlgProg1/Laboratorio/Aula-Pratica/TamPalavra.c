    /* TamPalavra */
#include <stdio.h>
#include <string.h>
#define MAX 80

typedef char string[MAX];

int main (void) {
  int    tamPal;
  string palavra;
    scanf("%s", palavra);
  tamPal = strlen(palavra);
   printf("%d", tamPal);
 return 0;
}
