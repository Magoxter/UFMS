//Programa: crivo.c
//Programador:
//Data: 13/08/2016
//Descricao: Projete e implemente um programa para computar a sublista de numeros primos de no
//intervalo [2; tam]. O seu programa deve ser projetado para ser executado para n listas.
#include<stdio.h>
#include<stdbool.h>
#define MAX 100
void crivo(int);

//inicio da funcao principal
int main(void){
//declaracao das variaveis
int n, num;

//Passo A. Leia quantas vezes o programa sera executado
scanf("%d", &n);
//Passo B. Repita n vezes
	for(int i =0; i <n; i++){

		//recenbendo o valor n.
		scanf("%d", &num);

		crivo(num);

	}

return 0;
} //fim main



void crivo(int valor){
	int cont;

		for(int i =2; i <= valor; i++){
		cont =0;
			for(int j = 1; j <= i; j++){
				if(i%j == 0){
					cont++;
				}

			}
			if(cont == 2){
				printf("%d ", i);
			}

}
printf("\n");
return;
}
