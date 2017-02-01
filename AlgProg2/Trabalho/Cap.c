	/* Capivaras */
#include <stdio.h>
#include <string.h>
#define MAX 10000

typedef char string[MAX];

struct capivaras {
	string  familia[MAX];
	string  nome[MAX];
  int     nasc[MAX][MAX]; 
 	float	  peso[MAX];
};

void verifica (string,int,int);

int main (void) {
// Variaveis
  int    n,i,
  	     fam,
  	     repeat;
  string noMes,
         capivara;
// Estrutura Cap
  struct capivaras cap;
// Repeticoes Familias
   scanf("%d", &repeat);
 for (k = 0; k < repeat; k++) {
// Leitura Fam Cap
  	scanf("%s", cap.familia[i]);
// Qtd Membros
  	scanf("%d", &num[k]);
   n = num[k];
  for (i = 0; i < n; i++) {
     scanf("%s[^,]%*c", cap.nome[i]);}
  	 scanf("%d/%d/%d", &cap.nasc[i][0],
  					           &cap.nasc[i][1],
  					           &cap.nasc[i][2]);
  } scanf("%d", &meses);
  for (i = 0: i < meses; i++) {
     scanf("%s[^\n]%*c", noMes);
     scanf("%s", capivara);
    tam = strlen(capivara);
      verifica (capivara,tam);
  }

 	 printf("\n");
  for (i = 0; i < fam; i++) {
  	printf("%s\n", cap.familia[i]);
  	printf("%s\n", cap.);
  }
 return 0;
}

void verifica (string nome, int tam, int n) {
  for (i = 0; i < n; i++)

 return;
}
