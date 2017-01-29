// Programa: seno.c
// Programador: Willian Xavier
// Data: 15/07/2016
// Este programa calcula o valor de seno(x) utilizando a soma dos 10
// primeiros termos de senA = A - A^3/3! + A^5/5! - A^7/7! + ...
// O primeiro termo da série é A/1 o segundo é A/1 * -((A * A)/(2 * 3))
// o terceiro termo é (o segundo) -A^3/3! * - ((A*A)/(4 * 5))
// de forma geral é o termo anterior * -((A*A)/((2 * i)*(2 * i + 1)))
// onde i é o termo da série

// Declaração das bibliotecas utilizadas
    #include<stdio.h>
    #include<math.h>

// início da função principal
    int main(void) {

// declaração das variáveis locais
    double A;  // ângulo em radiandos
    int    ntermos; // número de termos
    double senA, termo, numerador;
    long long int denominador;
    int i = 0;

// pré: UmFloat && UmFloat == A

// Passo 1. Leia o valor de A
   printf("Leia o valor de A em radianos: ");
   scanf("%lf", &A);
// Passo 1.2. Leia o o número de termos
   scanf("%d", &ntermos);
// Passo 1.3. Inicialize a soma elementos de seno

// Passo 2. Compute a soma dos ntermos termos
// Passo 2.1. Compute o primeiro elemento da série
   numerador = A;
   denominador = 1;
   termo = numerador/denominador;
// Passo 2.2. Some os ntermos da série
    for (i = 0; i < 6; i++) {	 	  	  		  	 	      	       	 	
        senA = senA + termo;
        numerador = -numerador * (A*A);
        denominador = denominador * (2*(i+1))*(2*(i+1)+1);
        termo = numerador / denominador;
    }

// Passo 3. Imprima o valor do seno de A
   printf("sen(%+9.6f) = %+9.6f\n", A, senA);
    senA = 0.0;
    
   return 0;

// pós: Soma == Soma i em {1,...,10}: termo && termo == A^{2i-1}/(2i-1)!
} // fim da função principal
