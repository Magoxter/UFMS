#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
typedef char string[80];	
	int n, numc, tamanho,j;
	string mensagem, mensagemC;
	
scanf("%d", &n);	
	
	for (int i=0; i<n; i++){
	tamanho=0;
		scanf("%s %d", mensagem, &numc);
		tamanho = strlen(mensagem);
		
		j=0;
		while(j<tamanho){
			
		mensagemC[j] = toupper(mensagem[j]) + numc;
		
			if(mensagemC[j]>=91){
				mensagemC[j] = 65+ (mensagemC[j])%91;
			}	
		j++;
		}
		
		mensagemC[tamanho] = '\0';
		printf("%s\n", mensagemC);
		
		
	}
	
	
	return 0 ;
}
