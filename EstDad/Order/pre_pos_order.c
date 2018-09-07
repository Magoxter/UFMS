#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int id;
  struct _node *esq;
  struct _node *dir;
} tnode;

tnode * aloca_node(int x) {
  tnode *aux;
  aux = (tnode *) malloc(sizeof(tnode));
  aux->id = x;
  aux->esq = NULL;
  aux->dir = NULL;
 return aux;
}

void pos_order (tnode *pnode) {
  if (pnode != NULL) {
    pos_order(pnode->esq);
    pos_order(pnode->dir);
    printf("%d\n", pnode->id);
  }
}

void insert (tnode **pnode, int x) {
  if ((*pnode) == NULL) {
    *pnode = aloca_node(x);
  } else {
      if ((*pnode)->id < x)
        insert(&(*pnode)->dir,x);
      else
        insert(&(*pnode)->esq,x);
  }
 return;
}

int main (void) {
  int x;

  tnode * arv;
  arv = NULL;

 while (scanf("%d", &x) != EOF) {
   insert(&arv,x);
 } pos_order(arv);
 return 0;
}
