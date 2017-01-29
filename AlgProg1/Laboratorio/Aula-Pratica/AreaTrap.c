// Programa: areatrap.c
// Programador: Willian Xavier
// Data: 29/07/2016
// Programa para calcular a área sob o gráfico de uma função
// f de x = a até x = b usando o método dos trapézios, e com o valor das
// funções escolhidas nos pontos médios de cada subintervalo.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<math.h>  // cos

// início da função principal
int main(void) {
// declaração das variáveis locais
int       n;            // número de subintervalos a serem usados
double    a,b;          // pontos inicial e final do intervalo
double    area;         // valor da área aproximada
double    deltaX,       // comprimento de cada um dos subintervalos
          x;            // ponto médio de cada um dos subintervalos
double    soma,
          areaTrap; // área pelo método dos trapézios

// pré: UmDouble1 UmDouble2 UmInt

// Passo 1. Leia os valores da entrada
// Passo 1.1. Leia o valor do limite inferior
   //printf("Entre com o valor de a: ");
   scanf("%lf", &a);
// Passo 1.2. Leia o valor do limite superior
   //printf("Entre com o valor de b: ");
   scanf("%lf", &b);
// Passo 1.3. Leia o número de subintervalos
  //printf("Entre com o valor de n: ");
   scanf("%d", &n);
// Passo 2. Calcule área usando o método dos trapézios
// Passo 2.1. Calcule o tamanho do subintervalo
    deltaX = (b - a)/n;
// Passo 2.2. Inicialize o valor da soma
   soma = (cos(a) + cos(b))/2.0;
// Passo 2.3. para x em {a,...,b} passo DeltaX faça
    for(x = a+deltaX; x<b; x = x + deltaX)
    soma = soma + cos(x);
// Passo 2.3.1. Calcule a área do x-ésimo trapézio
    area = deltaX * soma;
// Passo 2.4. Compute o valor da soma
    soma = soma + cos(x);
// Passo 2.5. Compute o valor da área
    areaTrap = soma * deltaX;
// Passo 3. Imprima o valor da área
   printf("A área aproximada usando %d subintervalos é %14.8f\n", n, area);

   return 0;

// pós: area == ((Soma i em {0,...,n}: f(x[i+1]))+(f(x[0])+f(x[n])/2))*deltaX
//      && f(x[i]) == x[i]*x[i] + 1 && x[i] == x[i-1] + DeltaX &&
//      n == UmInt && x[0] == a&& x[n] == b &&
//      deltaX == (x[n] - x[0])/n
} // fim da função principal
