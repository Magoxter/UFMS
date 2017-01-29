// Programa: matradj.c
// Programador: Willian Xavier
// Data: 02/09/16
// Este programa lê o número de vértices de um dado digrafo, e as
// arestas (dadas por pares ordenados, o par 0 0 indica que final das
// arestas) e computa a matriz de adjacências do grafo (n x n).
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
// Declaração das constantes
#define MAX 20   // limita do número de linhas na matriz
// Declaração de tipos
typedef int matriz[MAX][MAX];

// declaração das funções
void matrizAdj(unsigned int, matriz, unsigned int*, unsigned int*);
void imprimeMatriz(unsigned int, unsigned int, matriz);

// início da função principal
int main(void) {
// declaração das variáveis locais
matriz       mat;               // matrizes a serem somadas
unsigned int vertices;
unsigned int linhas, colunas;   // dimensões das matrizes
int i, n;

// pré: UmUInt, G | para i,j em {1,...,vertices} && (i,j) é uma aresta de G

// Passo 1. Leia o número de vértices
   scanf("%u", &vertices);
// Passo 2. Leia o grafo e compute a matriz de adjacências
   matrizAdj(vertices, mat, &linhas, &colunas);
// Passo 3. Imprima a Matriz de adjacências
   imprimeMatriz(linhas, colunas, matriz);

   return 0;

// pós: para todo i em {1,...,n}: para todo j em {1,...,r}: (a[i][j] == 1
//      && (i, j) é uma aresta de G) || (c[i][j] == 0)
} // fim da função principal

// implementação das funções

// Função: matrizAdj
// Programador:
// Data: 21/11/2010
// O Diálogo: Função para computar a matriz de adjacências de uma dado digrafo
// G dado pelas suas arestas.
void matrizAdj(unsigned int vertices, matriz mat, unsigned int* m, unsigned int* n) {
// Declaração das variáveis locais
unsigned int i, j, u, v;      // índices da linha e coluna

// pré: UmMatriz UmUInt1 UmUInt2 UmUInt3

// Passo mA.1. Inicialize a matriz de adjacências
// Passo mA.1.1. Para i variando de 0 a vertices-1 faça
   for (i = 0; i < vertices; i++) { // variação linha
// Passo mA.1.2. Para j variando de 0 a vertices-1 faça
      for (j = 0; j < vertices; j++) { // variação coluna
// Passo mA.1.3. mat[i][j] = 0
         mat[i][j] = 0;
      } // fim for j
   } // fim for i
// Passo mA.2. Leia as arestas

// Passo mA.2.1. Armazene a aresta na matriz de adjacências

// Passo mA.3. Atribua as dimensões da matriz
   *m = vertices;
   *n = vertices;

   return;

// pós: para i,j em {0,...,vertices-1} mat[i][j] == 1 && (i+1,j+1) é uma
//      aresta de G ou mat[i][j] == 0

} // fim função leMatriz

// Função: imprimeMatriz
// Programador:
// Data: 16/12/96
// O Diálogo: Função para imprimir uma matriz Linhas X Colunas de inteiros.
void imprimeMatriz(unsigned int linhas, unsigned int colunas, matriz mat) {
// Declaração das variáveis locais
unsigned int i,j;      // índices da linha e coluna

// pré: UmMatriz UmUInt1 UmUInt2

// Passo IM.1. Imprima o cabeçalho
//   printf("Matriz: \n");
// Passo IM.2. Para i variando de 0 a Linhas-1 faça
   for (i = 0; i < linhas; i++) {
// Passo IM.2.1. Para j variando de 0 a Colunas-1 faça
      for (j = 0; j < colunas; j++) {
// Passo IM.2.1.1. Imprima Mat[i][j]
         printf("%3d ", mat[i][j]);
      }
// Passo IM.2.2. Mude de linha
      printf("\n");
   } // fim for i
// Passo IM.3. Imprima uma linha em branco
   printf("\n");

   return;

// pós: mat[i][j] == UmaMatriz[i][j] para i em {1,...,n} &&
//      para j em {1,...,m} && i == UmUInt1 && j == UmUInt2
} // fim função ImprimeMatriz
