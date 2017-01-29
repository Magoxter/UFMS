// Programa: compara04.c
// Programador: Willian Xavier
// Data: 10/08/2016
// Este programa lê pares de strings, compara e imprime
// 0 se as duas strings forem iguais, 1 se a primeira string
// for maior que a segunda e -1 se a primeira for menor que a
// segunda. O programa não pode usar nenhuma função que faça
// comparação de strings. A função strlen pode ser usada
// Declaração das bibliotecas utilizadas
    #include<stdio.h>      // printf, scanf
    #include<string.h>     // strlen
// declaração de tipos
typedef char STRING[50];

// início da função principal
int main(void) {
// declaração das variáveis locais
int    i, tam1, tam2;
STRING palavra1, palavra2;
int    flag, menor;

// pré: palavra1 palavra2 && palavra1 == c[0]c[1]..c[tam1] &&
//      palavra2 == c[0]c[1]..c[tam2] && c[i] == char

// Passo 1. Leia as palavras
   scanf("%s %s", palavra1, palavra2);
// Passo 2. Calcule o tamanho das palavras
   tam1 = strlen(palavra1);
   tam2 = strlen(palavra2);
// Passo 3. Compare as palavras
// Passo 3.1. Incialize as variáveis
   flag = 0; // assuma que as palavras são iguais
   i = 0;    // inicia na posição 0 das palavras
// Passo 3.2. Compute o tamanho da menor palavra
   if(tam1 < tam2)
   {
      menor = tam1;
   }	 	  	  		  	 	      	       	 	
   else
      menor = tam2;
// Passo 3.3. Enquanto forem iguas compare cada posição das palavras
   while(i <= menor && flag == 0) {
         if(palavra1[i] > palavra2[i])
         {
            flag = 1;
         }
         else if(palavra1[i] < palavra2[i])
              {
                 flag = -1;
              }
              i++;
   } // fim while
// Passo 3.4. Verifique qual palavra tem mais caracteres
   if (flag == 0) {
      if (tam1 > tam2)
         flag = 1;
      else if (tam1 < tam2)
         flag = -1;
   } // fim if
// Passo 4. Imprima o resultado
   printf("%d", flag);


   return 0;

// pós: (0 && tam1 == tam2 && para i em {1,..,tam1}:palavra1[i]==palavra2[i])
//      || (1 && para i em {1,..,j-1}:palavra1[i]==palavra2[i] &&
//      palavra1[j]>palavra2[j]) || -1
} // fim da função principal
