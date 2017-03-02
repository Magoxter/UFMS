/**************************************************
Willian Xavier - Trabalho 1

Professor(a): Diego Padilha Rubert
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NOME 51
#define MAX_CAPIVARAS 51


/*Armazena informações de uma capivara */
typedef struct {
    char nome[MAX_NOME];
    int ultimo_peso; /* Ultimo peso registrado */
    int var_total; /* Variacao total de peso */
    int max_var_mensal; /* Maior variacao mensal encontrada */
    char nascimento[11]; /* Data de nascimento */
} Capivara;

/* Armazena informacoes de uma familia de capivaras */
typedef struct {
    char nome[MAX_NOME];
    int num_capis; /* Quantidade de capivaras na familia */
    int num_meses; /* Meses registrados */
    Capivara capis[MAX_CAPIVARAS]; /* Armazena as capivaras */
} Familia;


//Essa função cria uma familia de capivaras
Familia criaFamilia(Familia);

//Essa função registra uma capivara na familia fornecida como parâmetro
Capivara registCapiv();

//Essa função lê e registra as informações de peso de cada capivara por mês e retorna o numero de meses
Familia registraMeses(Familia);

//Esta função ordena as capivaras
Familia ordenaCerto(Capivara[MAX_CAPIVARAS]);

//Quicksort alterado para ordenar capivaras
void quick(int, int, Capivara[MAX_CAPIVARAS]);
int separa(int, int, Capivara [MAX_CAPIVARAS]);

//Compara duas capivaras e retorna 1 se a primeira é a primeiraé antes, -1 se a segunda é antes e 0 se forem a mesma capivara
int checaCapis(Capivara, Capivara);

//Troca a posição de duas capivaras
void troca(Capivara*, Capivara*);

//Essa função calcula um valor que representa a idade da capivara, sendo que um menor valor é uma capivara mais velha
int calculaIdade(Capivara);

//Essa função imprime a familia passada como parametro
void imprimeFamilia(Familia);


int main(){
    int i, numFam;

    scanf("%d\n", &numFam);


    //Examina cada familia
    for (i = 0; i < numFam; i++){
        //Declara familia
        Familia fam;

        fam = criaFamilia(fam);
        fam = registraMeses(fam);

        quick(0, fam.num_capis - 1, fam.capis);

        imprimeFamilia(fam);
    }//Fim for i

    return 0;
}//Fim main



Familia criaFamilia(Familia fam){
    int i;


    scanf(" %[^\n]%*c", fam.nome);
    printf("\n");
    scanf("%d", &fam.num_capis);

    for ( i = 0; i < fam.num_capis; i++){
        fam.capis[i] = registCapiv();
    }
    printf("\n");

    return fam;
}//Fim função criaFamilia



Capivara registCapiv(){
    Capivara capi;

    scanf(" %[^,]%*c %[^\n]%*c", capi.nome, capi.nascimento);
    capi.ultimo_peso = -1;
    capi.max_var_mensal = 0;
    capi.var_total = 0;

    return capi;
}//Fim função registCapiv



Familia registraMeses(Familia fam){
    int peso;
    char aux[MAX_NOME], nome[MAX_NOME];
    int i, j, k;

    scanf("%d", &fam.num_meses);
    printf("\n");

    for (i = 0; i < fam.num_meses; i++){
        //printf("Ler mes:\n");
        scanf(" %[^\n]%*c", aux);
        for (j = 0; j < fam.num_capis; j++){
            //printf("Ler nome e peso:\n");
            scanf(" %[^,]%*c %d", nome, &peso);
            //printf("%s %d\n", nome, peso);

            for (k = 0; k < fam.num_capis; k++){
                //printf("Procurando capivara  %s, %s... - %d\n", fam.capis[k].nome, nome, strcmp(nome, fam.capis[k].nome));
                if (strcmp(nome, fam.capis[k].nome) == 0){
                    //printf("Encontrou capivara %s\n", fam.capis[k].nome);
                    if (fam.capis[k].ultimo_peso == -1){
                        //printf("Capivara iniciada  %s\n", fam.capis[k].nome);
                        fam.capis[k].ultimo_peso = peso;
                        fam.capis[k].var_total = peso;
                    } else {
                        //printf("Capivara achada  %s\n", fam.capis[k].nome);
                        if (abs(fam.capis[k].max_var_mensal) < abs(peso - fam.capis[k].ultimo_peso)){
                            fam.capis[k].max_var_mensal = peso - fam.capis[k].ultimo_peso;
                            //printf("Max variacao alterada  %d\n", fam.capis[k].max_var_mensal);
                        }

                        if (i == fam.num_meses - 1){
                            fam.capis[k].var_total = peso - fam.capis[k].var_total;
                            //printf("Variacao total calculada  %d\n", fam.capis[k].var_total);
                        }

                        fam.capis[k].ultimo_peso = peso;
                    }

                    k = fam.num_capis;
                }//Fim if strcmp
            }//Fim for k
        }//Fim for j

        printf("\n");
    }//Fim for i

    return fam;
}//Fim função registraMeses


void quick(int p, int r, Capivara capis[MAX_CAPIVARAS]){
    int q;

    if (p < r){
        q = separa(p, r, capis);
        //printf("SAIU SEPARA\n");
        quick(p, q, capis);
        quick(q + 1, r, capis);
    }//Fim if "p < r"
}//Fim funcao "quick"


int separa(int p, int r, Capivara capis[MAX_CAPIVARAS]){
    int i, j;
    Capivara x;

    x = capis[p];
    i = p - 1;
    j = r + 1;

    while (1) {
        //printf("i: %d, j: %d\n", i, j);
        do {
            //printf("Diminuiu J\n");
            j--;
        } while (checaCapis(x, capis[j]) == 1);

        do {
            //printf("Aumentou I\n");
            i++;
        } while (checaCapis(x, capis[i]) == -1);

        if (i < j)
            troca(&capis[i], &capis[j]);
        else
            return j;
    }//Fim while "1"
}//Fim funcao "separa"


int checaCapis(Capivara capis1, Capivara capis2){
    //printf("nome1: %s, nome2: %s\n", capis1.nome, capis2.nome);
    if (abs(capis1.var_total) != abs(capis2.var_total)){
        //printf("        Compara VAR_TOTAL\n");
        if (abs(capis1.var_total) > abs(capis2.var_total))
            return 1;
        else
            return -1;

    } else if (abs(capis1.max_var_mensal) != abs(capis2.max_var_mensal)){
        //printf("        Compara VAR_MENSAL\n");
        if (abs(capis1.max_var_mensal) > abs(capis2.max_var_mensal))
            return 1;
        else
            return -1;

    } else if (abs(calculaIdade(capis1)) != abs(calculaIdade(capis2))){
        //printf("        Compara IDADE\n");
        if (abs(calculaIdade(capis1)) < abs(calculaIdade(capis2)))
            return 1;
        else
            return -1;

    } else if (strcmp(capis1.nome, capis2.nome) != 0) {
        //printf("        Compara LEXO\n");
        if (strcmp(capis1.nome, capis2.nome) < 0)
            return 1;
        else
            return -1;
    } else
        return 0;

}//Fim funcao "checaCapis"


void troca(Capivara* cap1, Capivara* cap2){
    Capivara aux = *cap1;
    *cap1 = *cap2;
    *cap2 = aux;
}//Fim funcao "troca"


int calculaIdade(Capivara cap1){
    int data1;

    data1 = (cap1.nascimento[0] * 10) + cap1.nascimento[1];
    data1 = data1 + ( ((cap1.nascimento[3] * 10) + cap1.nascimento[4]) * 30 );
    data1 = ( data1 + ( ((cap1.nascimento[6] * 1000) + (cap1.nascimento[7] * 100) + (cap1.nascimento[8] * 10) +
                                                                                                cap1.nascimento[9]) * 365 ) );

    return data1;
}//Fim funcao "calculaIdade"


void imprimeFamilia(Familia fam){
    int i;

    printf("Familia %s - variacoes apos %d meses\n", fam.nome, fam.num_meses);

    for (i = 0; i < fam.num_capis; i++){
        printf("%0+4d, %s\n", fam.capis[i].var_total, fam.capis[i].nome);
    }//Fim for i
    printf("\n");
}//Fim função "imprimeFamilia"
