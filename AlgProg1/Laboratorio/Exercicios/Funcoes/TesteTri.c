// Programa: testetri.c
// Programador: Willian Xavier
// Data: 19/09/16
// O Diálogo: Este programa lê três números reais representando
// os lados de um triângulo e verifica se eles podem representar
// um triângulo retângulo. O programa usa uma função para
// determinar se os lados lidos de um triângulo são de um triângulo
// retângulo.
// Bibliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<stdbool.h>  // true, false
#include<math.h>
// Declaração das funções
double triangulo(double,double,double);
// início da função principal
int main(void) {
// declaração das variáveis locais
double num1,     // medida a ser lida
       num2,     // medida a ser lida
       num3;     // medida a ser lida
bool   testetri; // testa o triângulo

// pré: num1, num2, num3

// Passo 1. Leia três números reais
   printf("Leia um número real: ");
   scanf("%lf", &num1);
   printf("Leia um número real: ");
   scanf("%lf", &num2);
   printf("Leia um número real: ");
   scanf("%lf", &num3);
// Passo 2. Classifique o triângulo
   testetri = triangulo(num1,num2,num3);
// Passo 3. Imprima a mensagem correspondente
   printf("%.1f %.1f %.1f", num1, num2, num3);
   if (testetri)
      printf(" formam um triângulo retângulo\n");
   else
      printf(" não formam um triângulo retângulo\n");

   return 0;

// pós: num1, num2, num3 && (("formam um triângulo retângulo" &&
//      (num1^2+num2^2=num3^2)||(num1^2+num3^2=num2^2)||(num2^2+num3^2=num1^2))
//      || "não formam um triângulo retângulo")
} // fim da função principal

// Função: triangulo.c
// Programador:
// Data: 13/06/2013
// Esta função verifica se um triângulo é retângulo
double triangulo(double num1, double num2, double num3) {

    double  numero1,
            numero2,
            numero3;
    bool    triangulo;

    numero1 = pow(num1,2);
    numero2 = pow(num2,2);
    numero3 = pow(num3,2);

    triangulo = false;

    if (numero1 + numero2 == numero3)
        triangulo = true;

    return triangulo;
}
