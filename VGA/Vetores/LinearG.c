	/* Linearidade Geral */
// Este Programa Computa a
// Linearidade de n Vetores

#include <stdio.h>
#define MAX 1000

void vetor1 (float[]);
void vetor2 (float[],float[]);
void vetor3 (float[],float[],float[]);
void leitura (float[]);

int main (void) {
  int	qtd;
  float	u[MAX],
  		v[MAX],
  		w[MAX];
    printf("Qntd de Vetores: ");
     scanf("%d", &qtd);
  switch(qtd) {
  	case 1:
  	   leitura(v);
  	   vetor1 (v);
  	  break;
  	case 2:
  	   leitura(u);
  	   leitura(v);
  	   vetor2 (u,v);
  	  break;
  	case 3:
  	   leitura(u);
  	   leitura(v);
  	   leitura(w);
  	   vetor3 (u,v,w);
  	  break;
  	default:
  		printf("LD\n");
  }
 return 0;
}

void leitura (float v[MAX]) {
  int n,i;
    n = 3;
  for (i = 0; i < n; i++)
  	 scanf("%f", &v[i]);
 return;
}

void vetor1 (float v[MAX]) {
   if (v[0] == 0 &&
       v[1] == 0 &&
       v[2] == 0)
     printf("LD\n");
   else
     printf("LI\n");
}

void vetor2 (float u[], float v[]) {
  if ((v[1]/u[1] == v[0]/u[0] &&
       v[2]/u[2] == v[0]/u[0])||
      (u[1]/v[1] == u[0]/v[0] &&
       u[2]/v[1] == u[0]/v[0]))
    printf("LD\n");
  else
     printf("LI\n");
}

void vetor3 (float u[], float v[], float w[]) {
  int det;
   det = (v[0]*u[1]*w[2]) +
 	 (v[1]*u[2]*w[0]) +
 	 (v[2]*u[0]*w[1]) -
 	 (v[2]*u[1]*w[0]) -
 	 (v[1]*u[0]*w[2]) -
	 (v[0]*u[2]*w[1]) ;
   if (det == 0)
     printf("LD\n");
   else
     printf("LI\n");
}
