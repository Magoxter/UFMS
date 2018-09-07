#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int reg;
 struct _node *esq;
 struct _node *dir;
} tnode;

tnode * aloca_node (int x) {
  tnode * aux;
   aux = (tnode *) malloc(sizeof(tnode));
   aux->reg = x;
   aux->esq = NULL;
   aux->dir = NULL;
 return aux;
}

void insert (tnode **pnode,int x) {
  tnode *atl;
  tnode *pai;

  pai = NULL;
  atl = *pnode;

 while (atl != NULL) {
    pai = atl;
  if (atl->reg < x)
    atl = atl->dir;
  else
    atl = atl->esq;
 }

 if (pai == NULL) {
   *pnode = aloca_node(x);
 } else {
     if (pai->reg < x)
       pai->dir = aloca_node(x);
     else
       pai->esq = aloca_node(x);
 }
 return;
}

void insert (tnode **pnode, int x) {
  if ((*pnode) == NULL) {
    *pnode = aloca_node(x);
  } else {
  	  if ((*pnode)->reg < x)
  	  	insert(&(*pnode)->dir,x);
  	  else
  	  	insert(&(*pnode)->esq,x);
  }
 return;
}

int main (void) {
  tnode *raiz;
  raiz = NULL;

  insert(&raiz,50);
  insert(&raiz,80);
  insert(&raiz,30);
  insert(&raiz,10);
  insert(&raiz,40);
  insert(&raiz,70);
  insert(&raiz,90);
/*
 while (scanf("%d", &x) != EOF) {
  insert(&raiz,x);
 }*/
 return 0;
}