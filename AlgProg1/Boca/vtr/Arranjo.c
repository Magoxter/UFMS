//arranjo.c
// passagem de parametros em arranjos
#include<stdio.h>


void learranjo(int []);
void imprimearranjo(int []);

int main(void){
int dados[10];

//leia palavra
    learranjo(dados);
    for(int i = 0; i < 10; i++){
           printf("main: %d\n", dados[i]);
    }

    printf("main: %d\n", &dados[0]);//endereço da palavra
    printf("main: %d\n", dados);//endereço da palavra

//imprime palavra
    imprimearranjo(dados);

return 0;
}//fim main

void learranjo(int vetor[]){
    for (int i = 0; i < 10; i++){
            scanf("%d", &vetor[i]);
    }
    return;
}

void imprimearranjo(int vetor[]){
    for(int i = 0; i < 10; i++){
        printf("funcao:%d\n", vetor[i]);
    }
    printf("funcao: %d\n", &vetor[0]);//endereço da palavra
    printf("funcao: %d\n", vetor);//endereço da palavra
    return;
}
