		/* Espetacular */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	  int chave;
	  int pos;
	 char age;
 struct node *prox;
} tnode;

char idade (int);
void print (tnode *);

void child  (tnode *);
void adults (tnode *);
void oldage (tnode *);

int main (void) {
	tnode *head;
  tnode *p;
  tnode *q;
  int cont;
  int num;
  int ing;
    head = (tnode *)malloc(sizeof(tnode));
    p = head;
    head->age = 'h';
    p->prox = NULL;
   scanf("%d", &ing);
    cont = 1;
 while (ing--) {
 	  scanf("%d", &num);
 	 q = (tnode *)malloc(sizeof(tnode));
 	 q->prox = p->prox;
 	 q->pos = cont;
 	 q->chave = num;
 	 q->age = idade(num);
 	 p->prox = q;
 	 p = p->prox;
 	++cont;
 } cont = 1;
   p = head;
 while (p->prox != NULL) {
  printf("sessao %d:\n", cont);
    child(p);
   adults(p);
   oldage(p);
  printf("\n");
  cont++;
 }
 return 0;
}

void child (tnode *p) {
  tnode *q;
  int cont;
   q = p;
   cont = 0;
 while (q->prox != NULL && cont < 3) {
 	q = q->prox;
 	 if (q->age == 'c') {
 	 	 printf("%d ", q->pos);
 	 	while (p->prox != q)
 	 		p = p->prox;
 	 	 p->prox = q->prox;
 	  free(q);
 	 	++cont;
 	 }
 }
 return;
}

void adults (tnode *p) {
  tnode *q;
  int cont;
   q = p;
   cont = 0;
 while (q->prox != NULL && cont < 3) {
 	q = q->prox;
 	 if (q->age == 'a') {
 	 	 printf("%d ", q->pos);
 	 	while (p->prox != q)
 	 		p = p->prox;
 	 	 p->prox = q->prox;
 	  free(q);
 	 	++cont;
 	 }
 }
 return;
}

void oldage (tnode *p) {
  tnode *q;
  int cont;
   q = p;
   cont = 0;
 while (q->prox != NULL && cont < 3) {
 	q = q->prox;
 	 if (q->age == 'i') {
 	 	 printf("%d ", q->pos);
 	 	while (p->prox != q)
 	 		p = p->prox;
 	 	 p->prox = q->prox;
 	  free(q);
 	 	++cont;
 	 }
 }
 return;
}

char idade (int num) {
 if (num < 18)
 	 return 'c';
 else
 if (num < 41)
 	 return 'a';
 else
 	 return 'i';
}

void print (tnode *p) {
 if (p->prox == NULL)
 	 printf("empty\n");
 else {
 	while (p->prox != NULL) {
 		 p = p->prox;
 		printf("%d ", p->chave);
 	} printf("\n");
 }
 return;
}
