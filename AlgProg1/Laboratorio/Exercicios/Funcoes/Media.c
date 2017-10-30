    /* Media */
// Este Programa Computa a Media de dadas 3Notas

#include <stdio.h>

double nota(void);
double somaF(double,double,double);
double mediaF(double);
void print(double);

int main (void) {

// Variaveis
    double  nota1,
            nota2,
            nota3,
            soma,
            media;

// Leitura
    nota1 = nota();
    nota2 = nota();
    nota3 = nota();

// Soma
    somaF(nota1,nota2,nota3);

// Media
    media = mediaF(soma);

// Apresentacao
    print(media);

    return 0;
}

double nota (void) {

    double num;

    scanf("%lf", &num);

    return num;
}

double somaF(double n1, double n2, double n3) {

    double soma = n1 + n2 + n3;

    return soma;
}

double mediaF(double soma) {

    double media;

    media = soma/3.0;

    return media;
}

void print(double media) {

    printf("%lf", media);

    return;
} 
