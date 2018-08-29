#include <stdio.h>
#include <stdlib.h>

typedef struct _reg {
    int flag;
    int tam;
    int i;
} treg;

typedef struct _node {
    int id;
  struct  _node *esq;
  struct  _node *dir;
} tnode;

tnode * aloca_node (int x) {
  tnode * aux;
   aux = (tnode *) malloc(sizeof(tnode));
   aux->id = x;
   aux->esq = NULL;
   aux->dir = NULL;
 return aux;
}

void insert (tnode **pnode,int x) {
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

void espelhamento (tnode ** pnode) {
  tnode * aux;
   aux = ((*pnode)->esq);
  (*pnode)->esq = (*pnode)->dir;
  (*pnode)->dir = aux;
 return;
}

void order (tnode ** pnode,treg ** reg) {
  if ((*pnode) == NULL)
    return;

  if ((*reg)->flag == 0) {
    (*reg)->i += 1;

    printf("%d", (*pnode)->id);

   if ((*reg)->i < (*reg)->tam)
     printf(" ");
  }

  order(&(*pnode)->esq,&(*reg));
  order(&(*pnode)->dir,&(*reg));

  if ((*reg)->flag == 1)
    espelhamento(&(*pnode));
}

int main (void) {
  int r,x;

  treg * reg;
  tnode * tree;

  tree = NULL;

  reg = (treg *) malloc(sizeof(treg));

  reg->i = 0;
  reg->flag = 1;

  scanf("%d", &r);

  reg->tam = r;

 while (r--) {
   scanf("%d", &x);
   insert(&tree,x);
 } order(&tree,&reg);

   reg->flag = 0;

   order(&tree,&reg);
   printf("\n");
 return 0;
}
