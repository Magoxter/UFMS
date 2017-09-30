	/* Promocao */
#include <stdio.h>

void promocao (int,int,int,int,int);

int main (void) {
  int d,e,p;
   scanf("%d", &d);
   scanf("%d", &p);
   scanf("%d", &e);
 while (d && e && p) {
  promocao(d,p,e,0,0);
   scanf("%d", &d);
   scanf("%d", &p);
   scanf("%d", &e);
 }
 return 0;
}

void promocao (int d,int p,int e,int choco,int emb) {
 if (!p)
   return;
 if (!(emb-e)) {
   choco++;
   emb = 1;
 } if (d < p) {
 	 printf("%d %d\n", choco, emb);
 	return;
 } else {
 	 d -= p;
 	 choco++;
 	 emb++;
 } promocao(d,p,e,choco,emb);
 return;
}
