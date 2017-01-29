// Programa: compara.c
// Programados: Willian Xavier
// Data: 17/06/2016
// Este programa lê duas palavras, computa qual é a maior 
// (lexicograficamente) e imprime a maior.

// Declaração das bibliotecas utilizadas
    #include<stdio.h>  // scanf, printf
    #include<string.h> // strcmp, strcpy

// Definições de contantes
    #define TAMMAX 25

// Declaração de tipos
    typedef char string[TAMMAX];

// início da função principal
    int main(void) {

// declaração das variáveis locais	
    string palavra1, palavra2, maior;

// pré: UmChar1[0]..UmChar1c[n], UmChar2[0]..UmChar2[m]

// Passo 1. Leia as palavras
    printf("Leia a palavra 1: ");
    scanf("%s", palavra1);
    printf("Leia a palavra 2: ");
    scanf("%s", palavra2);
    
// Passo 2. Compute a maior palavra
    if (strcmp(palavra1, palavra2) >= 0) {
        strcpy (maior, palavra1);
    }
    else {
        strcpy (maior, palavra2);
    }	 	  	  		  	 	      	       	 	
    
// Passo 3. Imprima a maior palavra		
   printf("A Maior Palavra é %s\n", maior);
   
	return 0;

// pós: maior && maior >= palavra1, palavra2
} // fim da função principal
// end{Verbatim}
