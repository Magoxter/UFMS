// Programa: variancal.c
// Programador: Willian Xavier
// Data: 10/08/2016
// O Diálogo: Este programa lê um conjunto de notas, conta-os calcula e
// imprime a média, variança e desvio padrão desse conjunto de notas.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf, EOF
#include<math.h>     // sqrt, pow
// declaração das constantes
#define MAX 100

// início da função principal
int main(void) {
// declaração das variáveis locais
double   notas[MAX];   // lista das notas
int      num;          // número de notas da lista
double	 soma;         // Soma das notas
double   media,        // media das notas
	     soma2,        // soma dos
	     variancia,    // variança dos números
	     desvioPadrao; //

// pré: UmFloat[1]\n UmFloat[2]\n ... \n UmFloat[n]\n && n > 0

// Passo 1. Leia a entrada
// Passo 1.1. Leia o número de notas
   scanf("%d", &num);
// Passo 1.2. Leia as notas
   for (int i = 0; i < num; i++){
      scanf("%lf", &notas[i]);
   }
// Passo 2. Calcule a média das notas
// Passo 2.1. Inicialize a soma
   soma = 0.0;
// Passo 2.2. Compute a soma
   for(int i=0; i < num; i++){
       soma = soma + notas[i];
   }
// Passo 2.3. Compute a media
   media = soma / num;
// Passo 3. Calcule a Variancia
// Passo 3.1. Inicialize soma2
   soma2 = 0;
// Passo 3.2. Calcule a soma dos quadrados das diferença das notas com as médias
   for(int i = 0; i<num; i++){
       soma2 = pow((notas[i] - media), 2) + soma2;
   }
// Passo 3.3. Calcule a variancia
   variancia = soma2 / num;
// Passo 4. Calcule o desvio padrão
   desvioPadrao = sqrt(variancia);
// Passo 5. Imprima os resultados
   printf("\nMédia         = %6.2f\n", media);
   printf("Variância     = %6.2f\n", variancia);
   printf("Desvio Padrão = %6.2f\n", desvioPadrao);

   return 0;

// pós: soma == para i em {1,...,n}: UmFloat[i] &&
//      soma2 == para i em {1,...,n}: UmFloat[i]*UmFloat[i] &&
//      num_notas == n && media == soma/(float)num_notas &&
//      varianca == soma2/(float)num_notas - media*media &&
//      desvioPadrao == sqrt(varianca)
} // fim da função principal
