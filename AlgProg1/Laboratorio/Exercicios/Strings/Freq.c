    /* Frequencia */
#include <stdio.h>
#include <string.h>
#define MAX 10000

typedef char string [MAX];

void apresentacao (int,int[],int);
int mayor (int,int[],int*);
int mehor (int,int[],int,int*);

int main (void) {
  int    zero,
         cont,
         n,i,k,
         tam,e,
         idmax,
         idmin,
         maior,
         menor;
  int    alf[MAX],
         pal[MAX],
         ord[MAX];
  string palavra;
// Leitura
    scanf("%s", palavra);
// Inicializacao
     tam = strlen(palavra);
     n = 255;
     zero = 0;
// Conversoes e Contagem
   for (i = 0; i < tam; i++)    // Conversao Caracteres
     pal[i] = palavra[i];
   for (i = 0; i < n; i++)      // Inicializacao Vetor
     alf[i] = 0;
   for (i = 0; i < tam; i++)    // Contagem no Vetor
     alf[pal[i]] += 1;
// Maior
    maior = mayor(n,&alf,&idmax);
// Menor
    menor = mehor(n,&alf,maior,&idmin);
// Contagem de Elementos
    cont = 0;
   for (i = 0; i < n; i++)
     if (alf[i] != zero)
        cont++;
// Apresentacao Vetor
    apresentacao(n,&alf,cont);
 return 0;
}

int mayor (int n, int v[],int*id) {
  int i,k,
    maior = v[0];
   for (i = 1; i < n; i++)
      if (v[i] > maior)
        maior = v[i];
 return maior;
}

int mehor (int n, int v[], int maior, int*id) {
  int i,
    zero = 0,
    menor = maior;
   for (i = 0; i < n; i++) {
      if ((v[i] < menor) &&
          (v[i] != zero)) {
         menor = v[i];
         *id = i;
      }
   }
 return menor;
}

void apresentacao (int n,int v[],int cont) {
  int k,i,
      maior,
      menor,
      idmax,
      idmin;
     idmin = 0;
    for (k = 0; k < cont; k++) {
     for (i = n; i > 0; i--) {
        maior = mayor (n,&v,0);
        menor = mehor(n,v,maior,&idmin);
     }
       printf("%d %d\n",idmin,menor);
      v[idmin] = 0;
    }
}
