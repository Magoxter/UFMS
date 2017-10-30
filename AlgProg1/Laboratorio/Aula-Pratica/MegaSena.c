//Programa:megasenaf.c
//Programador:
//Data: 15/09/2016
//Este programa le o resultado da megasena, o valor do premio e um
//conjunto de apostas e computa o numero de prontos que cada aposta
//fez. O programa tambem computa o valor do premio que a(s) aposta(s)
//com maior numero de pontos recebera
//Bibliotecas utilizadas
#include<stdio.h>

//Declaracao das funcoes utilizadas
int pontos(const int [], const int []);
//Inicio da funcao principal
int main (void){
//Declaracao das varivaeis locais
double premio;
double rateio;
int    resultado[6];
int    aposta[6];
int    n;//Numero de apostas
int    res;//Numero de postos de aposta
int    max = 0;//numero maximo de postos obtido
int    num = 0;//numero de apostadores ganhadores

//Passo 1. Leia a entrada
//Passo 1.1. Leia o resultado da megasena
    for(int i=0; i<6;i++){
        scanf("%d", &resultado[i]);
    }
//Passo 1.2. Leia o premio
    scanf("%lf", &premio);
//Passo 1.3. Leia a quantidade de apostas
    scanf("%d", &n);
//Passo 2. Compute o numero de acertos de cada aposta
    for(int i=0; i<n; i++){
//Passo 2.1. Leia a aposta i
        for(int j = 0; j < 6; j++){
            scanf("%d", &aposta[j]);
        }
        res = pontos(resultado, aposta);
        if(res > max){
            max = res;
            num = 1;
        }
        else if(res == max){
            num++;
        }
    }
//Passo 3. Compute o rateio
    rateio = premio/num;
//Passo 4. Imprima o resultado
    printf("%d\n%d\n%.2f\n", max, num, rateio);


    return 0;

}//fim da funcao principal

//Implementacao das funcoes
//Funcao: pontos.c
//Programador:
//DAta:15/09/2016
//Funcao que computa o numero de pontos de uma aposta na megasena
int pontos(const int resultado[], const int aposta[]){
//Declaracao das variaveis locais
int numpontos = 0;

//Passo p.1. Compute o numero de pontos da aposta
    for(int i=0; i<6; i++){
        for(int j = 0; j < 6; j++){
            if(aposta[j] == resultado[i]){
                numpontos++;
            }
        }
    }

    return numpontos;

}
