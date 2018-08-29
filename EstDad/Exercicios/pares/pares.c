#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int id;
  struct _node *esq;
  struct _node *dir;
} tnode;

tnode * aloca_node(int id) {
  tnode *aux;
  aux = (tnode *) malloc(sizeof(tnode));
  aux->id = id;
  aux->esq = NULL;
  aux->dir = NULL;
 return aux;
}

int prof (tnode ** pnode) {
  int pe;
  int pd;

  if ((*pnode) == NULL ||
     ((*pnode)->esq == NULL &&
      (*pnode)->dir == NULL))
      return 0;
    pe = prof(&(*pnode)->esq) +1;
    pd = prof(&(*pnode)->dir) +1;
  if (pe > pd)
    return pe;
  else
    return pd;
}

void desenha_arv (tnode *pnode,int prof) {
  int i;
 if (pnode != NULL) {
   desenha_arv(pnode->esq,prof+1);
  for (i = 0; i < prof; i++)
     printf("   ");
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

void print (tnode ** pnode) {
  if ((*pnode) == NULL)
    return;
  printf("%d ", (*pnode)->id);
  print(&(*pnode)->esq);
  print(&(*pnode)->dir);
}

int main (void) {
  int r,x;

  tnode * imp;
  tnode * par;
  tnode * tree;

  imp = NULL;
  par = NULL;

  tree = aloca_node(0);
  tree->esq = par;
  tree->dir = imp;

  scanf("%d", &r);
 while (r--) {
   scanf("%d", &x);
  if (x %2)
    insert(&imp,x);
  else
    insert(&par,x);
 } print(&par);
   printf("\n");
   print(&imp);
   printf("\n");
/* pode ser que de erro por conta
 * do balanceamento das arvores tanto
 * impar quanto par
 */
 return 0;
}