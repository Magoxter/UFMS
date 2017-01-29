// Programa: cubofunc.c
// Programador: Willian Xavier
// Data: 19/09/16
// Este programa lê um número float e imprime seu cubo com duas casa
// decimais.

#include<stdio.h>
#include<math.h>

float getNum  (void);
float cubof   (float x);
void  printOne(float, float);

int main(void) {

// Variaveis
    float a;
    float b;

// pré: UmFloat && UmFloat == a

// Passo 1. Leia o número float
    a = getNum();

// Passo 2. calcule o cubo do número lido
    b = cubof(a);

// Passo 3. Imprima o quadrado do número
   printOne(a, b);

   return 0;

// pós: b && b == a*a*a
} // fim da função principal

// Implementação das funções

// Função: getnum.c
// Programador:
// Data: 20/10/2013
// Esta função lê e retorna um número inteiro do dispositivo de
// entrada padrão
float getNum(void) {
// declaração das variáveis locais
float numfloat;

// pré: UmInt && UmInt == numInt
// Passo gN.1. Leia o número
 //  printf("Entre com um número para que seu cubo seja calculado: ");
   scanf("%f", &numfloat);
// Passo gN.2. Retorne o valor lido
   return numfloat;

// pós: numfloat
} // fim da função getNum

// Função: cubo.c
// Programador:
// Data: 20/10/2013
// Esta função recebe um número float e computa e retorna o
// cubo do número recebido.
float cubof(float x) {
// declaração das variáveis locais
float cubo;

// pré: UmFloat && UmFlaot == x

// Passo s.1. calcula e o cubo de x
    cubo = pow(x,3);
// Passo s.2. retorna o cubo de x
    return cubo;

// pós: cubo == x*x*x
} // fim da função cubo

// Função: printOne.c
// Programador:
// Data: 20/10/2013
// Esta função recebe um número float e o cubo do número e imprime
// com mensagens apropriadas (duas casas decimais).
void printOne(float x, float y) {

// pré: UmFloat1 UmFloat2 && UmFloat1 == x UmFloat2 == y

// Passo pO.1. Imprima um inteiroinstruções
    printf ("O cubo de %.2f é: %.2f", x, y);

// pós: x y
} // fim da função printOne
