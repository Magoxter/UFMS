//.Programa: baseball.c
// Programador:
// Data: 15/11/2013
// Escreva um programa para simular 1000 vezes uma batida para um
// jogador de baseball utilizando as estatíticas do jogador e conte
// o número de outs, walks, singles e assim por diante, e calcule sua
// média de rebatidas ((número de batidas)/(1000 - número de walks)).
// Declaração das biliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<stdlib.h> // srand, rand, RAND_MAX
#include<time.h> // time

// início da função principal
int main(void) { 
// declaração das variáveis locais
int   out,     // fora
      walk,    // anda para a primeira base
      single,  // ganha uma base
      dupla,   // ganha duas bases
      triple,  // ganha três bases
      homerun; // ganha todas as bases
float x;           // número gerado
int   rebatidas;
float media;
int   semente;

// pré: vazio 

// Passo 1. Gere a semente
   scanf("%d", &semente);
   srand(semente);
// Passo 2. Inicialize as variáveis
   out = 0;
   walk = 0;
   single = 0;
   dupla = 0;
   triple = 0;
   homerun = 0;
// Passo 2. Gere 1000 números entre 0.0 e 1.0
   for (int j = 1; j <= 1000; j++)
   {
		x = (float)rand()/(float)RAND_MAX;// recebe um número real pseudo aleatório entre 0.0 e 1.0 
// printf("%f ", x * 100.0f);
// Passo 2.1. Classifique a rebatida
		if( x * 100.0f > 63.4)
		{
			if( x * 100.0f <= 63.4 + 10.3)
				walk++;
		}
		else
			out++;
// Passo 3. Calcule a média de rebatidas
	}

    media = (1000 - out - walk) / (float)( 1000 - walk );
// Passo 4. Imprima a média
//   printf("Média %.4f\n", media);
   printf("%.4f\n", media);

   return 0;

// pós: media das rebatidas. 
} // fim da função principal

