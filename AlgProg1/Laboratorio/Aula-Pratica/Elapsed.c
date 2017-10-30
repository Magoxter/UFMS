    /* Elapsed */
// Este Programa Le um Valor e o Deistribui em
// Horas, Minutos e Segundos

#include <stdio.h>

int main (void) {

// Variaveis
    int num,
        hor,
        min,
        seg;

// Leitura
    printf("Num: ");
    scanf ("%d", &num);

// Distribuicao do Valor
    hor = num%60;
    min = hor%60;
    seg = min%60;

// Apresentacao
    printf("\n%d:%d:%d\n", hor,min,seg);

    return 0;
}
