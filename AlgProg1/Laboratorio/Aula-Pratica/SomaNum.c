// Programa: somanumeros.c
// Programador: Willian Xavier
// Data: 26/08/2016
// Este programa lê n sequências de dois vetores com números inteiros
// entre 0 e 9, interpretadas como dois números inteiros com 0 =< k1 e
// k2 <= 100 algarismos cada e calcula e imprime a soma desse dois números
// inteiros.

// Bibliotecas
    #include <stdio.h>
    #include <string.h>

// Tipo String
    typedef char string[100];

// Funcao Principal
    int main(void) {

// Variaveis
    string  vet1,
            vet2;
    int     vetor1[100],
            vetor2[100],
            tam1,tam2,
            soma[100],
            menor,maior,
            ultimoV1,
            ultimoV2,
            n,i,k,e;

// Leitura
    scanf ("%s", vet1);
    scanf ("%s", vet2);

// Maior Vetor
    tam1 = strlen(vet1);
    tam2 = strlen(vet2);
    maior = tam1;
    menor = tam2;

    if (tam2 > maior)
        maior = tam2;
    if (tam2 < menor)
        menor = tam2;

// Atribuicao da String num Vetor de Verdade
    for (i = 0; i < tam1; i++) {	 	  	  		  	 	      	       	 	
         vetor1[i] = vet1[i];
    }

    for (i = 0; i < tam2; i++) {
         vetor2[i] = vet2[i];
    }

// Realocamento do Menor Vetor

// Se o Menor Vetor for o Primeiro
    if (menor == tam1) {
        for (i = 0; i < menor; i++) {
             while (vetor1[i] != '\0') {
                    ultimoV1 = i;
             }
        }

        for (i = 0; i < maior; i++) {
             while (vetor2[i] != '\0') {
                    ultimoV2 = i;
             }
        }
        for (i = 0; i < maior; i++) {
             while (ultimoV2 != ultimoV1) {
                    vetor2[ultimoV2+1] = vetor2[i];
                    vetor2[ultimoV2] = 0;
                    ultimoV2++;
                }
        }
    }

// Se o Menor Vetor for o Segundo
    if (menor == tam2) {
        for (i = 0; i < menor; i++) {
             while (vetor2[i] != '\0') {
                    ultimoV2 = i;
             }	 	  	  		  	 	      	       	 	
        }

        for (i = 0; i < maior; i++) {
             while (vetor1[i] != '\0') {
                    ultimoV1 = i;
             }
        }

        for (i = 0; i < maior; i++) {
             while (ultimoV1 != ultimoV2) {
                    vetor1[ultimoV1+1] = vetor1[i];
                    vetor1[ultimoV1] = 0;
                    ultimoV2++;
                }
        }
    }

// Soma de Vetores
    for (i = 0; i < maior; i++) {
         soma[i] = vetor1[i] + vetor2[i];
    }

// Apresentacao
    for (i = 0; i < maior; i++) {
         printf ("%d", soma[i]);
    }


    return 0;

    }
