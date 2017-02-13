    /* MatriSim */
// Este Programa Verifica se Existem Alunos Cursando,
// Simultaneamente, as Disciplinas de AlgProg I e
// Introd a Sistemas Digitais. Existem Disponiveis,
// no Arquivo, os Numeros dos Alunos de AlgProg I
// (max 240 alunos) e no Arquivo de Introd a Sist Digitais
// (max 200 alunos). A Matricula dos Alunos que estiverem
// Cursando Simultaneamente dever ser Armazenadas

#include <stdio.h>

#define MAX 240

int main (void) {

// Variaveis
    int API[TAM] = {0},
        ISD[TAM] = {0},
        Simult[TAM] = {0};
    int tamAPI,
        tamISD,
        tamSim,
        tamLinha;

// Alunos AlgProg I
    scanf ("%d", &tamAPI);

    for (int i = 0; i < tamAPI; i++)
         scanf("%d", &API[i]);

// Alunos IntSistDig
    scanf("%d", &tamISD);

    for (int i = 0; i < tamISD)
         scanf("%d", &ISD[i]);

// Calculo dos Matriculados em Ambas Disciplinas
    tamSim = 0;

    for (int i = 0; i < tamSim; i++) {
         int k = 0;

        while (k < tamISD && API[i] != ISD[k])
               k++;

        if (API[i] == ISD[i]) {
            Simult[tamSim] = API[i];
            tamSim++;
        }
    }

// Apresentacao do Vetor
    int numImpresso = 0;

    for (int i = 0; i < tamSim; i++) {
         numImpresso++;
         printf("%5d", Simult[i]);

        if (numImpresso >= tamLinha) {
            printf("\n");
            numImpresso = 0;
        }
    }
      printf("\n");

// Inicializacao
    tamLinha = 10;

    return 0;
}
