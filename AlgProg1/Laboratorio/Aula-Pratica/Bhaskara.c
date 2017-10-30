    /* Bhaskara */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (void) {

// Variaveis
    int  delta,
         a,b,c,
         X1,X2;
    bool equacao;

// Leitura
    printf("Ax\1362 + Bx + C = 0\n");
    printf("A = ");
    scanf ("%d", &a);
    printf("B = ");
    scanf ("%d", &b);
    printf("C = ");
    scanf ("%d", &c);

// Delta
    delta = pow(b,2) - 4 * a * c;
    equacao = true;

    if (delta < 0)
        equacao = false;

    if (delta >= 0) {

// Bhaskara
        X1 = (-b + sqrt(delta)) / 2 * a;
        X2 = (-b - sqrt(delta)) / 2 * a;
    }

// Apresentacao
    printf("\n");

    if (!equacao)
        printf("\nDelta Negativo...\nEsta Equacao nao Possui Resolucao\n");
    else {
        printf("X1 = %d\n", X1);
        printf("X2 = %d\n", X2);
    }

    return 0;
}
