// Programa: uniao00.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê dois vetores A e B com elementos distintos e calcula
// o vetor C que é a união de A e B e imprime o resultado.
/* A Companhia de Erva Mate Pantaneira mantém dois depósitos,
 . um em Campo Grande e outro em Ponta Porã. Cada um com estoques de
 . no máximo 25 itens diferentes. Os produtos são identificados com um
 . número de 3 dígitos. Escreva um programa que leia os números dos produtos
 . dos itens armazenados no depósito em Campo Grande e armazene-os no vetor
 . CampoGrande, e então repita este procedimento para os itens armazenados
 . no depósito de Ponta Porã, armazenando esses números de produtos no vetor
 . PontaPorã. O programa deve então encontrar e imprimir a união destas duas
 . listas de produtos, isto é, a coleção de números de produtos que estão em
 . pelo menos em um dos depósitos. Os elementos da lista da união devem aparecer
 . na mesma ordem que ocorrem nas listas, sendo que os da lista de Campo Grande
 . aparecem antes dos da lista de Ponta Porã. As listas não devem ser assumidas
 . como tendo o mesmo número de elementos.
 */

// Bibliotecas
    #include <stdio.h>  // scanf, printf

// Constantes
    #define MAX 25

// definição de tipos
    typedef int Arranjo[MAX];

// início da função principal
    int main(void) {

// declaração das variáveis locais
    Arranjo campoGrande, pontaPora, total;
    int     i, j, tamA, tamB, tamC;

// pré:  Vetores A e B, tamA, tamB número de elementos de A e B

// Passo 1. Leia os vetores
// Passo 1.1. Leia o comjunto A,  |A| <= 25
   i = 0;
   scanf("%d", &campoGrande[i]);
   while (campoGrande[i] != 0 && i < 25) {
      i++;
      scanf("%d", &campoGrande[i]);
   }
   tamA = i;

// Passo 1.2. Leia o comjunto B,  |B| <= 25
    i = 0;
   scanf("%d", &campoGrande[i]);
   while (pontaPora[i] != 0 && i < 25) {
      i++;
      scanf("%d", &pontaPora[i]);
   }
   tamB = i;

// Passo 2. Compute C união de A e B
// Passo 2.1. Copie os elementos de A em C.
    tamC = tamA;
    for (i = 0; i < tamC; i++) {
         total[i] = campoGrande[i];
    }

// Passo 2.2. Copie os elementos de B que não estão em A em C.
    for (t = 0; t < tamC; t++) {
        for (b = 0; b < tamB; b++) {
            if (pontaPora[b] != total[t]) {
                tamC++;
                total[tamC] = pontaPora[b];
            }
        }
    }

// Passo 3. Imprima o conjunto C == A U B
   if (tamC > 0) {
      for (i = 0; i < tamC; i++)
         printf("%d ", total[i]);
      printf("\n");
   } // fim if
   else
      printf("vazia\n");

   return 0;

// pós: tamC = |A união B| (número de elementos da união) &&
//      Vetor C = A união B
} // fim da função main

