// Programa: notas.c
// Programador: Willian Xavier
// Data: 27/07/2016
// O Diálogo: Este programa lê uma lista de notas, computa a média da notas,
// a maior e a menor nota. As notas são lidas até que o final de arquivo
// seja atingido ou uma nota negativa seja digitada. O programa imprime
// a maior, a menor nota e a média das notas. O final de arquivo é dado por
// EOF (End Of File). Quando digitado pelo teclado, no UNIX é dado por (ctrl-D).
// Declaração das Bibliotecas utilizadas
#include<stdio.h> // scanf, printf

// Início da função principal
int main(void) {
// Declaração das variáveis locais
unsigned int numnotas;       // número de notas
float        nota,           // nota sendo lida
             maiornota,      // maior nota da lista
             menornota,      // menor nota
             somanotas,      // somanotas
             medianotas;     // média das notas

// pré: L = {UmFloat[1],...,UmFloat[n]} && n > 0
//      para i em {1,...,n}: UmFloat[i] >= 0.0 && UmFloat[i] <=10.0

// Passo 1. Incialize maiornota, menornota e somanotas
   maiornota = 0.0;
   menornota = 10.0;
   somanotas = 0.0;
   numnotas = 0;

// Passo 2. Repita até ler uma nota negativa ou chegar no final de arquivo
    printf("Nota (ctrl-D para finalizar ou nota negativa):  ");

// Passo 2.1. Leia uma nota
   while (scanf("%f", ¬a) != EOF && nota >= 0.0) {

// Passo 2.2. Calcule a maior nota
    if (nota > maiornota)
        maiornota = nota;

// Passo 2.3. Calcule a menor nota
    if (nota < menornota)
        menornota = nota;

// Passo 2.4. Compute a soma das notas
    somanotas = somanotas + nota;

// Passo 2.5. Incremente o número de notas lidas
    numnotas++;

// Passo 2.6. Pergunte se o usuário tem mais notas a serem lidas
      printf("Nota (ctrl-D para finalizar):  ");
   } // fil while

// Passo 3. Calcule a média das notas
    medianotas = somanotas / numnotas;

// Passo 4. Imprima os resultados
   printf("A maior nota da lista é = %4.1f\n", maiornota);
   printf("A menor nota da lista é = %4.1f\n", menornota);
   printf("A média das notas da lista é = %4.1f\n", medianotas);

   return 0;

// pós: maiornota == max i em {1,...,n}: nota[i] && n > 0 &&
//      menornota == min i em {1,...,n}: nota[i] && n > 0 &&
//      medianota == (soma i em {1,...,n}: nota[i])/n && n > 0
} // Fim da função principal
