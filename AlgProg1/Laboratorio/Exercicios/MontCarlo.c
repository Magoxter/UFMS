// Programa: areamontecarlo.c
// Programador: Willian Xavier
// Data: 19/09/2016
// O Diálogo: Programa para calcular a área sob o gráfico de uma função f
// usando o método de Monte Carlo. O método de Monte Carlo consiste em
// lançar q dardos numa dada região e contar os que acertaram uma
// subregião. No nosso caso consideramos o retângulo com base [a, b]
// e altura m, onde f(x) <= m para todos x em [a, b]. Considere a
// área nesse retângulo delimitada pela curva da função f(x).
// O método consiste em contar o número total p que acertam a região
// que fique abaixo (incluindo a curva) da função y = f(x). Para um
// número grande de lançamentos, temos que a proporção p/q é
// aproximadamente igual a área sob a curva dividida pela área total
// do retângulo.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<stdlib.h> // srand, rand
#include<time.h> // time

// Declaração das funções locais
double areaMontecarlo(double, double, double, int);
double f(double);
void imprimeResultado(int, double);

// início da função principal
int main(void) {
// Declaração das variáveis locais
int       n;            // número de lançamentos
double    a,b,          // pontos inicial e final do intervalo
          m,            // máximo da função
          area;         // valor da área aproximada

// pré: UmFloat1 UmFloat2 UmFloat3 UmUInt && UmFloat1 == a && UmFloat2 == b &&
//      UmFloat3 == m && UmUInt == n

// Passo 1. Leia os valores da entrada
// Passo 1.1. Leia o valor do limite inferior do intervalo
   printf("Entre com o valor de a: ");
   scanf("%lf", &a);
// Passo 1.2. Leia o valor do limite superior do intervalo
   printf("Entre com o valor de b: ");
   scanf("%lf", &b);
// Passo 1.3. Leia o valor máximo da função no intervalo
   printf("Entre com o valor de m: ");
   scanf("%lf", &m);
// Passo 1.4. Leia o número de lançamentos do dardo
   printf("Entre com o valor de n: ");
   scanf("%d", &n);
// Passo 2. Calcule área sob a curva

// Passo 3. Imprima o valor da área


   return 0;

// pós: area && area = intervalo * m * (hits/n)
} // fim da função main

// implementação das funções

// Função: areaMontecarlo
// Programador:
// Data: 12/10/2011
// O Diálogo: Esta função recebe os valores do intervalo [a,b] e n (número
// de lançamentos do dardo) e usando geração de números aleatórios
// simula o lançamento dos dardos e calcula uma aproximação da área sob
// a curva y = f(x) usando o método de Monte Carlo.
double areaMontecarlo(double a, double b, double m, int n) {
// declaração das variáveis locais
int    i,
       hits,       // número de acertos na região abaixo da curva
       intervalo;  // intervalo onde os números devem ser gerados
double x, y,       // coordenadas aleatórias geradas no lançamento do dardo
       area;       // área aproxiamada sob a curva

// Passo aM.1. Inicialize as variáveis
   area = 0.0;
   hits = 0;
// Passo aM.2. Calcule o intervalo [a,b]
   intervalo = b - a;
// Passo aM.3. Gere a semente
   srand(time(NULL));
//   srand(997);
// Passo aM.4. Simule n lançamentos do dardo

// Passo aM.4.1. Calcule as coordenadas (x,y) para o dardo
      x = (double) rand() / RAND_MAX;
      x =  // coloque o valor no intervalo dado
      y =
      y =  // coloque o valor no intervalo dado
//      printf("%f %f\n", x, y);
// Passo aM.4.2. Verifique a região que o dardo acertou
      if (y <= f(x))
         hits++;
   } // fim for
// Passo aM.5. Compute a área aproximada
   area = ((double) hits/ (double) n) * intervalo * m;
// Passo c.6. Retorne o valor aproxiamdo da área
   return area;

// pós: area && area = intervalo * m * (hits/n)
} // fim da função areaMontecarlo

// Função: imprimeresultado
// Programador:
// Data: 12/10/2011
// O Diálogo: Esta função imprime o valor da aproximado da área
// usando n lançamentos de dardo
void imprimeResultado(int n, double area) {
// pré: UmInt, UmFloat1

// Passo i.1. Imprima o valor da área usando n lançamentos de daro
   printf("A área aproximada usando %d lançamentos é %f\n", n, area);

   return;

// pós: Um MSG
} // fim da função imprimeResultado

// Função: f
// Programador:
// Data: 10/10/2010
// O Diálogo: Esta função calcula o valor da função f(x) = x*x + 1 para os
// valores de x e retorna o valor da função.
double f(double x) {
// declaração das variáveis locais
double valor;       // Valor da função no ponto x

// pré: UmFloat && UmFloat == x

// Passo f.1. Calcule o valor de f no ponto x
   valor = x * x + 1.0;
// Passo f.2. retorne o valor da função no ponto x
   return valor;

// pós: valor == UmFloat * UmFloat + 1
} // fim da função f
