    /* Pillha */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int chave;
 struct node *prox;
} tnode;

void empilha (tnode *,int);
void demplha (tnode *);
void print   (tnode *);

int main (void) {
  tnode *p;
  int com;
  int num;
   p = (tnode *)malloc(sizeof(tnode));
   p->prox = NULL;
  scanf("%d", &com);
 while (com) {
  if (com == 1) {
    scanf("%d", &num);
   empilha(p,num);
  } else
  if (com == 2)
    demplha(p);
  else
  if (com == 3)
    print(p);
  scanf("%d", &com);
 }
 return 0;
}

void empilha (tnode *p, int x) {
  tnode *q;
   q = (tnode *)malloc(sizeof(tnode));
   q->chave = x;
   q->prox = p->prox;
   p->prox = q;
 return;
}

void demplha (tnode *p) {
  tnode *q;
 if (p->prox == NULL)
   printf("pilha vazia\n");
 else {
   q = p->prox;
   p->prox = q->prox;
  free(q);
 }
 return;
}

void print (tnode *p) {
 if (p->prox == NULL)
   printf("pilha vazia\n");
 else {
  while (p->prox != NULL) {
     p = p->prox;
    printf("%d ", p->chave); 
  } printf("\n");
 }
 return;
}
