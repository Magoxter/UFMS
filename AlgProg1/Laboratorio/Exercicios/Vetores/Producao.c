// Programa: producao.c
// Programador: Willian Xavier
// Data: 03/08/16
// Este programa le a produção semanal de álcool de uma dada usina e
// calcula e imprime a soma da produção da semana.

// Bibliotecas
    #include<stdio.h> // printf, scanf

// Funcao Principal
    int main(void) {

// Variaveis
    double producao[7];
    double total;

// Inicializacao do Total
    total = 0.0;

// Passo 1. Leia o vetor produção
    for (int i = 0; i < 7; i++) {
         scanf ("%lf", &producao[i]);

// Passo 2. Calcule a soma do vetor
         total = total + producao[i];
    }

// Passo 3. Imprima a produção da semana
    printf ("%lf", total);

   return 0;
} // fim da função principal
