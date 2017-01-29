// Programa: vendas.c
// Programador: Willian Xavier
// Data: 10/09/2016
// Este programa lê uma tabela (l x c) com as vendas de m vendedores
// para cada um dos n itens comercializados e um vetor com os valores
// de venda para os n produtos. O programa calcula e imprime a
// o total vendido por cada vendedor, a comissão obtida por cada um
// deles e o salário semanal de cada vendedor.

/* Colunas:              /* Linhas:
 . Produtos Vendidos;     . Vendedores;
 */

// Bibliotecas
    #include <stdio.h>

// Funcao Principal
    int main (void) {

// Variaveis
    double  precos[100],
            salarioFunc[100],
            comissao;
    int     vendas[100][100],
            linhas,vendedores,
            colunas,produtos;
    int     l,i,n,c,k;

// Dimensoes
    scanf ("%d", &vendedores);
    scanf ("%d", &produtos);

    linhas = vendedores;
    colunas = produtos;

    for (l = 0; l < linhas; l++)
        for (c = 0; c < colunas; c++)
             scanf("%d", &vendas[l][c]);

// Vetor Precos
    for (i = 0; i < produtos; i++)
         scanf("%lf", &precos[i]);

// Salario Funcionario
    for (l = 0; l < linhas; l++) {
         comissao = 0;
        for (c = 0; c < colunas; c++) {
             comissao = comissao + (double) vendas[l][c] * precos[c];
        }
      comissao = comissao / 10.0;
      salarioFunc[l] = 200.0 + comissao;
    }

// Apresentacao
    for (l = 0; l < linhas; l++) {
             printf(" %d%8.2f\n", l+1, salarioFunc[l]);
    }

    return 0;

    }
