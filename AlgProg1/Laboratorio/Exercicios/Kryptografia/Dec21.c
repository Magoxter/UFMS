// Programa: decodifica21.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê uma mensagem codificada pelo programa codifica21.c,
// onde uma frase só de caracteres do alfabeto e sem espaços é codificada com
// a soma dos caracteres de uma palavra codificadora a cada caractere maiúsculo,
// onde essa soma é feita de forma circular, e a palavra codificadora usada na
// codificação e decodifica a mensagem e imprime o resultado.
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf
#include<string.h> // strlen
#include<ctype.h>
// definição de constantes e instruções
#define LIMSTRING 80   // tamanho máximo da string
// Declaração dos tipos
typedef char String[LIMSTRING];
// início da função principal
int main(void) {
// Declaração das variáveis locais
String       mensagemC,      // mensagem a ser decodificada
             mensagemD;      // mensagem decodificada
String       palavra;        // chave da codificação
int          tam;            // tamanho da mensagem
int          tamp;           // tamanho da palavra codificadora
int          novoCodigo;     // novo código para o caractere

// pré: UmChar[1]...UmChar[n]\n && UmChar[1]...UmChar[n] == Mensagem
//      UmChar[1]...UmChar[k] == chave

// Passo 1. Leia a mensagem a ser decodificada e o decodificador.
// Passo 1.1. Leia a mensagem
   //printf("Entre com a mensagem a ser decodificada numa linha e ");
   //printf("Tecle <Enter> para terminar: \n");
   scanf("%s", mensagemC);
// Passo 1.2. Leia a palavra decodificadora
   //printf("Entre com a palavra para a decodificação: \n");
   scanf("%s", palavra);
// Passo 2. Compute o tamanho da mensagem e da palavra
   tam = strlen(mensagemC);
   tamp = strlen(palavra);
// Passo 3. Decodifique a Mensagem
// Passo 3.1. Decodifique cada caracter da mensagemC
   for(int i = 0; i < tam; i++){
// Passo 3.2.1. Decodifique o caracter i
       novoCodigo = toupper(mensagemC[i]) - toupper(palavra[i % tamp]) + 64;
// Passo 3.2.2. Verifique se o número obtido não é um caracter válido
       if(novoCodigo < 65)
// Passo 3.2.2.1. Obtenha o número de um caracter válido
          novoCodigo = 91 - (65 - novoCodigo);
// Passo 3.2.2. Atribua o novo caracter a mensagem decodificada
        mensagemD[i] = novoCodigo;
} // fim for
// Passo 4. Finalize a mensagem decodificada
    for(int i = 0; i < tam; i++){
//  printf("Mensagem Decodificada: %s\n", mensagem);
    printf("%c", mensagemD[i]);
 } // fim for

    return 0;

// pós: c[1]...c[n] && para i em {1,...,n}: c[i]==UmChar[i] - UmUInt
} // fim da função principal
