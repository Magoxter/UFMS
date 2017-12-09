		/* Josephus Encadeado */
#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	  int num;
 struct celula *prox;
} cel;

int  josephus (cel *,int,int);
cel *makeJose (cel *,int);
void print    (cel *);

int main (void) {
  cel *p;
  int n,r,k;
    p = (cel *)malloc(sizeof(cel));
    p->prox = NULL;
   scanf("%d", &r);
 while (r--) {
 	 scanf("%d", &n);
 	 scanf("%d", &k);
 	printf("%d\n", josephus(makeJose(p,n),n,k));
 }
 return 0;
}

cel *makeJose (cel *p,int n) {
  cel *q;
  cel *h;
  int i = 1;
   h = p;
 while (n--) {
 	 q = (cel *)malloc(sizeof(cel));
 	 q->num = i;
 	 q->prox = p->prox;
 	 p->prox = q; 
 	 p = p->prox;
 	++i;
 } q->prox = h->prox;
 return q;
}

int josephus (cel *p,int n,int k) {
	cel *q;
	int  x;
 if (p->prox == p)
 	 return p->num;
 	x = k;
 	q = p;
 while (x--)
 	 q = q->prox;
 while (p->prox != q)
 	 p = p->prox;
 	p->prox = q->prox;
 free(q);
 return josephus(p,n-1,k);
}

void print (cel *p) {
  int  i;
 for (i = 0; i < 2; ++i) {
 	while (p->num < p->prox->num)
 	 printf("%d ", p->num);
 	printf("\n");
 }
 return;
}
