		/* Hash */
#include "stdio.h"
#include "stdlib.h"

typedef struct vector {
    int num;
 struct vector *prx;
} vet;

typedef struct cabeca {
    int ind;
 struct cabeca *nxt;
 struct vector *vec;
} head;

int hash (int,int);
void cab (head *,int);
void insere (head *,int);
void print (head *);

int main (void) {
	head *h;
	head *p;
  int key;
  int end;
	int n,k,x;
    h = (head *)malloc(sizeof(head));
    h->nxt = NULL;
    h->vec = NULL;
   scanf("%d", &key);
   scanf("%d", &n);
     cab(h,key);
    k = n;
 while (k--) {
    p = h->nxt;
 	 scanf("%d", &x);
 	  end = hash(x,key);
  while (end != p->ind)
  	p = p->nxt;
   insere(p,x);
 }  print(h->nxt);
 return 0;
}

int hash (int num,int key) {
 return num %key;
}

void insere (head *p,int x) {
  vet *q;
  vet *r;
  vet *s;
   q = (vet *)malloc(sizeof(vet));
   q->num = x;
   s = NULL;
 if (p->vec != NULL) {
 	 r = p->vec;
 	while (r->num < x && r->prx != NULL) {
 		s = r;
 		r = r->prx;
 	}
 } else {
 	   q->prx = NULL;
 	   p->vec = q;
 	 return;
 }
 if (r->num < x) {
   q->prx = r->prx;
   r->prx = q; 	
 } else
 if (s == NULL) {
 	 q->prx = r;
 	 p->vec = q;
 } else {
 	   q->prx = s->prx;
 	   s->prx = q;
 }
 return;
}

void cab (head *p,int n) {
	head *q;
  int   i;
   i = 0;
 while (n--) {
 	 q = (head *)malloc(sizeof(head));
 	 q->ind = i;
 	 q->nxt = NULL;
 	 q->vec = NULL;
 	 p->nxt = q;
 	 p = p->nxt;
 	++i;
 } p->nxt = NULL;
 return;
}

void print (head *p) {
	 vet *q;
	printf("%d -> ", p->ind);
 if (p->vec != NULL) {
 	  q = p->vec;
 	 printf("%d ", q->num);
 	while (q->prx != NULL) {
 		 q = q->prx;
 		printf("%d ", q->num);
 	}
 } printf("\n");
 if (p->nxt != NULL)
 	 print(p->nxt);
 return;
}
