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

void destroi_arvore (tnode ** pnode) {
  destroi_arvore(&(*pnode)->esq);
  destroi_arvore(&(*pnode)->dir);
  free((*pnode));
  free((*pnode)->esq);
  free((*pnode)->dir);
/* professor eu nao sei se me esqueci
 * de como se limpa um registro ou o
 * que mas meu codigo esta dando
 * segmentation fault por conta desta função
 * como acredito que essa seja uma duvida
 * corriqueira e facil de ser sanada
 * entao envio o code mesmo assim,
 * espero que considere
 */
 return;
}

int main (void) {
  int n,i,r,x;

  scanf("%d", &r);
 while (r--) {
  tnode * arv;
  arv = NULL;

   scanf("%d", &n);
  for (i = 0; i < n; i++) {
  	scanf("%d",&x);
  	insert(&arv,x);
  } printf("%d\n", prof(&arv));
    destroi_arvore(&arv);
    arv = NULL;
 }
 return 0;
}
