// Programa: trazprafrente.c
// Programador: Willian Xavier
// Data: 31/07/2016
// Este programa lê um conjunto de n strings, inverte e imprime cada
// string
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<string.h>
// declaração de tipos
typedef char string[80];

// início da função principal
int main(void) {
// declaração das variáveis locais    
int i,j,n;
string palavra;

// pré: c[0]c[1]c[2]...c[n] && c[i] == char

// Passo 1. Leia a string
   scanf("%s", palavra);
// Passo 2. Compute o tamanho da string         
   j = strlen(palavra);
// Passo 3. Inverta a string         
    for(i=(j-1); i>=0; i--){
            
// Passo 4. Imprima a string invertida
    printf("%c",palavra[i]);
    }   
    printf("\n");
    
   return 0;
// pós: c[n]c[n-1]...c[2]c[1]c[0]  
} // fim da função principal	 	  	  		  	 	      	       	 	
