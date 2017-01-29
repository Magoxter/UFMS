// Programa: mostrames.c
// Programador: Willian Xavier
// Data: 19/09/2016
// Programa para testar funções
// declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf
#include<string.h> // strcpy

// declaração de tipos
typedef char string[17];

// declaração das funções
void mostrames(int, string);

// início da função principal
int main(void) {
// declaração das variáveis locais
int    num;
string mes;

// pré: input == umInt1 umInt2

// Passo 1. Leia os dados
   scanf("%d", &num);
// Passo 2. Troque o valor de a por b e b por a
   mostrames(num, mes);
// Passo 3. Imprima os resultados
   printf("%s\n", mes);

   return 0;

// pós: b a
} // fim da função principal

// Função: mostrames
// Programador:
// Data: 13/06/2013
// O Diálogo: Esta função troca o valor de duas variáveis do tipo int
void mostrames(int nummes, string nomemes) {

   switch(nummes) {
      case 1:
         strcpy(nomemes, "janeiro");
         break;
      case 2:
         strcpy(nomemes, "fevereiro");
         break;
      case 3:
         strcpy(nomemes, "março");
         break;
      case 4:
         strcpy(nomemes, "abril");
         break;
      case 5:
         strcpy(nomemes, "maio");
         break;
      case 6:
         strcpy(nomemes, "junho");
         break;
      case 7:
         strcpy(nomemes, "julho");
         break;
      case 8:
         strcpy(nomemes, "agosto");
         break;
      case 9:
         strcpy(nomemes, "setembro");
         break;
      case 10:
         strcpy(nomemes, "outubro");
         break;
      case 11:
         strcpy(nomemes, "novembro");
         break;
      case 12:
         strcpy(nomemes, "dezembro");
         break;
      default:
         strcpy(nomemes, "Número Inválido");

   } // fim switch

   return;

// pós: string == (Janeiro || Fevereiro || ... || Dezembro)
} // fim da função Swap
