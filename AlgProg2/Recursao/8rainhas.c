    /* 8 Queens */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MX 20

int cont = 0;

void print (int[]);
void queens (int,int[],bool[],bool[],bool[]);

int main (void) {
  bool v[MX];
  bool dir[MX];
  bool esq[MX];
  int resp[MX];
   memset(v,true,sizeof(v));
   memset(dir,true,sizeof(dir));
   memset(esq,true,sizeof(esq));
  queens(0,resp,v,dir,esq);
 printf("%d solutions\n", cont);
 return 0;
}

void queens (int n,int resp[],bool v[],bool dir[],bool esq[]) {
  int k,i;
   k = 8;
 if (!(n-8))
   print(resp);
 else {
  for (i = 0; i < k; i++) {
    if (v[i] && dir[n-i+8] && esq[n+i]) {
      v[i] = dir[n-i+k] = esq[n+i] = false;
      resp[n] = i +1;
     queens(n+1,resp,v,dir,esq);
      v[i] = dir[n-i+k] = esq[n+i] = true;
    }
  }
 }
 return;
}

void print (int resp[]) {
  int n,i;
   n = 8;
 for (i = 0; i < n; i++)
    printf("%d", resp[i]);
   printf("\n"); cont++;
 return;
}
