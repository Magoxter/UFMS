// Programa: carteiro01.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê os valores inicial e final do número das
// caixas postais de uma determinada agência dos correios
// abrindo e fechando as caixas postais numa determinada ordem
// verifica o estado final da configuração
#include <stdio.h>  // scanf, printf
#include<stdbool.h> // true, false
// declaração das constantes utilizadas
#define MAX 1000

// início da função principal
int main(void) {
// declaração das variáveis locais
int  numA, numB;
bool caixas[MAX];
int  j;

// pré:  numA, numB

// Passo 1. Leia a entrada
// Passo 1.1. Leia o número da primeira caixa
   scanf("%d", &numA);
// Passo 1.2 Leia o número da última caixa
   scanf("%d", &numB);
// Passo 2. Feche as caixas postais
   for (int i = numA; i <= numB; i++)
      caixas[i] = false;
// Passo 3. Abra/feche todas as caixas múltiplas de i
   j = 1;
   for(int i =numA; i <= numB; i++){
       for(int k = i+1; k<=numB; k = k + j +1){
           if(caixas[k] == false)
              caixas[k] = true;

            else if(caixas[k] == true)
                    caixas[k] = false;
       }
       j++;
   }
// Passo 4. Imprima os números das caixas que ficaram fechadas
   for (int i = numA; i <= numB; i++) {
      if (!caixas[i])
         printf("%d ", i);
   } // fim for i
   printf("\n");

   return 0;

// pós: para i em {1,..,tam}: i && caixas[i] == false
} // fim da função main
