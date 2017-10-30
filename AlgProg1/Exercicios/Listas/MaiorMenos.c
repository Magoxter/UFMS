/* Maior Menor */

// Este Programa Computa o Maior e o Menor Elemento de uma dada Lista

#import <stdio.h>

int leiaVetor(int*);
int maiorElemento(int,int);
int menorElemento(int,int);

int main(void) {

// Variaveis
    int lista[100],
        maior,menor,
        tam;

// Leitura
    scanf ("%d", &tam);
    leiaVetor(lista);

// Maior Elemento
    maior = maiorElemento(lista,tam);

// Menor Elemento
    menor = menorElemento(lista,tam);

// Apresentacao
    printf ("%d", maior);
    printf ("%d", menor);

    return 0;
}

int leiaVetor(int lista[100], int tam) {

// Leitura do Vetor
    for (i = 0; i < tam; i++) {
         scanf ("%d", &lista[i]);
    }

    return;
}

int maiorElemento(int lista[100], int tam) {

    int maior;

    maior = lista[0];

    for (i = 1; i < tam; i++) {
        if (lista[i] > maior)
            maior = lista[i];
    }

    return maior;
}

int menorElemento(int lista[100], int tam) {

    int menor;

    menor = lista[0];

    for (i = 0; i < tam; i++) {
        if (lista[i] < menor)
            menor = lista[i];
    }

    return menor;
}
