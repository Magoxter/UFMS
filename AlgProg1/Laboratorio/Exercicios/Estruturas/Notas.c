    /* Registro Notas */

#include <stdio.h>
#include <string.h>

typedef char string[80];

typedef struct {
                string  aluno;
                string  sobrenome;
                double  provas[3];
                double  trabalhos[2];
                } ESTUDANTE;

int main(void) {

    int         num,        // Numero de Estudantes a serem Lidos
                n,i,k,      // Chavosidades
                pos;        // Posicao
    double      auxProvas,
                auxTrab;
    string      aux,
                auxSobre;
    ESTUDANTE   aluno[80];  // Lista de Alunos

    /* Leitura */
// Numero de Estudantes
    scanf ("%d", &num);
    for (i = 0; i < num; i++) {

// Leitura dos Estudantes
    scanf ("%s", aluno[i].nome);
    scanf ("%s", aluno[i].sobrenome);

// Prova de cada Aluno
    for (k = 0; k < 3; k++)
         scanf ("%lf", &aluno[i].provas[k]);

// Trabalho de cada Aluno
    for (k = 0; k < 2; k++)
         scanf ("%lf", &aluno[i].trabalhos[k]);

    /* Ordenacao */
// Ordenacao dos Alunos pelo Primeiro Nome
    pos = k-1;

    while (strcmp(aluno[pos+1].nome,aluno[pos].nome) < 0 && pos >= 0) {
           strcpy(aux, aluno[pos].nome);

         for (i = 0; i < 3; i++)
              auxProvas[i] = aluno[pos].provas[i];
         for (i = 0; i < 2; i++)
              auxTrab[i] = aluno[pos].trabalhos[i];

         strcpy(auxSobre, aluno[pos].sobrenome);
         strcpy(aluno[pos].nome, aluno[pos+1].nome);

         for (i = 0; i < )
    }

    }

    return 0;
}
