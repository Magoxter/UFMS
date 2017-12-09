		/* Cartas */
#include "stdio.h"
#include "stdlib.h"

typedef struct celula {
	  int num;
 struct celula *prox;
} cel;

void insert (cel *,int);
void print  (cel *);
void cards  (cel *);

int main (void) {
  int n,x;
  cel *h;
  cel *p;
   scanf("%d", &n);
 while (n) {
    h = (cel *)malloc(sizeof(cel));
    h->prox = NULL;
  while (n--) {
    scanf("%d", &x);
   insert(h,x);
  } p = h;
  while (p->prox != NULL)
    p = p->prox;
   p->prox = h->prox;
    cards(p);
     n = 5;
    scanf("%d", &n);
 }
 return 0;
}

void insert (cel *p,int x) {
  cel *q;
   q = (cel *)malloc(sizeof(cel));
   q->num = x;
   q->prox = p->prox;
   p->prox = q;
 return;
}

void cards (cel *p) {
  cel *q;
   q = p;
 while (q->prox != p)
   q = q->prox;
 while (q->prox != q) {
   q->prox = p->prox;
  printf("%d ", p->num);
  free(p);
   p = q;
  while (p->prox != q)
    p = p->prox;
  while (q->prox != p)
    q = q->prox;
 } printf("\n");
   printf("%d\n", q->num);
   printf("\n");
 return;
}

void print (cel *p) {
  int x;
   x = p->num;
   p = p->prox;
 while (p->num != x) {
   printf("%d ", p->num);
    p = p->prox;
 } printf("%d\n", x);
 return;
}
