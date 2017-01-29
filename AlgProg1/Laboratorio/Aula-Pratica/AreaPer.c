// Programa: areaperimetroQ.c
// Programador: Willian Xavier
// Data: 03/06/2016
// Diálogo: Este le o valor do lado de um quadrado e calcula o
// perímetro e a área do quadrado e imprime o resultado.
// Bibliotecas Utilizadas
#include<stdio.h> // printf
// início da função principal
int main(void) {
// declaração das variáveis locais
double lado;
double perimetro;
double area;

// pré: UmUInt && UmUInt > 0 UmUInt == lado

// Passo 1. Leia o lado do quadrado
   printf("\nPor favor entre com o valor do lado do quadrado: ");
   scanf("%lf", &lado);

// Passo 2. Calcule o perímetro
    perimetro = 4*lado;

// Passo 3. Calcule a área
    area = lado*lado;

// Passo 4. Imprima o lado, perímetro e área
   printf("%.2f\n", lado);
   printf("%.2f\n", perimetro);
   printf("%.2f\n", area);

   return 0;

// pós: perímetro == 4 * lado && área == lado * lado
} // fim da função principal
