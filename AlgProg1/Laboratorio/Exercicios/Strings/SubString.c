// Programa: substring03.c
// Programador: Willian Xavier
// Data: 31/07/2016
// O Diálogo: Este programa lê uma sequência e uma subsequência e verifica
// se a subsequência ocorre na sequência e imprime os resultados.
// Declaração das bibliotecas utilizadas
#include<stdio.h>    // scanf, printf
#include<string.h>   // strcpy

// declaração de tipos
typedef char String[80];

// início da função principal
int main(void) {
// Declaração das variáveis locais
String sequencia,        // sequência a ser comparada
       subsequencia,     // subsequência a ser pesquisada
       resposta;
int    tam1, tam2,posicao,       // tamanho das strings analisadas
       cont=0,total=0,                 // posição onde ocorre
       i, j;                    // índices

// pré: string1 == UmChar[1]...UmChar[n] &&
//      string2 == UmChar[1]...UmChar[m]

// Passo 1. Leia as strings
   scanf("%s", sequencia);
   scanf("%s", subsequencia);
// Passo 2. Compute o tamanho das strings
   tam1 = strlen(sequencia);
   tam2 = strlen(subsequencia);
// Passo 3. Verifique se subsequencia ocorre em sequencia
// Passo 3.1. Inicialize os índices das strings
   cont=0;
// Passo 3.2. Compare os caracteres de subsequencia com sequencia
   while(j<tam1){
         i=0;
         while(i<tam2){
               if(sequencia[j] == subsequencia[i]){
                  cont++;
                  i++;
               }
               else{
                   cont=0;
                   i=0;
               }
              if(sequencia[j] == subsequencia[i]){
                  cont++;
                  i++;
               }
               if(cont==4){
                  posicao = j-3;
                  total = 1;
                  j = tam1;
               }
               if(j == tam1){
                  i = tam2;
               }
               j++;
           }
   }
// Passo 4. Compute a posição
   if(total == 1){
    strcpy(resposta, "sim");
   }
   else{
     posicao = tam1;
     strcpy(resposta, "nao");
   }
// Passo 5. Imprima o resultado
   printf("%s na posicao %d\n", resposta, posicao);

   return 0;

// pós: subsequencia inicia na sequencia em posicao
} // fim da função principal
