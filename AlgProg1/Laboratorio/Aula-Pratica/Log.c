#include<stdio.h>

// Funções
int piso_log2(int);

int main(void)
{
    int i, n;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int num;
        int pisolog2;

        // Leia o número
        scanf("%d", &num);

        // Calcule o piso do logaritmo
        pisolog2 = piso_log2(num);

        // Imprima o resultado
        printf("%d\n", pisolog2);
    }

    return 0;
}

// Implementação das funções
// Função: piso
int piso_log2(int n)
{
    int pot2;
    int p;

    pot2 = 1;
    p = 0;

    while (pot2 <= n)
    {
        p++;
        pot2 = pot2 * 2;
    }

    return p-1;

}
