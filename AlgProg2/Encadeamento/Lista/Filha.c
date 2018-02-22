		/* Fila ou Pilha */
#include "stdio.h"
#include "stdlib.h"

typedef struct celula {
    int num;
 struct celula *prox;
} cel;

typedef struct ponter {
 struct celula *prm;
 struct celula *ult;
} pont;

int main (void) {
  int n,i,r,c;
  int v[MX];
  cel  *h;
  pont *p;
   h = (cel *)malloc(sizeof(cel));
   h->prox = NULL;
   p->prm = p->ult = NULL;
  scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
   scanf("%d", &c);
    i = 0;
  if (c == 1)
    insert(h);
   primult(p,h);
  if (p->prm == p->ult) {
   if (p->prm != NULL) {
     v[i] = 3;
    ++i;
   }
  } else
  if (c == 2) {
    x = filha(p,h);
    v[i] = x;
   ++i;
  }
 }
 return 0;
}

void insert (cel *h) {
  int x;
   scanf("%d", &x);
  q = (cel *)malloc(sizeof(cel));
  q->num = x;
  q->prox = h->prox;
  h->prox = q;
 return;
}

int filha (pont *p,cel *h) {
  int x;
  int fila;
  int pilha;
    fila = pilha = 0;
   scanf("%d", &x);
 if (x == p->prm->num)
   fila = 1;
 if (x == p->ult->num)
   pilha = 1;
 if (pilha)
  return 1;
 if (fila)
  return 2;
}

void primult (cel *h,pont *p) {
	cel *q;
 if (h->prox != NULL) {
   p->prm = h->prox;
   q = h->prox;
  if (q->prox != NULL)
   while (q->prox != NULL)
     q = q->prox;
  p->ult = q;
 }
 return;
}
