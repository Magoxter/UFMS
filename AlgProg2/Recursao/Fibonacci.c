    /* Fibonacci */
// Sequencia Fibonacci por Recursao

#include<stdio.h>

int fibonacci (int);

int main (void) {

    int num;

    scanf ("%d", &num);

    printf("%d\n", fibonacci(num));

    return 0;
}

int fibonacci (int n) {

    if (n < 3)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
