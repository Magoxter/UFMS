// Programa: listatelefonica.c
// Programador: Willian Xavier
// Data: 19/09/2016
// Este programa le uma lista telefônica e um conjunto de consultas e para
// cada consulta retorna o nome, sobrenome e número de telefone do cliente
// ou informa que o nome não possui telefone
// Declaração das bibliotecas utilizadas
#include<stdio.h>
#include<string.h>
// declaração de tipos
typedef char String[15];
typedef struct {
   char   telefone[12];
   String nome;
   String sobrenome;
   String compara;
} DADOS;
typedef DADOS CATALOGO[1000];

// início da função principal
int main(void) {
// declaração das variáveis locais
    int k,i,n;

    scanf ("%d", &n);
    for (k = 0; k < n; k++) {
        scanf ("%s", &DADOS.nome[k]);
        scanf ("%s", &DADOS.sobrenome[k]);
        scanf ("%c", &DADOS.telefone[k]);
    }

// Procura
    scanf ("%s", DADOS.compara);

    for (i = 0; i < n; i; i++) {
         comp = strcmp(DADOS.compara,DADOS.nome[i]);

        if (comp == 0) {
            printf ("%s", DADOS.nome[i]);
            printf ("%s", DADOS.sobrenome[i]);
            printf ("%s", DADOS.telefone[i]);
        }

        else
            printf ("Nome nao possui Telefone\n");
    }

   return 0;

} // fim da função principal
