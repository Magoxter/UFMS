    /* Lista Encadeada */
      /* com Cabeca */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int chave;
 struct node *prox;
} tnode;

void insereI (tnode *,int);
void insereF (tnode *,int);
void removeI (tnode *);
void removeF (tnode *);
void print   (tnode *);

int main (void) {
	int com,x;
  tnode *p;
   p = (tnode *)malloc(sizeof(tnode));
   p->prox = NULL;
 printf("MENU...\n");
 printf("1 - Insere Inicio\n");
 printf("2 - Insere Final\n");
 printf("3 - Remove Inicio\n");
 printf("4 - Remove Final\n");
 printf("5 - Apresenta\n");
 printf("6 - Sair\n");
 printf("\n");
  scanf("%d", &com);
 while (com) {
  switch(com) {
  	case 1:
  	 scanf("%d", &x);
   insereI(p,x);
    break;
   case 2:
    scanf("%d", &x);
   insereF(p,x);
    break;
   case 3:
  	removeI(p);
  	 break;
   case 4:
   removeF(p);
    break;
   case 5:
   print(p);
    break;
   default:
    break;
  }
  scanf("%d", &com);
 }
 return 0;
}

void insereI (tnode *p,int x) {
  tnode *aux;
   aux = (tnode *)malloc(sizeof(tnode));
   aux->chave = x;
   aux->prox = p->prox;
   p->prox = aux;
 return;
}

void insereF (tnode *p,int x) {
	tnode *aux;
 while (p->prox != NULL)
 	  p = p->prox;
  aux = (tnode *)malloc(sizeof(tnode));
  p->prox = aux;
  aux->chave = x;
  aux->prox = NULL;
 return;
}

void removeI (tnode *p) {
  tnode *aux;
 if (p->prox == NULL)
   printf("lista vazia\n");
 else {
   aux = p;
   p = p->prox;
  free(aux);
 }
 return;
}

void removeF (tnode *p) {
  tnode *aux;
 if (p->prox == NULL)
   printf("lista vazia\n");
 else {
   aux = p;
  while (aux->prox != NULL)
    aux = aux->prox;
  while (p->prox != aux)
    p = p->prox;
   p->prox = aux->prox;
  free(aux);
 }
 return;
}

void print (tnode *p) {
 if (p->prox == NULL)
   printf("lista vazia\n");
 else {
  while (p->prox != NULL) {
    p = p->prox;
   printf("%d ", p->chave);
  } printf("\n");
 }
 return;
}
