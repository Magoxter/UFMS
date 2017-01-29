// Programa: quantidade.c
// Programados: Willian Xavier
// Data: 31/07/16
// Este programa lê 1 caractere e n strings, e verifica quantas
// vezes o dado caractere dado aparece em cada string.
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<string.h>
// declaração de tipos
typedef char string[80];

// início da função principal
int main(void) {
//declaração das variáveis locais
char   c; 
string str;
int    i,cont,j;

// pré: char string 

// Passo 1. Leia o caracter e a string
// Passo 1.1. Leia o caractere a ser encontrado
   scanf("%c", &c);
// Passo 1.2. Leia a string
   scanf("%s", str);
// Passo 2. Inicialize o número de caracteres
   cont = 0;
   j = strlen(str);
// Passo 3. Procure o caractere na string
   for(i=0; i<=j; i++){
       if(c == str[i])
       cont++;
   }
// Passo 4. Imprima o resultado
   printf("%d\n", cont);

   return 0;

// pós: cont == num {c == str[i], i {0...n}}	 	  	  		  	 	      	       	 	
} // fim da função main
