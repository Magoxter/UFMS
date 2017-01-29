// Programa: maiuscula.c
// Programador: Willian Xavier
// Data: 31/07/2016
// Este programa lê uma string de caracteres alfanuméricos, todos minúsculos,
// transforma os todos os caracteres para maiúsculos e imprime o resultado. O
// programa não pode usar funções das bibliotecas ctype.h e string.h
// declaração das bibliotecas utilizadas.
#include<stdio.h>

// declaração de tipos
typedef char string[80];

// início da função principal
int main(void) {
// declaração das variáveis locais
int i;
string str, strM;
// pré:

// Passo 1. Leia a string
   scanf("%s", str);
// Passo 2. Transforme os caracteres da string para maiúsculos
   i=0;
   while(str[i] != '\0'){
        strM[i] = str[i] - 32;
        str[i] = strM[i];
        i++;
   }
// Passo 3. Finalize a string
    str[i] = '\0';
// Passo 4. Imprima o resultado
   printf("%s\n", str);

   return 0;

// pós:
} // fim da função principal
