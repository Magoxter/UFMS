      /* Dominos */
#include <stdio.h>
#define MX 100

void dominos (int,int,int[],int[],int,int);
int ajusta (int[],int);

int main (void) {
  int d,e,m;
  int n,y,x,i;
  int dir[MX];
  int esq[MX];
   scanf("%d", &n);
 while (n) {
 	 scanf("%d", &m);
   scanf("%d", &x);
   scanf("%d", &e);
   scanf("%d", &d);
   scanf("%d", &y);
  for (i = 0; i < m; i++) {
 	  scanf("%d", &esq[i]);
 	  scanf("%d", &dir[i]);
  } dominos(e,d,esq,dir,m,n);
  scanf("%d", &n);
 }
 return 0;
}

void dominos (int e,int d,int esq[],int dir[],int m,int n) {
  int i,x,y;
 if (!(n-1)) {
 	for (i = 0; i < m; i++) {
 	 	x = esq[i];
 		y = dir[i];
 	 if (x == e) {
 	 	if (y == d)
 	 		printf("YES\n");
 	 	else
 	 		printf("NO\n");
 } else if (y == e) {
 	 	if (x == d)
 	 		printf("YES\n");
 	 	else
 	 		printf("NO\n");
 	 } else
 	     printf("NO\n");
 	}
 } else {
 	  for (i = 0; i < m; i++) { printf("x\n");
 	  	x = esq[i];
 	  	y = dir[i];
 	   if (x == e) {
 	   	 esq[i] = dir[i] = -1;
 	 	   m = ajusta(dir,m);
 	 	   m = ajusta(esq,m);
 	 	  dominos(x,d,esq,dir,m,n-1);
 	 	 }
 	 }
 }
 return;
}

int ajusta (int v[],int n) {
  int k,r,i,x;
  int aux;
   k = 0; r = n;
 while (r--) {
 	for (i = 0; i < n; i++) {
 		x = v[i];
 	 if (x < 0) {
 	 	 aux = v[i];
 		 v[i] = v[i+1];
 		 v[i+1] = aux;
 	 }
  }
 } for (i = 0; i < n; i++)
    if (v[i] < 0)
    	k++;
 return n-k;
}
