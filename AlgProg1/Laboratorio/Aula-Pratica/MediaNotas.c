// Programa: medianotas.c
// Programador: Willian Xavier
// Data: 10/06/2016
// O Diálogo: Este programa calcula a média final de um aluno para
// um curso com o total de três provas e dois trabalhos. As
// provas compõe 75% da nota da prova e os trabalhos 25%.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // printf, scanf

// inicio da função principal
int main(void) {
// Declaração das Variáveis locais
double prova1;            // nota primeira prova
double prova2;            // nota segunda prova
double prova3;            // nota terceira prova
double mediaProvas;       // média das notas das provas
double trabalho1;         // nota do trabalho 1
double trabalho2;         // nota do trabalho 2
double mediaTrabalhos;    // média das notas dos trabalhos
double mediaFinal;        // média final do aluno

// pré: prova1, prova2, prova3, trabalho1, trabalho2

// Passo 1. Leia a entrada
// Passo 1.1. Leia as notas das provas.
   printf("============== PROVAS ==============\n");
   printf("Entre com a nota da primeira prova: ");
   scanf("%lf", &prova1);
   printf("Entre com a nota da segunda prova:  ");
   scanf("%lf", &prova2);
   printf("Entre com a nota da terceira prova: ");
   scanf("%lf", &prova3);

// Passo 1.2. Leia as notas dos trabalhos.
   printf("============== TRABALHOS ==============\n");
   printf("Entre com a nota do primeiro trabalho: ");
   scanf("%lf", &trabalho1);
   printf("Entre com a nota do segundo trabalho:  ");
   scanf("%lf", &trabalho2);
   printf("\n");

// Passo 2. Calcule a média da disciplina
// Passo 2.1. Calcule a média das provas
    mediaProvas = (prova1 + prova2 + prova3) / 3.0;

// Passo 2.2. Calcule a média dos trabalhos
    mediaTrabalhos = (trabalho1 + trabalho2) / 2.0;

// Passo 2.3. Calcule a média final
    mediaFinal = (mediaProvas + mediaTrabalhos) / 2.0;

// Passo 3. Imprima os resultados
   printf("Primeira Prova    %4.1f\n", prova1);
   printf("Segunda Prova     %4.1f\n", prova2);
   printf("Terceira Prova    %4.1f\n", prova3);
   printf("Média Provas      %4.1f\n\n", mediaProvas);

   printf("Primeiro Trabalho %4.1f\n", trabalho1);
   printf("Segundo Trabalho  %4.1f\n", trabalho2);
   printf("Média Trabalhos   %4.1f\n", mediaTrabalhos);

   printf("---------------------\n");
   printf("Média Final       %4.1f\n", mediaFinal);

   return 0;

// pós: mediaFinal = 0.75*mediaProvas + 0.25*mediaTrabalhos &&
//      mediaProva == (prova1 + prova2 + prova3) / 3.0 &&
//      mediaTrabalhos == (trabalho1 + trabalho2) / 2.0
} // fim da função principal
