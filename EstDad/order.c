#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
   int reg;
  struct _node *esq;
  struct _node *dir;
} tnode;

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
   
pos_order (tnode *pnode) {
 if (pnode != NULL) {
   pos_order(pnode->esq);
   pos_order(pnode->dir);
   printf("%d ", pnode->reg.id);
 }
}

/*
   pre - O - pos
         |
         in
*/