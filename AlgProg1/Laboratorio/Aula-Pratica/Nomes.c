// Programa: nomes.c
// Programador: Willian Xavier
// Data: 10/06/2016
// O Diálogo: Este programa lê um nome consistindo do primeiro nome,
// o nome do meio ou inicial, e o último nome, nesta ordem, e
// então imprima o último nome, seguido de uma vírgula, e as iniciais
// do primeiro nome e do nome meio. Por exemplo, para a entrada
// Daniel Fabio Freitas deve produzir a saída Freitas, D. F.
// Declaração das bibliotecas utilizadas
#include<stdio.h> // scanf, printf
// Declaração das constantes globais
#define LimString 20
// Declaração de tipos
typedef char string[LimString];

// início da função principal
int main(void) {
// Declaração das variáveis locais
string       primeiroNome,   // primeiro nome
             nomeMeio,       // nome do meio ou inicial
             ultimoNome;     // ultimo nome
char         inicialNome,    // incial do primeiro nome
             inicialMeio;    // incial do nome do meio

// pré: UmaString1 == UmChar[0]...UmChar[m] &&
//      UmaString2 == UmChar[0]...UmChar[m] &&
//      UmaString3 && UmChar[0]...UmChar[m] &&
//      UmaString1 == primeiroNome &&
//      UmaString2 == nomeMeio && UmaString3 == ultimoNome

// Passo 1. Leia o nome do estudante
// Passo 1.1. Leia o primeiro nome
    printf("Entre com o primeiro nome: ");
    scanf("%s", primeiroNome);

// Passo 1.2. Leia o nome do meio ou a inicial
    printf("Entre com o nome do meio ou a incial: ");
    scanf ("%s", nomeMeio);

// Passo 1.3. Leia o último nome
    printf("Entre com o último nome: ");
    scanf ("%s", ultimoNome);

// Passo 2. Transforme o nome para o formato desejado
// Passo 2.1. Obtenha a inicial do primeiro nome
    inicialNome = primeiroNome[0];

// Passo 2.2. Obtenha a inicial do nome do meio
    inicialMeio = nomeMeio[0];

// Passo 3. Imprima o nome no formato ultimoNome, inicialNome, inicialMeio
    printf("%s, %c. %c.\n", ultimoNome, inicialNome, inicialMeio);

   return 0;

// pós: UmaString, UmChar1. UmChar2. && UmaString == ultimoNome &&
//      UmChar1 == primeiroNome[0] && UmChar2 == nomeMeio[0]
} // fim da função principal
