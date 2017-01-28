//.Programa: aguaesgoto.c (versÃ£o boca)
// Programador: Willian Xavier
// Data: 20/11/2012
// Este programa lÃª o consumo de Ã¡gua de um conjunto de residÃªncias
// e calcula a fatura da conta de Ã¡gua, esgoto e taxa do lixo para as 
// residÃªncias baseada no consumo de Ã¡gua. O programa lÃª o cÃ³digo de
// da residÃªncia (consumidor), o consumo de Ã¡gua da residÃªncia, computa 
// a fatura e entÃ£o imprime uma fatura com o cÃ³digo do consumidor e os 
// valores cobrados com mensagens apropriadas. 
// Bibliotecas Utilizadas
#include<stdio.h> // printf, scanf
#include<math.h>
#define TAXALIXO 30.00
#define M30020    1.22
#define M30015    4.95
#define M31620    5.11
#define M32125    5.51
#define M32630    7.01
#define M33150    8.33
#define M35100    9.55
#define TAXA40   40.00
#define TAXA50   50.00
#define TAXA60   60.00

// inÃ­cio da funÃ§Ã£o principal
int main(void) {
// declaraÃ§Ã£o das variÃ¡veis locais
unsigned int codigo_consumidor;
unsigned int consumo_agua;   
double       fatura_aguae; // faixa especial
double       fatura_agua1; // faixa 1
double       fatura_agua2; // faixa 2
double       fatura_agua3; // faixa 3
double       fatura_agua4; // faixa 4
double       fatura_agua5; // faixa 5
double       fatura_agua6; // faixa 6
double       fatura_agua;
double       fatura_esgoto;
double       fatura_total;
double		 aux;
 
int i, n; // nÃºmero de execuÃ§Ãµes 
    
// prÃ©: UnUInt1, UmUInt2 && UmUInt1 == codigo_consumidor &&
//      UmUIntt2 == consumo_agua

// Passo A. Leia o nÃºmero de vezes que o programa serÃ¡ executado
scanf("%d", &n);
for(i = 0; i < n; i++) { 
// Passo 1. Leia o cÃ³digo do consumidor e consumo de Ã¡gua
  // printf("\nLeia o cÃ³digo do consumidor: ");
	scanf("%d", &codigo_consumidor);
   //printf("\nLeia o consumo de Ã¡gua     : ");
   scanf("%d", &consumo_agua);
   
// Passo 2. Calcule valor da fatura
// Passo 2.1. Calcule a fatura de Ã¡gua
			if(consumo_agua <= 20.0){
					fatura_agua = consumo_agua*M30020;
			}else if(consumo_agua >= 21.0 && consumo_agua <=25.0){
			aux = consumo_agua - 20.0;
			
			fatura_agua = (aux * 5.51) +99.8;	
			}else if(consumo_agua >25.0 && consumo_agua <=30.0){
			aux = consumo_agua - 25.0;
			
			fatura_agua = (aux * 7.01)+TAXA40 +127.35 ;	
			}else if(consumo_agua >30.0 && consumo_agua <=50.0){
				aux = consumo_agua - 30.0;
				fatura_agua = (aux * 8.33)+TAXA50+ 202.4;
				
			}
			
			else {
				aux = consumo_agua - 50.0;
				fatura_agua = (aux * 9.55)+TAXA60 + 419.0;
			}
			
			
			 
				
			
			
// Passo 2.2. Calcule a fatura de esgoto
	fatura_esgoto = fatura_agua;
// Passo 2.3. Calcule o fatura total (Ã¡gua + esgoto + lixo)
fatura_total = fatura_esgoto + fatura_agua +TAXALIXO;
// Passo 3. Imprima os resultado
   printf("===========================================\n");
   printf("Agua e Esgotos Pureza e Limpeza Total Ltda.\n");
   printf("Consumidor: %u\n", codigo_consumidor);
   printf("Consumo de Agua: %u\n\n", consumo_agua);

   printf("Valor da Agua  : R$%8.2f\n", fatura_agua);
   printf("Valor do Esgoto: R$%8.2f\n", fatura_esgoto);
   printf("Taxa do Lixo   : R$%8.2f\n", TAXALIXO);
   printf("Valor Total    : R$%8.2f\n", fatura_total);
   printf("===========================================\n");
} // fim for

   return 0;
	
// pÃ³s: fatura_total = fatura_agua + fatura_esgoto + TAXALIXO
} // fim da funÃ§Ã£o principal
