    /* Ciclo */
// Esta Funcao gera uma Sequencia de Numeros,
// Comecando por um dado Inteiro n. Possuindo
// as Seguintes Regras...

/* n == par:
 . divida por 2;
 */

/* n == impar:
 . multiplique por 3;
 . some 1;
 */

// Este Processo se Repete com o Novo Valor para n
// Terminando apenas quando n for Igual a 1.
// Exemplo... n = 22
//      22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
// Para uma Entrada n, o Comprimento do Ciclo de n
// eh o Numero de Elementos Gerados na Sequencia.
// No Exemplo o Comprimento do Ciclo de 22 eh 16.

#include <stdio.h>
#include <stdbool.h>

int ciclo (int);

int main () {

    int n;

    scanf ("%d", &n);

    printf("%d\n", ciclo(n));

    return 0;
}

int ciclo (int n) {

    if (n == 1)
        return n;
    else {
        if (n % 2)
            return 1 + ciclo(n*3+1);
        else
            return 1 + ciclo(n/2);
    }
}
