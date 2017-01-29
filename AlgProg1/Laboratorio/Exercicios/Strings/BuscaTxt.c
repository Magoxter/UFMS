//Programa: Buscatexto.c
//Programador: Willian Xavier
//data: 31/07/2016
//Diálogo: Esse programa conta o número de vezes
//que uma substring ocorre dentro de outra palavra
#include <stdio.h>
#include <string.h>
typedef char string[99];
//Ínicio da função principal
int main(){
    //Declaração das variáveis locais
	string palavra, substring;
	int i = 0,
	    tam,
	    tam1,
	    indice = 0,
	    total=0,
	    j=0;

//Passo 1. Leia palavra
	scanf ("%s", palavra);
//Passo 1.1 Leia substring
	scanf ("%s", substring);
//Passo 2. Compute tamanho de cada string
	tam = strlen (palavra);
	tam1 = strlen (substring);
//Passo 3. Compare palavra com substring
	while (j < tam){
		i=0;
	    while(i<tam1){
			if(palavra[j] == substring [i]){
			   indice++;
			   i++;
			}
			else{
			    indice =0;
			    i=0;
			}
				if(palavra[j] == substring [i]){
			   	indice++;
			   	i++;
			}
	    	if(indice == 3){
			    indice =0;
			    total = total+1;
			}
			if(j == tam){
				i = tam1;
			}
			j++;
	    }
	}//Fim while
//Passo 4. Imprima total
	printf("%d", total);
	return 0;
}//Fim main
