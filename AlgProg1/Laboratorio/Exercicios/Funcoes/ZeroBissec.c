// Programa: zerobisec.c
// Programador: Willian Xavier
// Data: 19/09/16
// O Diálogo: Programa para calcular os zeros de uma dada função 
// f de x = a até x = b usando o método da bisseção, o programa usa
// funções para ler os valores de a e b, para calcular os zeros e
// para imprimir os resultados. A função f é dada no programa.
// É assumido que f(a) * f(b) < 0.0
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<math.h>  // cos(x)

// Declaração das funções
double bissec(double, double, double);

// início da função principal
int main(void) {
// declaração das variáveis locais
double       a,b,          // pontos inicial e final do intervalo
             epsilon,
             zero;         // um zero para a função f

// pré: UmFloat1 UmFloat2

// Passo 1. Leia epsilon, a e b
   scanf("%lf %lf %lf", &epsilon, &a, &b);
// Passo 2. Calcule um zero da função
 
// Passo 3. Imprima a raiz de x e o número de passos
   printf("%.6f\n", zero);

   return 0;

// pós: raiz && f(raiz) == 0.0 
} // fim da função principal

// implementação das funções

// Função: bissec
// Programador:
// Data: 12/10/2011
// O Diálogo: Esta função calcula um zero da função f(x)
// no intervalo [x, y]. Assumimos que f(x) * f(y) < 0.0 
double bissec(double epsilon, double x, double y) {	 	  	  		  	 	      	       	 	
// declaração das variáveis locais
double       x1,
             x2,
             fx1,    // valor da função no ponto esquerdo do intervalo
             fx2,
             fy,    // valor da função no ponto direito do intervalo
             fm,    // valor da função no ponto médio do intervalo
             m,     // ponto médio do intervalo

// pré: UmFloat1, UmFloat2

// Passo b.1. Enquanto o intervalo for maior que epsilon não acho raiz faça
    while (fabs(x1 - x2) > epsilon) {
// Passo b.1. Inicialize o valor da função nos extremos do intervalo 
            fx1 = x1 * sin(x1) - cos(x1);
            fx2 = x2 * sin(x2) - cos(x2);
// Passo b.2. Calcule o valor da função no ponto médio do intervalo
            m =  (x1 + x2) /  2.0;
            fm = m* sin(m) - cos(m);
// Passo b.3. Verifique em qual subintervalo a função troca de sinal
   if (fx1 * fm < 0) {
       x2 = m;
   }
   
   else if (fm * fx2 < 0) {
       x1 = m;
   }
// Passo b.4. Verifique se o ponto médio é uma raiz
   else if (fm == 0) {
       x2 = x1;
   }
   } // fim while
 
 

// pós: m && m*sin(m)- cos(m) == 0.0
} // fim da função f
