#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	int id;
 struct _node *esq;
 struct _node *dir;
} tnode;

void pre_order (tnode * pnode) {
	if (pnode != NULL) {
		printf("%d ", (pnode)->id);
		pre_order(pnode->esq);
		pre_order(pnode->dir);
	}
 return;
}

tnode * aloca_node (int x) {
 tnode * node;

 node = (tnode *)malloc(sizeof(tnode));
 node->esq = NULL;
 node->dir = NULL;
 node->id = x;

 return node;
}

tnode ** search (tnode ** pnode, int x){
  tnode ** ret;

  if (*pnode == NULL)
  	ret = NULL;
  else
  if ((*pnode)->id == x)
  	ret = pnode;
  else {
  	if ((*pnode)->id > x)
  	  ret = search(&((*pnode)->esq),x);
  	else
  	  ret = search(&((*pnode)->dir),x);
  }
 return ret;
}

void insert (tnode ** pnode,int x) {
  if (*pnode == NULL) {
  	*pnode = aloca_node(x);
  } else {
  	  if ((*pnode)->id < x)
  	  	insert(&(*pnode)->dir, x);
  	  else
  	  	insert(&(*pnode)->esq, x);
  }
}

void rot_dir (tnode ** pnode) {
	tnode * x = *pnode;
	tnode * y = x->esq;
	tnode * B = y->dir;

	x->esq = B;
	y->dir = x;
  *pnode = y;
 return;
}

void rot_esq (tnode ** pnode) {
  tnode * x = *pnode;
  tnode * y = x->dir;
  tnode * B = y->esq;

  x->dir = B;
  y->esq = x;
  *pnode = y;
 return;
}

void rotation (tnode ** pnode,char c) {
	if (c == 'D')
	  rot_dir(pnode);
	else
	if (c == 'E')
	  rot_esq(pnode);
	else
		printf("char errado\n");
 return;
}

int main (void) {
  int  r,i,n,k,x;
  char c;

  scanf("%d ", &r);
 while (r--) {
  tnode** node;
  tnode * tree;

  tree = NULL;
  node = NULL;

 	 scanf("%d ", &n);
  for (i = 0; i < n; i++) {
  	scanf("%d ", &x);
  	insert(&tree,x);
  } scanf("%c ", &c);
    scanf("%d", &k);
  pre_order(tree);
  printf("\n");
   node = search(&tree,k);
  if (*node != NULL)
  	rotation(node,c);
  else
  	return 0;
  pre_order(tree);
  printf("\n");
 }
 return 0;
}



/*		 ROTACAO
 *		 DIREITA
 *				x
 *		y				C
 *	A 	B
 *
 *			 |rD|
 *
 *				y
 *		A 			x
 *					B		C
 * dont/GAESDE */

/*		 ROTACAO
 *		 ESQUERDA
 *				x
 *		A				y
 *	  			B		C
 *
 *			 |rE|
 *
 *				y
 *		x				C
 *	A 	B
 */