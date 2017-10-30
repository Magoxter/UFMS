// Programa: mdcmmc.c
// Programador:
// Data: 13/09/2016
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<math.h>

// Declaração das funções
int mdcf(int, int);
int mmcf(int, int, int);

int main(void) {
// Declaração das variáveis
int a, b;
int mdc, mmc;
int n;
scanf("%d", &n);
for(int i = 0; i < n; i++) {
// Passo 1. Leia dois inteiros a e b
   scanf("%d %d", &a, &b);
// Passo 2. Calcule o mdc e o mmc entre a e b
// Passo 2.1. Verifique se os números são ambos iguas a zero
   if((a == 0) && (b == 0)) {
    printf("Os dois inteiros nao podem ser iguais a 0.\n");
   }
// Passo 2.2. Compute o mdc e o mmc entre a e b
   else {
    mdc = mdcf(a, b);
    mmc = mmcf(a, b, mdc);
// Passo 2.2.1. Imprima os resultados
   printf("%d %d\n", mdc, mmc);
   }
}
   return 0;
} // fim main

// Implementação das funções
// Função: mdcf.c
int mdcf(int a, int b) {
// Declaração das variáveis
int resto;

// Passo mdf.1. Calcule o valor abasoluto de a e b
   a = fabs(a);
   b = fabs(b);
// Passo mdf.2. Verifique se b == 0
   if(b == 0) {
    return a;
   }
// Passo mdf.3. Calcule o mdc
   else {
    resto = a%b;
    while(resto != 0) {
        a = b;
        b = resto;
        resto = a%b;
    } // fim while
   } // fim if
// Passo mdf.4. Retorne o mdc
   return b;
} // fim da função mdcf

// Função mmcf.c
int mmcf(int a, int b, int mdc) {
// Declaração das variáveis
int mmc;
// Passo mm.1. Calcule o mmc
   mmc = fabs(a*b)/mdc;
// Passo mm.2. Retorne o mmc
   return mmc;
} // fim da função mmcf
