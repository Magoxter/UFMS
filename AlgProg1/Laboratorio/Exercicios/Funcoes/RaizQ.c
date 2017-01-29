/* RaizQ */
// Este Programa Calcula a Raiz Quadrada Aproximada de X
// Utilizando Funcoes

// Bibliotecas
	#include <stdio.h>
	#include <math.h>

// Funcao Raiz
	double RaizQ (double, double, double);

// Funcao Principal
	int main (void) {

// Variaveis
	double	Numero,
			Epsilon,
			Aproxim,
			Raiz;
	
// Leitura do Numero, da Precisao e Aproximacao
	scanf ("%lf", &Numero);
	scanf ("%lf", &Epsilon);
	scanf ("%lf", &Aproxim);

// Calulo da Raiz Quadrada
	Raiz = RaizQ(Numero, Epsilon, Aproxim);

// Apresentacao do Resultado
	printf ("%f\n", Raiz);

	return 0;

	}

// Funcao: RaizQ
// Implementacao da Funcao Raiz Quadrada
	double RaizQ(double X, double Epsilon, double Aproxim) {	 	  	  		  	 	      	       	 	

// Variacao
	double NovaAprox;

// Calculo da Nova Aproximacao 
	NovaAprox = (Aproxim + X / Aproxim) / 2.0;

	while (fabs(Aproxim - NovaAprox) >= Epsilon) {
			Aproxim = NovaAprox;
			NovaAprox = (Aproxim + X / Aproxim) / 2.0;

	}

	return Aproxim;

	}
