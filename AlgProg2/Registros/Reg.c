		/* Registros */
#include <stdio.h>
#include <stdlib.h>
#define MX 50

typedef struct no {
   int  identif;
   char nome[MX];
  struct no *prox;
} tno;
	/* tno eh o nome da Struct */

int main (void) {
  struct no aluno1;
  struct no aluno2;

   aluno1.identif = 1;
   aluno2.identif = 2;

// Aluno1 aponta para um Terceiro Elemento
  aluno1.prox = (tno *)malloc(sizeof(tno));
// Aluno2 aponta para um Quarto Elemento
  aluno2.prox = (tno *)malloc(sizeof(tno));

 printf("Aluno1 %p\n", &aluno1);
 printf("Aluno2 %p\n", &aluno2);
 printf("Pont3  %p\n", aluno1.prox);
 printf("Pont4  %p\n", aluno2.prox);

// Terceiro Elemento eh identificado
  aluno1.prox->identif = 3;
// Terceiro Elemento aponta para o Segundo Elemento (aluno2)
  aluno1.prox->prox = &aluno2;
// Quarto Elemento eh identificado
  aluno2.prox->identif = 4;
// Quarto Elemento aponta para o Primeiro Elemento (aluno1)
  aluno2.prox->prox = &aluno1;

 printf("\n");

 printf("End Aluno1  %p\n", &aluno1);
 printf("End Aluno2  %p\n", &aluno2);
 printf("Aluno1.prox %p\n", aluno1.prox);
 printf("Aluno2.prox %p\n", aluno2.prox);
/* EU TO COMPLETAMENTE PERDIDO
 printf("Aluno1 %d\n", aluno1.idade);
 printf("Aluno2 %d\n", (*aluno1.prox).idade);
 printf("Aluno2 %d\n", aluno1.prox->idade);
  // (*p).idade = p->idade */
 return 0;
}
