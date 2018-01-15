    /* FuncVetor */
// Este programa lê um conjunto de números, calcula o maior, o
// menor número e a variação entre eles e imprime o resultado.
// O programa usa a função maiormenor para computar o maior,
// o menor número da lista.

#include<stdio.h> // printf, scanf

void MaiorMenor(int [], int);
int  varia(int,int);

int main(void) {

    int lista[100]; // lista de elementos
    int maximo,     // maior elemento da lista
        minimo,     // mínimo elemento da lista
        maior,      // maior
        menor,      // menor
        idmax,      // índice do elemento máximo
        idmin,      // índice do elemento mínimo
        variacao,   // variação
        proximo,
        tam;        // tamanho da lista
    int k;

// pré: tam,lista[0],lista[1],...,lista[tam-1]

// Passo 1. Leia a lista
// Passo 1.1. Leia o tamanho da lista
    scanf ("%d", &tam);

// Passo 1.2. Leia os elementos da lista
    for (int i = 0; i < tam; i++) {
        scanf ("%d", &lista[i]);
    }

// Passo 2. Compute o maior e o menor elemento da lista
    MaiorMenor(lista, tam);

// Passo 3. Compute a variação
    variacao = varia(maior,menor);

// Passo 4. Imprima os resultados
    printf(" [%d,%d] ", idmax, maior);
    printf("[%d,%d] ", idmin, menor);
    printf("%d\n", variacao);

   return 0;

// pós: maximo && maximo == max i em {0,...,tam-1}: lista[i]
//      minimo && minimo == min i em {0,...,tam-1}: lista[i]
} // fim

void MaiorMenor(int lista[], int tam) {

// Variaveis
    int maior,menor,
        idmax,idmin;

// Inicializacao
    maior = menor = lista[0];
    idmax = idmin = 0;

// Verificacao do Maior
    for (int i = 0; i < tam; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
            idmax = i;
        }
    }

// Verificacao do Menor
    for (int i = 0; i < tam; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
            idmin = i;
        }
    }

    return;
}

int varia(int maior, int menor) {

    return maior-menor;
}
