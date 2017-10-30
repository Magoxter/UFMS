//Programa: intersecao01g.c
//Programador:
//Data: 15/09/2016
//este programa le dois arranjos de inteiros e calcula a intersecao
// dos arranjos e imprime o resultado
//Declaracao das bibliotecas utilizadas
#include<stdio.h>
//Declaracao das constantes
#define MAX 500
//Declaracao das funcoes
void intersecaof(const int [], int, const int[], int, int[], int*);
//Inicio da funcao principal
int main(void){
//declaracao das variaveis locais
int a[MAX], b[MAX], c[MAX];
int tamA, tamB, tamC, n;

//pre: a,tamA,b,tamB

//Passo A. Leia o numero de vezes que sera executado
scanf("%d", &n);
for( int l=0; l<n;l++){
//Passo1. Leia os vetories
//Passo 1.1. Leia o vetor a
//Passo 1.1.1. Leia o tamanbo do vetor a
    scanf("%d", &tamA);
//Passo 1.1.2. Leia os elementos de a
    for (int i=0; i< tamA; i++){
        scanf("%d", &a[i]);
    }

//Passo 1.1. Leia o vetor a
//Passo 1.1.1. Leia o tamanbo do vetor a
    scanf("%d", &tamB);
//Passo 1.1.2. Leia os elementos de a
    for (int i=0; i< tamB; i++){
        scanf("%d", &b[i]);
    }
//Passo 2. Compute a intersecao de a e b
    intersecaof(a, tamA, b, tamB, c, &tamC);
//Passo 3. Imprima o resultado
    if(tamC >0){
        for(int i=0; i<tamC;i++)
            printf("%d ", c[i]);
        printf("\n");
    }
    else{
        printf("vazia\n");
    }
}
    return 0;

//por: c, tamC
}//Fim funcao principal


//Implementacao das funcoes
//Funcao: intersecaof.c
//Programador:
//Data: 15/09/2016
//Esta funcao calcula a intesecao de dois arranjos
void intersecaof(const int x[], int tamx, const int y[], int tamy, int z[], int* tamz){

//Passo i.1. Inicialize o numeo de elementos de z
    *tamz = 0;
//Passo  i.2. Compute a intersecao
//Passo i.2.1. Para cada elemento de x verifique se ele esta em y
    for(int i=0; i<tamx;i++){
//PAsso i.2.1.1. Comptare x[i] com os elementos de y
        int j=0;
        while(j<tamy && x[i] != y[j]){
//Passo i.2.1.1.1. Compare com o proximo elemento de y
            j++;
        }
        if((x[i] == y[j]) && (j< tamy)){
            z[*tamz] = x[i];
            *tamz = *tamz +1;
        }
    }
    return;

}
