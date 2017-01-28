// Programa: bois.c
// Programador: Willian Xavier
// Data: 22/07/2016
#include<stdio.h> // printf, scanf

// inÃ­cio da funÃ§Ã£o principal
int main(void) {
// declaraÃ§Ã£o das variÃ¡veis locais
int n=0, id_boi;
int nboisgordos=0,
	nboismagros=0,
	nsegmagros=0,
	nsegordos=0;
double soma=0.0, media=0.0;
double boi_maisgordo=1.0,
	   boi_segordo=0.0, 
	   boi_maismagro=1000.0, 
	   boi_segmagro= 1000.0;
//Numero de vezes que o programa será executado
scanf("%d", &n);
double pesos[n];

//Leitura dos pesos e identificação e a soma para fazer a média
for (int i=0; i<n; i++){
	scanf("%d", &id_boi);
	scanf("%lf", &pesos[i]);
	//soma para realizar a média
	soma = soma + pesos[i];
	//Verifica qual o boi mais gordo
	if (boi_maisgordo< pesos[i]){
		boi_maisgordo = pesos[i];
	}
	// Verifica qual o boi mais magro
	if(boi_maismagro > pesos[i]){
		boi_maismagro = pesos[i];
	}
}

int i=0;
while (i<n){
	//Verifica o segundo boi mais gordo
	if (boi_segordo < pesos[i] && boi_maisgordo != pesos[i]){
		
		boi_segordo = pesos[i];
	}
	//Verifica o segundo boi mais magro
	if (boi_segmagro > pesos[i] && boi_maismagro != pesos[i]){
		
		boi_segmagro = pesos[i];
	}
	i++;
}

i=0;
while (i<n){
	if(boi_maisgordo == pesos[i]){
		nboisgordos = nboisgordos +1;
	}
	if(boi_maismagro == pesos[i]){
		nboismagros = nboismagros +1;
	}
	if(boi_segordo == pesos[i]){
		nsegordos = nsegordos +1;
	}
	if(boi_segmagro == pesos[i]){
		nsegmagros = nsegmagros +1;
	}
	i++;
}

media = soma/n;
printf("Media dos pesos de %d bois = %.2f Kg\n", n, media );
printf("Peso do Boi mais gordo : %.2f Kg - %d Boi(s)\n", boi_maisgordo, nboisgordos );
printf("Peso do Segundo Boi mais gordo : %.2f Kg - %d Boi(s)\n", boi_segordo, nsegordos );
printf("Peso do Boi mais magro : %.2f Kg - %d Boi(s)\n", boi_maismagro, nboismagros );
printf("Peso do Segundo Boi mais magro : %.2f Kg - %d Boi(s)\n", boi_segmagro, nsegmagros );
return 0;
}
