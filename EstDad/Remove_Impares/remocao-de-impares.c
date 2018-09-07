#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int reg;
  struct _node *esq;
  struct _node *dir;
} tnode;

void print (tnode * pnode,int p){
  int i;

  if (pnode != NULL){
    print(pnode->dir, p+1);

    i = p;

   while (i--)
      printf("   ");
    printf("%d\n",pnode->reg);
    print(pnode->esq, p+1);
   }
}

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

tnode ** sucessor (tnode ** pnode) {
  tnode  * aux;
  tnode ** paux;
   aux = (*pnode)->dir;
   paux = &(*pnode)->dir;
  while(aux->esq !=  NULL) {
    paux = &(aux->esq);
    aux = aux->esq;
  }
  return paux;
}

tnode ** search (tnode ** pnode,int reg) {
  tnode ** ret;

  if ((*pnode) == NULL)
    ret = NULL;
  else
  if ((*pnode)->reg == reg)
    ret = pnode;
  else {
    if ((*pnode)->reg < reg)
      ret = search(&((*pnode)->dir), reg);
    else
      ret = search(&((*pnode)->esq), reg);
  }
 return ret;
}

void remove_raiz (tnode ** pnode) {
  tnode * aux;
  tnode** paux;

/* caso1 - nenhum filho */
  if ((*pnode)->esq == NULL &&
      (*pnode)->dir == NULL) {
    aux = (*pnode);
    (*pnode) = NULL;
    free(aux);
  } else
/* caso2 - filho a esquerda */
  if ((*pnode)->esq != NULL &&
      (*pnode)->dir == NULL) {
    aux = (*pnode);
    (*pnode) = (*pnode)->esq;
    free(aux);
  } else
/* caso3 - filho a direita */
  if ((*pnode)->esq == NULL &&
      (*pnode)->dir != NULL) {
    aux = (*pnode);
    (*pnode) = (*pnode)->dir;
    free(aux);
  } else {
/* caso4 - todos os filhos */
      paux = sucessor(pnode);
      (*pnode)->reg = (*paux)->reg;
      remove_raiz(paux);
  }
 return;
}

int remove_node (tnode ** pnode,int reg) {
  tnode ** paux;

  int ret = 0;

  paux = search(pnode,reg);

  if (paux != NULL) {
    ret = 1;
    remove_raiz(paux);
  }
 return ret;
}

void pre_order (tnode ** pnode) {
  printf("%d ", (*pnode)->reg);
  pre_order(&(*pnode)->esq);
  pre_order(&(*pnode)->dir);
 return;
}

void clear_tree (tnode ** pnode) {
  int x = (*pnode)->reg;
 
 if ((*pnode) == NULL)
   return;

 if (x %2) {
  if (remove_node(pnode,(*pnode)->reg))
    printf("removido %d\n", x);
 }

 clear_tree(&(*pnode)->esq);
 clear_tree(&(*pnode)->dir);

 return;
}

int main (void) {
  int n,x;

  tnode * raiz;
  raiz = NULL;

#ifdef DEBUG
  freopen("in","r",stdin);
#endif

  scanf("%d", &n);
 while (n--) {
   scanf("%d", &x);
   insert(&raiz,x);
   printf("%d ", x);
 } printf("\n");
   clear_tree(&raiz);
   pre_order(&raiz);
   printf("\n");
 return 0;
}