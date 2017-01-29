// Programa: areasimp1ff.c
// Programador: Willian Xavier
// Data: 19/09/16
// O Diálogo: Programa para calcular a área sob o gráfico de uma função
// f(x) no intervalo [a,b] usando o método de Simpson. O número de subintervaloes
// é um número par.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
// Declaração das funções
double calculaAreaSimp(double, double, int);
double f(double);
void imprimeResultado(int, double);

// início da função principal
int main(void) {
// declaração das variáveis locais
int    n;            // número de subintervalos a serem usados
double a,b,          // pontos inicial e final do intervalo
       area;         // valor da área aproximada

// pré: UmFloat1 UmFloat2 UmUInt

// Passo 1. Leia a entrada
// Passo 1.1. Leia o valor do limite inferior
   printf("Entre com o valor de a: ");
   scanf("%lf", &a);
// Passo 1.2. Leia o valor do limite superior
   printf("Entre com o valor de b: ");
   scanf("%lf", &b);
// Passo 1.3. Leia o número de subintervalos
   printf("Entre com o valor de n (par): ");
   scanf("%d", &n);
// Passo 2. Calcule área

// Passo 3. Imprima o valor da área


   return 0;

// pós: deltaX = (b - a)/n && area == deltaX/3 * [f(x0) + 4f(x1) + 2f(x2)
//      + 4f(x3) + 2f(x4) + ... + 2f(xn-2) + 4f(xn-1) + f(xn)]
} // fim da função principal

// implementação das funções

// Função: calculaAreasimp
// Programador:
// Data: 03/11/2011
// Esta função calcula a área sob uma função y = f(x) usando o
// médodo dos trapézios
double calculaAreaSimp(double a, double b, int n) {
// declaração das variáveis locais
double  deltaX,   // comprimento de cada um dos subintervalos
        altura,   // valor da área aproximada
        x,        // ponto médio de cada um dos subintervalos
        areaSimp; // área de cada trapézio
int     coef;

// pré: UmFloat1 UmFloat2 UmUInt && UmFloat1 == a && UmFloat2 == b &&
//      UmUInt == n

// Passo cA.1. Calcule o tamanho do subintervalo

// Passo cA.2. Inicialize o valor da altura no ponto a

// Passo cA.3. Inicialize o valor do coeficiente de f(x)

// Passo cA.4. para i em {a+1,...,b-1} passo deltaX faça

// Passo cA.4.1. Adicione a altura no ponto x

// Passo cA.4.2. Calcule o próximo coeficiente

// Passo cA.5. Adicione a altura no ponto b

// Passo cA.6. Calcule a área sub a curva

// Passo cA.7. retorne o valor da área
   return areaSimp;

// pós: deltaX = (b - a)/n && area == deltaX/3 * [f(x0) + 4f(x1) + 2f(x2)
//      + 4f(x3) + 2f(x4) + ... + 2f(xn-2) + 4f(xn-1) + f(xn)]
} // fim da função calcuaarea

// Função: f
// Programador:
// Data: 10/10/2010
// O Diálogo: Esta função calcula o valor da função f(x) = x*x + 1 para
// os valores de x e retorna o valor da função.
double f(double x) {
// declaração das variáveis locais
double valor;       // Valor da função no ponto X

// pré: UmFloat

// Passo f.1. Calcule o valor de f no ponto X
   valor = x * x + 1.0;
// Passo f.2. retorne o valor da função no ponto X
   return valor;

// pós: valor == x*x + 1
} // fim da função f

// Função: imprimeResultado
// Programador:
// Data: 03/11/2011
// Esta função imprime o valor da área sob a curva y = f(x) usando n
// subintervalos
void imprimeResultado(int n, double soma) {

// Passo ir.1.
//   printf("A área aproximada usando %d subintervalos é %12.8f\n", n, soma);
   printf("%d %.8f\n", n, soma);

   return;

} // fim da função imprimeresultado
