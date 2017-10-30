// Programa: Pilha2.c
// Programador:
// Data: 16/08/2016
// Esse programa...

// Declaração das bibliotecas utilizadas
#include<stdio.h>
#define MAX 20

// Início da função principal
int main(void) {

// Declaração das variáveis utilizadas
int i, k;
char acao;
int nAcoes, tam, pilha[MAX];

// Leia o tamanho da pilha
   scanf("%d", &tam);
// Leia os elementos da pilha
   for(i = 0; i < tam; i++) {
     scanf("%d", &pilha[i]);
   } // fim for 1
// Leia quantas ações serão realizadas
     scanf("%d", &nAcoes);
// Leia quais ações seram realizadas
     while(nAcoes > 0) {
   	     scanf(" %c", &acao);

   	     if(acao == 'R' || acao == 'r') {
   	         if(tam == 0) {
   	             printf("pilha vazia\n");
   	         	 nAcoes--;
   	         } // fim if
   	         else {
   	         	 nAcoes--;
   	         	 tam = tam - 1;
   	         	 for(k = 0; k < tam; k++) {
   	             printf("%d ", pilha[k]);
   	             } // fim for 3
   	             printf("\n");
   	         } // fim else 1
   	     } // fim if 1

   	     else if(acao == 'I' || acao == 'i') {
   	         if(tam == 20) {
   	             printf("pilha cheia\n");
   	             nAcoes--;
   	         } // fim if
   	         else {
   	             nAcoes--;
   	         	 scanf("%d", &pilha[tam]);
   	         	 tam = tam + 1;
   	         	 for(k = 0; k < tam; k++) {
   	         	     printf("%d ", pilha[k]);
   	         	 } // fim for 4
   	         	 printf("\n");
   	         } // fim else 2
		 } // fim if 2
     } // fim while
   return 0;
}// fim da função principal
