// Programa: vogalconsoante.c
// Programador: Willian Xavier
// Data: 15/07/2016
// Este programa lê uma string e conta o número de vogais e consoantes
// da string e imprime o resultado.

// declaração das bibliotecas utilizadas
    #include<stdio.h>  // scanf, printf
    #include<string.h> // strlen
    #include<ctype.h>  // isalpha

// definição de constantes e instruções
    #define TAMSTRING 80   // tamanho máximo da string
    #define FLUSH while (getchar() != '\n')

// Declaração dos tipos
    typedef char String[TAMSTRING];

// início da função principal
    int main(void) {

// declaração das variáveis locais
    String mensagem;
    char   c;
    int    tam,
           vogal,
           consoante,
           i;

// Passo 1. Leia a string
// FLUSH;
   scanf("%79[^\n]s", mensagem);
   
//`Passo 2. Compute o tamanho da palavra
   tam = strlen(mensagem);

// Passo 3. Compute o número de vogais
// Passo 3.1. Inicialize o número de vogais e consoantes
   vogal = 0;
   consoante = 0;

// Passo 3.2. Para cada caractere da palavra faça
    for (i = 1; i < tam; i++) {	 	  	  		  	 	      	       	 	

// Passo 3.2.1. Verifique se o caractere é do alfabeto
        c = mensagem[i];
    
// Passo 3.2.1.1. Verique se é uma vogal
    if (isalpha(c)) {
        c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vogal++;
            else
                consoante++;
    }

    }
    
// Passo 4. Imprima os resultados
   printf("%d %d\n", vogal, consoante);

    return 0;

} // fim da função principal
