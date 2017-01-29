// Programa: notasordap.c
// Programador: Willian Xavier
// Data: 17/06/2016
// Este programa lê três notas de uma prova, ordena em ordem
// não decrescente e imprime os resultados.

// Bibliotecas Utilizadas
    #include<stdio.h> // printf, scanf

// início da função principal
    int main(void) {

// Declaração das variáveis locais
    float nota1, nota2, nota3; // Notas da prova
    float aux;

// pré: for i = {1, 2, 3}, nota[i], | 0.0 =< nota[i] <= 10.0

// Passo 1. - Leia as Notas
//    printf("Entre com a Nota1: ");
    scanf("%f", ¬a1);
//    printf("Entre com a Nota2: ");
    scanf("%f", ¬a2);
//    printf("Entre com a Nota3: ");
    scanf("%f", ¬a3);

// Passo 2. Ordene as Notas
// Passo 2.1 Menor nota em nota1
    if ((nota1 >= nota2) || (nota1 >= nota3)) {
        if (nota2 <= nota3){
            aux = nota1;
            nota1 = nota2;
            nota2 = aux;
    }
        else {
            aux = nota1;
            nota1 = nota3;
            nota3 = aux;
    }

    }

// Passo 2.2 Segunda menor nota em nota2
    if (nota2 >= nota3) {
        aux = nota2;
        nota2 = nota3;
        nota3 = aux;
    }

// Passo 3. - Imprima os resultados
    printf("%.2f, %.2f, %.2f\n", nota1, nota2, nota3);

   return 0;

// pós: for i = {1, 2, 3}, nota[i], | nota[1] <= nota[2] <= nota[3]
} // fim
