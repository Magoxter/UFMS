// Programa: calcsala.c
// Programador: Willian Xavier
// Data: 19/09/16
// Algoritmo para calcular salários para cada funcionário. Os
// salários dos funcionários são calculados e acumulados.
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf

// início da função principal
int main(void) {
// declaração das variáveis locais
int     numFuncionario,      // número do funcionário
        numHoras;            // número de horas trabalhadas
double  salarioBase,         // valor das horas trabalhadas
        salarioFuncionario;  // Salário do funcionário
// declaração das funções locais
double calculaSalario(double, int);

// pré: para i em {1,...,n}: UmInt[i] UmDouble1[i] UmInt[i] &&
//      UmInt[i] == NumFuncionario && UmDouble1[i] == SalarioBase &&
//      UmInt[i] == NumHoras

// Passo 1. Leia os dados de entrada
// Passo 1.1. Leia Número do Funcionario
   printf("Entre com o número do funcionário: ");
   scanf("%d", &numFuncionario);
// Passo 1.2. Leia SalárioBase
   printf("Entre com o salário base: ");
   scanf("%lf", &salarioBase);
// Passo 1.3. Leia Número de Horas
   printf("Entre com o número de horas: ");
   scanf("%d", &numHoras);
// Passo 2. Calcule o salário do funcionário
   salarioFuncionario = calculaSalario(salarioBase, numHoras);
// Passo 3. imprima NumFuncionário, NumHoras, SalárioBase,
//	           SalárioFuncionário;
   printf("%d %d %.2f %.2f\n", numFuncionario, numHoras, salarioBase, salarioFuncionario);

   return 0;

// pós: para i em {1,...,n}: NumFuncionário == UmUInt[i] &&
//      ((SalárioFuncionário[i] == UmFloat1[i] * UmFloat2[i]) ||
//      (SalárioFuncionário[i] == UmFloat1[i] * UmFloat2[i] +
//      (UmFloat2[i] - 40) * 0.5 * UmFloat1[i]))
} // fim da função principal

// implementação das funções

// Função: CalculaSalario
// Programador:
// Data: 06/07/97
// O Diálogo: Função para calcular o salário de um funcionário dado o valor
// recebido por hora e o total de horas trabalhadas. Horas acima de 40 são
// pagas com um adicional de 50%.
double calculaSalario(double salarioBase, int numHoras) {
// declaração das variáveis locais
double salario;

// pré: UmFloat1 UmFloat2 && UmFloat1 == SalarioBase && UmFlaot2 == NumHoras

// Passo cs.1. se NumHoras <= 40 então
    if (numHoras <= 40)
// Passo cs.1.1. Calcule SalárioFuncionário = NumHoras * SalárioBase
        salario = numHoras * salarioBase;
// Passo cs.2. caso contrário
    else
// Passo cs.2.1. Calcule SalárioFuncionário = NumHoras * SalárioBase +
//  	  	      (Num_Horas - 40) * 0.5 * SalárioBase;
        salario = numHoras * salarioBase + (numHoras - 40) * 0.5 * salarioBase;
// Passo cs.3. retorne o salário do funcionário
   return salario;

// pós: ((Salário == UmFloat1 * UmFloat2) ||
//      (Salário == UmFloat1 * UmFloat2 + (UmFloat2 - 40) * 0.5 * UmFloat1))
} // fim da função CalculaSalario
