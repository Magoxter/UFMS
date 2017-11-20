    /* Filha */
#include <stdio.h>
#include <stdlib.h>
#define MX 100

typedef struct node {
    int chave;
 struct node *prox;
} tnode;

void enqueue (tnode *,int);
void dequeue (tnode *);
void print   (tnode *);

int main (void) {
  tnode *p;
  int com;
  int num;
   p = (tnode *)malloc(sizeof(tnode));
   p->prox = NULL;
  scanf("%d", &com);
 while (com) {
  if (com == 1) {
    scanf("%d", &num);
   enqueue(p,num);
  } else
  if (com == 2)
    dequeue(p);
  else
  if (com == 3)
    print(p);
  scanf("%d", &com);
 }
 return 0;
}

void enqueue (tnode *p,int x) {
  tnode *q;
   q = (tnode *)malloc(sizeof(tnode));
   q->prox = p->prox;
   q->chave = x;
   p->prox = q;
 return;
}

void dequeue (tnode *p) {
  tnode *q;
 if (p->prox == NULL) {
   printf("fila vazia\n");
 } else {
    q = p;
  while (q->prox != NULL)
     q = q->prox;
  while (p->prox != q)
     p = p->prox;
   p->prox = q->prox;
  free(q);
 }
 return;
}

void print (tnode *p) {
  int v[MX];
  int n,i;
   i = 0;
 if (p->prox == NULL)
   printf("fila vazia\n");
 else {
  while (p->prox != NULL) {
     p = p->prox;
    v[i] = p->chave;
  ++i;
  } n = i;
  for (i = n-1; i >= 0; i--)
     printf("%d ", v[i]);
    printf("\n");
 }
 return;
}
