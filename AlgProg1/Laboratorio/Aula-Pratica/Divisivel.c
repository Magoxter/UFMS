    /* Divisivel */
// Este Programa Verifica se o Um Número eh Divisivel
// pelo Outro

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int  num1,
         num2;
    bool divisivel;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        divisivel = true;
        printf ("%d eh Divisivel por %d\n", num2, num1);
    }

    else {
        divisivel = false;
        printf ("%d nao eh Divisivel por %d\n", num2, num1);
    }

    return 0;
}
