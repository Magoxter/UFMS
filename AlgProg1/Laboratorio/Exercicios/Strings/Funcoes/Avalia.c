// Programa: avalia.c
// Programador: Willian Xavier
// Data: 06/09/2016
// O Diálogo: Programa para determinar quais estudantes aprovaram ou
// reprovaram. Exempo de uma função que retorna uma string
// Declaração das bibliotecas utilizadas
#include<stdio.h> // cin, cout, endl
#include<string.h>   // strcpy
// Declaração das contantes globais
#define TAMMAX 11
// Declaração dos tipos
typedef char string[TAMMAX];

// início da função principal
int main(void) {
// Declaração das variáveis locais
float   media,           // Média do Estudante
        linhaAR;         // linha de aprovação/reprovação
string  mensagem;        // mensagem de Aprovado/Reprovado atribuída
// Declaração das funções locais
char* mediaAR(float, float);

// pré: UmFloat1 para i em {1,...,n}: UmFloat2[i] && UmFloat1 == LinhaAR
//      && UmFloat2[i] == Media

// Passo 1. Leia a entrada
// Passo 1.1. Leia o valor do limite de aprovação e reprovação
   printf("Entre com o limite para aprovação/reprovação: ");
   scanf("%f", &linhaAR);
// Passo 1.2. Leia a média do estudante
   printf("Entre com a média do estudante: ");
   scanf("%f", &media);
// Passo 2. Atribua o valor de MediaAr para Mensagem
   strcpy(mensagem, mediaAR(media, linhaAR));
// Passo 3. Imprima o valor da Mensagem
   printf("%.1f %s\n", media, mensagem);

   return 0;

// pós: media && (Mensagem == "Aprovado" || Mensagem == "Reprovado")
} // fim do programa principal

// Função: mediaAR
// Programador:
// Data: 06/07/97
// O Diálogo: Retorna uma mensagem "Aprovado" se media >= linhaAR, ou
// "Reprovado" se media < linhaAR.
char* mediaAR(float media, float linhaAR) {
// pré: UmFloat1 && UmFloat2 && UmFloat1 == media && UmFloat2 == linhaAR

// Passo MAR.1. se media >= linhaAR então
    if (media >= linhaAR)
// Passo MAR.1.1. retorne "Aprovado"
        return "aprovado";
// Passo MAR.2. caso contrário
    else
// Passo MAR.2.1. retorne "Reprovado"
        return "reprovado";
// pós: ("Aprovado" && media >= linhaAR) || "Reprovado"
} // fim da função mediaAR
