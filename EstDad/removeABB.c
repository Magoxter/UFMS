#include <stdio.h>
#include <stdlib.h>

typedef struct _reg {
  int id;	
} treg;

typedef struct _node {
   treg reg;
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

treg * Busca (tnode *pnode,treg reg) {
	treg * ret;

  if (pnode == NULL)
  	ret = NULL;
  else
  if (pnode->reg.id == reg.id)
  	ret = pnode;
  else {
  	if (pnode->reg.id < reg.id)
  		ret = Busca(&(*pnode->dir), reg);
  	else
  		ret = Busca(&(*pnode->esq), reg);
  }
 return ret;
}

tnode ** sucessor (tnode ** pnode) {
  tnode ** aux;
    aux = &((*pnode)->dir);
  while((*aux)->esq !=  NULL) {
    aux = &((*aux)->esq);
  }
  return aux;
}

void constroi_ABB (tnode ** pnode) {
	insert(&pnode,50);
	insert(&pnode,30);
	insert(&pnode,20);
	insert(&pnode,40);
	insert(&pnode,80);
	insert(&pnode,70);
	insert(&pnode,90);
 return;
}

void remove_Raiz(tnode ** pnode) {
  tnode * aux;
  tnode** paux;

/* to remove a node that could there four ocasions */
/* case 1 - the node has any nodes */
/* case 2 - the node has just a nodes to the left */
/* case 3 - the node has just a nodes to the right */
/* case 4 - the node has all nodes */

  aux = (*pnode);

  if ((*pnode)->esq == NULL) {
/* caso1 - nenhum filho */
    if ((*pnode)->dir == NULL)
      (*pnode) = NULL;
/* caso2 - filho a direita */
    else
        (*pnode) = (*pnode)->dir;
  } else {
/* caso3 - filho a esquerda */
      if ((*pnode)->dir == NULL)
        (*pnode) = (*pnode)->esq;
/* caso4 - todos os filhos */
      else {
          paux = sucessor(&(*pnode));
          (*pnode)->reg = (*paux)->reg;
          remove_Raiz(paux);
      }
  } free(aux);
 return;
}

int main (void) {
  tnode * arv;
  arv = NULL;

  constroi_ABB(&arv);
 return 0;
}