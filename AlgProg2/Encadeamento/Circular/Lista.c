		/* Lista Encadeada Circular */
#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	  int num;
 struct celula *prox;
} cel;

void menu   (void);
void print  (cel *,int);
void insert (cel *,int);
void remove (cel *,int);

int main (void) {
	cel *p;
	int  x;
	int  com;
	 p = NULL;
    menu();
   scanf("%d", &com);
 while (com) {
  switch (com) {
  	case 1:
  	   scanf("%d", &x);
  	  insert(p,x);
  	 break;
  	case 2:
  	   scanf("%d", &x);
  	  remove(p,x);
  	 break;
  	case 3:
       sort(p);
     break;
    case 4:
      scanf("%d", &x);
     if (search(p,x))
       printf("%d\n", search(p,x));
     else
       printf("ERROR\n");
      break;
    case 5:
  	   print(p);
  	 break;
  } scanf("%d", &com);
  if (com == 6)
  	com = 0;
 }
 return 0;
}

void menu (void) {
 printf("MENU:\n");
 printf("1- Insere\n");
 printf("2- Remove\n");
 printf("3- Ordena\n");
 printf("4- Busca\n");
 printf("5- Print\n");
 printf("6- Sair\n");
 return;
}

void insert (cel *p,int x) {
  cel *q;
   q = (cel *)malloc(sizeof(cel));
 if (q != NULL) {
   q->num = x;
  if (p == NULL) {
   q->prox = q;
  *p = q;
  } else {
  	  q->prox = (*p)->prox;
  	 (*p)->prox = q;
  }
 }
 return;
}

void remove (cel *p,int x) {
	cel *q;
	int  cont;
	 cont = 1;
	 q = p->prox;
 while (q->num != x)
 	 q = q->prox;
 while (p->prox != q)
 	 p = p->prox;
 	p->prox = q->prox;
 free(q);
 return;
}

int search (cel *h,int x) {
  cel *p;
  int cont;
 if (h->prox == NULL)
  return -1;
   cont = 0;
   p = h->prox;
 while (p->prox != NULL) {
  if (p->num == x)
    return cont;
  ++cont;
  p = p->prox;
 }
 return -1;
}

void print (cel *p) {
  int  x;
  int  y;
  cel *q;
   q = p->prox;
   x = p->num;
   y = q->num;
   p = p->prox;
   q = p->prox;
 while (p->num != x && q->num != y) {
 	printf("%d ", p->num);
 	 p = p->prox;
 	 q = q->prox;
 } printf("\n");
 return;
}

void sort (cel *h) {
  int min;
  int  n;
  cel *q;
  cel *p;
  cel *z;
 if (h->prox == NULL)
  return -1;
   z = (cel *)malloc(sizeof(cel));
   z->prox = NULL;
   q = h->prox;
   min = q->num;
   n = cont(h);
 while (n--) {
  while (p->prox != NULL) {
   if (p->num < min)
     q = p;
    p = p->prox;
  } p = h;
  while (p->prox != q)
    p = p->prox;
   p->prox = q->prox;
   q->prox = z->prox;
   z->prox = q;
 }
 return;
}

int cont (cel *h) {
  int count;
   count = 0;
 while (h->prox != NULL) {
   count++;
  h = h->prox;
 }
 return count;
}
