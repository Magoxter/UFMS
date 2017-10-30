    /* EhMaior */

#include <stdio.h>
#include <math.h>

int main (void) {

// Variaveis
    int num1,
        num2,
        num3,
        maior;

// Leitura
    scanf ("%d", &num1);
    scanf ("%d", &num2);
    scanf ("%d", &num3);

// Computacao do Maior
    maior = (num1+num2+abs(num1-num2))/2;

// Apresentacao
    printf("%d eh o maior\n", maior);

    return 0;
}
