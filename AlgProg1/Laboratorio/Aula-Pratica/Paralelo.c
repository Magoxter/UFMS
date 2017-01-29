// Programa: paralelo1.c
// Programador: Willian Xavier
// Data: 05/08/2016
// Este programa lê dois vetores tridimensionais e, usando produto
// vetorial, verifica se eles são paralelos. O programa imprime sim
// em caso afirmativo e não caso contrário.

// Bibliotecas
    #include <stdio.h>

// Funcao Principal
    int main(void) {

// Variaveis
    double  vetor1[3],
            vetor2[3];
    double  ab1,ab2,ab3;
    int     n = 3;

// Leitura
    for (int i = 0; i < n; i++) {
        scanf ("%lf", &vetor1[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf ("%lf", &vetor2[i]);
    }

// Produto Vetorial
    ab1 = ((vetor1[1]*vetor2[2]) - (vetor1[2]*vetor2[1]));
    ab2 = ((vetor1[2]*vetor2[0]) - (vetor1[0]*vetor2[2]));
    ab3 = ((vetor1[0]*vetor2[1]) - (vetor1[1]*vetor2[0]));

// Apresentacao
    if ((ab1 == 0) && (ab2 == 0) && (ab3 == 0))
        printf ("sim");
    else
        printf ("não");

   return 0;

} // fim da função principal
