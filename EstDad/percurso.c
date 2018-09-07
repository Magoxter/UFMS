#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef strut _reg {
  int id;
} treg;

typedef struct _node {
  treg *reg;
  struct _node *esq;
  struct _node *dir;
} tnode;

void destroi_arv (tnode *pnode) {
  if (pnode != NULL) {
    destroi_arv(pnode->esq);
    destroi_arv(pnode->dir);
    free(pnode);
  }
}

void desenha_arv (tnode *pnode,int prof) {
  int i;
 if (pnode != NULL) {
   desenha_arv(pnode->esq,prof+1);
  for (i = 0; i < prof; i++)
     printf("   ");
   printf("%d\n", pnode->reg.id);
 }
}

tnode * aloca_node(int id) {
  tnode *aux;
  aux = (tnode *) malloc(sizeof(tnode));
  aux->reg.id = id;
  aux->esq = NULL;
  aux->dir = NULL;
 return aux;
}

void pre_order (tnode *pnode) {
 if (pnode != NULL) {
   printf("%d ", pnode->reg.id);
   pre_order(pnode->esq);
   pre_order(pnode->dir);
 }
}

void in_order (tnode *pnode) {
 if (pnode != NULL) {
   in_order(pnode->esq);
   printf("%d ", pnode->reg.id);
   in_order(pnode->dir);
 }
 return 0;
}

void pos_order (tnode *pnode) {
  if (pnode != NULL) {
    pos_order(pnode->esq);
    pos_order(pnode->dir);
    printf("%d ", pnode->reg.id);
  }
}

int main (void) {
  tnode *arv;

  arv = aloca_node(20);
  arv-esq = aloca_node(10);
  arv-dir = aloca_node(30);

/*  arv->esq-> */
 return 0;
}
