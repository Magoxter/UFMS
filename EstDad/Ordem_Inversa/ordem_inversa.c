#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int id;
  struct _node *esq;
  struct _node *dir;
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

void in_order (tnode *pnode) {
 if (pnode != NULL) {
   in_order(pnode->dir);
   printf("%d ", pnode->id);
   in_order(pnode->esq);
 }
}

int main (void) {
  int r,x;

  tnode *tree;
  tree = NULL;

  scanf("%d", &r);
 while (r--) {
   scanf("%d", &x);
   insert(&tree,x);
 } in_order(tree);
   printf("\n");
 return 0;
}
