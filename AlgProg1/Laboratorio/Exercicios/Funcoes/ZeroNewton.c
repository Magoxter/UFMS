// Programa: zeronewton.c
// Programador: Willian Xavier
// Data: 19/09/2016
// O Diálogo: Programa para calcular o zero de uma dada função
// f usando o método de Newton. O programa usa funções para ler
// o valor da aproximação inicial x_0, para calcular um zero e
// para imprimir os resultados. A função f é dada no programa.
// É assumido que a função é diferenciável e possua pelo menos um
// zero.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<math.h>  // fabs()

// Declaração das funções
double zeroNewton(double, double);
void imprimeResultado(double);

// início da função principal
int main(void) {
// declaração das variáveis locais
double       a, aproxim,            // aproximação inicial
             raiz;                  // um zero para a função f

// pré: UmDouble1, UmDouble2

// Passo 1. Leia os valores da entrada
    scanf("%lf %lf", &a, &aproxim);
// Passo 2. Calcule um zero
   raiz = zeroNewton(a, aproxim);
// Passo 3. Imprima o zero da função
   imprimeResultado(raiz);

   return 0;

// raiz && f(raiz) == 0.0
} // fim da função principal

// implementação das funções

// Função: zeroNewton
// Programador:
// Data: 12/05/2012
// O Diálogo: Esta função calcula um zero da função f(x)
// no intervalo usando o método de Newton.
double zeroNewton(double x, double y) {
// declaração das variáveis locais
double       fx,    // valor da função na aproximação
             dfx,   // valor da derivada da função na aproximação
             x1;    // valor da nova aproximação

// pré: UmFloat1, UmFloat2

// Passo zN.1. Calcule os valores de f(x) - primeira aproximação
    fx = x*x - 3*x + 2;
// Passo zN.2. Calcule os valores de f´(x) - primeira aproximação
    dfx = 2*x - 3;
// Passo zN.3. Calcule o valor da nova aproximação
    x1 = x - fx / dfx;
// Passo zN.4. Enquanto |f(x_i)| > epsilon faça
    while (fabs(fx) > y) {
// Passo zN.4.1. Atualize o valor da aproximação
        x = x1;
// Passo zN.4.2. Compute os valores de f(x) e f´(x)
        fx = x*x - 3*x + 2;
        dfx = 2*x - 3;
// Passo zN.4.3. Calcule o valor da nova aproximação
        x1 = x - fx / dfx;
    }

    return x;

// pós: x && |x * x - 3 * x + 2| < epsilon
} // fim da função f

// Função: imprimeresultado
// Programador:
// Data: 12/10/2011
// O Diálogo: Esta função imprime um zero da função f
void imprimeResultado(double raiz) {
// pré: UmFloat1

// Passo i.1. Imprima o valor da raiz de f no intervalo [x,y]
   printf("%f\n", raiz);

   return;

// pós: Um MSG
} // fim da função imprimeresultado
