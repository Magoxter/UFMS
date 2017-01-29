// Programa: codifica03.c
// Programador: Willian Xavier
// Data: 15/07/2016
// Este programa codifica uma mensagem usando uma frase de codificação.
// Para cada caractere da frase de codificação é associado um valor
// numérico que será adicionado de forma cíclica a cada um dos
// caracteres da mensagem. A=1, B=2, ect... Transformamos esse resultado
// em um número entre 32 e 126, a variação dos códigos ASCII para
// caracteres que podem ser impressos, e então convertemos o número
// resultante novamente em um caractere.
// Declaração das bibliotecas utilizadas
#include<stdio.h>  // scanf, printf
#include<ctype.h>  // toupper
#include<string.h> // strlen
// definição de constantes e instruções
#define LIMSTRING 80   // tamanho máximo da string
#define EOS '\0'               // sinaliza o final da string
#define FLUSH while (getchar() != '\n')
// Declaração dos tipos
typedef char string[LIMSTRING];

// início da função principal
int main(void) {
// Declaração das variáveis locais
string       mensagem,     // mensagem a ser codificada
             mensagemc,    // mensagem codificada
             palavra;      // palavra chave
unsigned int novoCodigo,   // novo código para o caracter
             tamanho,      // tamanho da palavra codificadora
             tamanhos,
             j,
             i;            // índice

// pré: String1 String2 && String1 == mensagem && String2 == palavra

// Passo 1. Leia a entrada
// Passo 1.1. Leia a mensagem a ser codificada
   scanf("%79[^\n]s", mensagem);
   FLUSH;
// Passo 1.2. Entre com a frase codificadora.
   scanf("%s", palavra);
   FLUSH;
// Passo 1.3. Compute o tamanho da palavra
   tamanho = strlen(palavra);
   tamanhos = strlen(mensagem);
// Passo 2. Codifique a Mensagem
// Passo 2.1. Inicie com a primeira posição da string
   i = 0;
   j = 0;
// Passo 2.2. Enquanto não atingir o final da string ou o limite no
//            número de caracteres da string faça
while (i < tamanhos){

	while (j<tamanho){

		mensagem[i] = toupper(mensagem[i]);
   		palavra[j] = toupper(palavra[j]);
// Passo 2.2.1. Codifique o caracter
    	novoCodigo = (mensagem[i] + palavra[j])%90;

// Passo 2.2.2. Verifique se o número obtido não é um caractere válido
	if (novoCodigo < 65){
	//	printf("%d ", novoCodigo);
// Passo 2.2.2.1. Obtenha o número de um caracter válido
		novoCodigo = 26 + novoCodigo;
	//	printf("%d", novoCodigo);
	}
// Passo 2.2.2. Atribua o novo caracter a mensagem
mensagemc[i] = novoCodigo;
	j++;
	i++;
	}
// Passo 2.2.3. Incremente o número do caracter
		j=0;

   } // fim while
// Passo 2.3. Finalize a string
mensagemc[tamanhos] = '\0';
// Passo 3. Imprima a mensagem codificada
   printf("%-79s\n", mensagemc);

   return 0;

// pós: c[1]...c[n] && para i em {1,...,n}: c[i] == UmChar[i] +
//      palavra[i]%tamanho
} // fim da função principal
