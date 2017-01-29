// Programa: areamontecarlo.c
// Programador: Willian Xavier
// Data: 29/07/2016
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
              areaA;         // valor da área aproximada
    int       hits,       // número de acertos na região abaixo da curva
              intervalo;  // intervalo onde os números devem ser gerados
    double    x, y,       // coordenadas aleatórias geradas no lançamento do dardo
              area;       // área aproxiamada sob a curva

// pré: UmDouble1 UmDouble2 UmDouble3 UmUInt && UmDouble1 == a &&
//      UmDouble2 == b && UmDouble3 == m && UmInt == n

// Passo 1. Leia os valores da entrada

// Passo 1.1. Leia o valor do limite inferior do intervalo
//   printf("Entre com o valor de a: ");
   scanf("%lf", &a);

// Passo 1.2. Leia o valor do limite superior do intervalo
//   printf("Entre com o valor de b: ");
   scanf("%lf", &b);

// Passo 1.3. Leia o valor máximo da função no intervalo
//   printf("Entre com o valor de m: ");
   scanf("%lf", &m);

// Passo 1.4. Leia o número de lançamentos do dardo
//   printf("Entre com o valor de n: ");
   scanf("%d", &n);

// Passo 2. Calcule área sob a curva

// Passo 2.1. Inicialize as variáveis
    area = 0.0;
    hits = 0;

// Passo 2.2. Calcule o intervalo [a,b]
    intervalo = b - a;

// Passo 2.3. Gere a semente
    srand(997);

// Passo 2.4. Simule n lançamentos do dardo
    for (int i = 0; i < n; i++) {

// Passo 2.4.1. Calcule as coordenadas (x,y) para o dardo
        x = (double) rand() / RAND_MAX; // gere um número real aleatório entre [0,1]
        x = x * intervalo + a; // coloque o número no intervalo [a, b]
        y = (double) rand() / RAND_MAX; // gere um número real aleatório entre [0,1]
        y = y * m; // coloque o número no intervalo [0, m]

// Passo 2.4.2. Verifique a região que o dardo acertou
        if (y <= x*x + 1.0)
            hits++;
   } // fim for

// Passo 2.5. Compute a área aproximada
    area = ((double) hits/ (double) n) * intervalo * m;

// Passo 3. Imprima o valor da área
    printf("A área aproximada usando %d lançamentos é %f\n", n, area);

   return 0;

// pós: area && area = intervalo * m * (hits/n)
} // fim da função main
