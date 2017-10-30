    /* Soma */
#include <stdio.h>

int leia(void);
void print(int);

int main (void) {

    int num1,
        num2,
        soma;

    num1 = leia();
    num2 = leia();

    soma = num1 + num2;

    print(soma);

    return 0;
}

int leia(void) {

    int num;

    scanf("%d", &num);

    return num;
}

void print(int soma) {

    printf("%d\n", soma);

    return;
}
