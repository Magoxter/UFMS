    /* Potencia */
// Este Programa Calcula a Potencia de x^n de Maneira mais Eficiente.
// Observa-se 1º que se n eh uma Potencia de 2 entao x^n pode ser
// Computada usando Sequencia de Quadrados. Por Exemplo, x^4 eh o
// Quadrado de x^2, e assim x^4 pode ser Computado usando somente
// 2 Multiplicacoes ao inves de 3.
// Esta Tecnica pode ser Usada mesmo quando n nao eh uma Potencia
// de 2, usando a seguinte Formula...

/*
         | 1            , se n = 0;
    x^n < (x^(n/2))^2   , se n = par;
         | x.x^(n-1)    , se n = impar;
*/

#include <stdio.h>
#include <math.h>

int potencia (int,int);

int main() {

    int n,x;

    scanf ("%d", &x);
    scanf ("%d", &n);

    printf("\n%d\n", potencia(x,n));

    return 0;
}

int potencia(int x, int n) {

    if (n == 0)
        return 1;
    else {
        if (n % 2 == 0)
            return x * potencia(x, n-1);
        else
            return x * potencia(x, n/2);
    }
}
