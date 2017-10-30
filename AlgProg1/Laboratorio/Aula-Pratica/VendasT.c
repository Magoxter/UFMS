// Programa: vendastotal.c
// Programador:
// Este programa lê uma tabela de vendas de automóveis e uma lista com os
// valores de vendas dos automóveis e calcula o valor total das vendas
// de cada vendedor e o total de vendas de todos os vendedores.
// Declaração das bibliotecas utilizadas
#include<stdio.h>    // scanf, printf
// Declaração das constantes globais
#define MAX 25
// Declaração dos tipos
typedef int Tabela[MAX][MAX];

// declaração das funções
void calcTotVendas(Tabela,  int,  int, double a[], double b[]);

// início da função principal
int main(void) {
// declaração das variáveis locais
 int     linhas,        // número de linhas (vendedor) na tabela de vendas
         colunas;       // número de colunas (modelos) na tabela de vendas
Tabela   vendas;        // tabela de vendas
double    valores[MAX];  // preços dos automóveis
double   totais[MAX+1];   // valor total de vendas de cada vendedor
int n;

// pré: linhas, colunas, vendas, valores

// Passo A. Leia o número de execuções
scanf("%d", &n);
// Passo B. Repita k veze
for(int l = 0; l < n; l++) {
// Passo 1. Leia a tabela de vendas em uma matriz vendas m X n e os valores
//Passo 1.1. Leia o nuemro de linhas e colunas da tabela
    scanf("%d %d", &linhas, &colunas);
//Passo 1.2. Leia a tabela, linha a linha
    for(int vendedor = 0; vendedor < linhas; vendedor++){
//Passo 1.2.1. Leia  os veiculos vendidos pelo vendedor
        for (int modelos = 0; modelos < colunas; modelos++){
            scanf("%d", &vendas[vendedor][modelos]);
        }
    }
//Passo 1.3. Leia ao valor de venda dos modelos dos veiculos
    for (int modelos = 0; modelos < colunas; modelos++){
        scanf("%lf", &valores[modelos]);
    }
// Passo 2. Calcule os valores totais de vendas de cada vendedor e da revenda.
   calcTotVendas(vendas, linhas, colunas, valores, totais);
// Passo 3. Imprima o array Vendas com cabeçalhos apropriados.
//Passo 3.1. Imprima o total de vendas de cada vendedor
    for(int vendedor = 0; vendedor < linhas; vendedor++){
        printf("%5d R$%12.2f\n",vendedor+1, totais[vendedor]);
    }//fim for
//Passo 3.2. Imprima o total da revenda
    printf("Total R$%12.2f\n\n", totais[linhas]);

 }

   return 0;

// pós: para i em {0,...,linhas}: totais[i]
} // fim da função principal

// implementação das funções
// Função: calcTotVendas
// Programador:
// Data: 24/02/2013
// Função para calcular a multiplicação de cada linha da tabela
// de vendas pelo vetor dos valores dos automóveis (produto interno).
// Cada um desses valores indica os valores da vendas totais para cada um
// dos vendedores. A função computa também o valor total das vendas da
// revenda
void calcTotVendas(Tabela vendas,  int linhas,  int colunas,
                   double valores[MAX], double totais[MAX]) {
// declaração das variáveis locais

// pre: input == UmaTabela UmUInt UmUInt

// Passo cTV.1. Incicilize o total de vendas da revenda
    totais[linhas] = 0.0;
// Passo cTV.2. Para vendedor variando de 0 a linhas-1 faça
    for(int vendedor = 0; vendedor < linhas; vendedor++){
// Passo cTV.2.1. Inicialize TotalLin
        totais[vendedor] = 0.0;
// Passo cTV.2.2. Para modelo variando de 0 a colunas-1 faça
        for (int modelos = 0; modelos < colunas; modelos++){
// Passo cTV.2.2.1. Calcule o valor total de vendas de cada vendedor
            totais[vendedor] = totais[vendedor] + vendas[vendedor][modelos] *
            valores[modelos];
        }// fim for modelo

//      printf("Vendas do vendedor  %3u:%5u\n", vendedor + 1, totais[vendedor]);
        totais[linhas] = totais[linhas] + totais[vendedor];

// Passo cTV 2.3. Armazene o total de vendas da revenda

   } // fim for vendedor

   return;

// pós: totais[i] == total &&
//      total == para i em {0,...,linhas-1}: (Soma j em {0,...,colunas-1}:
//      vendas[i][j]*valores[j]) && totais[linhas] ==
//      Soma i em {0,..., linhas-1}: totais[i]
} // fim da função calcTotVendas
