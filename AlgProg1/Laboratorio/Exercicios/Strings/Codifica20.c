/* Codifica20.c */

// Este Programa Codifica uma Mensagem através do
// Cifrador de Cesar

// Bibliotecas
    #include<stdio.h>
    #include<string.h>

// Tipo String
    typedef char string[1000];

// Funcao Principal
    int main(void) {

// Variaveis
    string  mensagem,        // Mensagem a ser Codificada
            mensagemCod;     // Mensagem Codificada
    int     tam,             // Tam da Msg a ser Codificada
            novoCodigo[tam], // Novo Codigo para o Caractere
            deslocamento;    // Numero a ser Usado
    int     n,num;

// Laco
    scanf("%d", &n);
    for (int i = 0; i < n; i++){

// Leitura
    scanf("%s", mensagem);
    scanf("%d", &num);

// Algoritmo
    tam = strlen(mensagem);

    for (int k = 0; k < tam; k++) {
		novoCodigo = toupper(mensagem[k]) + num;

		if (novoCodigo > 90)
		    novoCodigo = (novoCodigo % 90) + 64;

		else if (novoCodigo < 65) {
		    novoCodigo = novoCodigo + 65;

		    if (novoCodigo > 90)
			  novoCodigo = (novoCodigo % 90) + 64;
	    }

		mensagemCod[k] = novoCodigo;
		mensagemCod[tam] = 0;
	}

// Apresentacao
    printf("%s\n", mensagemCod);

    }

    return 0;
} // fim do programa
