        /* Poupanca */

    // Este Programa Calcula o Rendimento de Varias Aplicacoes
    // com Diferentes Taxas de Juros, Numeros de Anos e a Periodicidade
    // com que os Juros sao Aplicados

    #include <stdio.h>
    #include <math.h>
    #include <ctype.h>

    #define FLUSH while (getchar() != '\n')

    void leDados (float*,float*,unsigned int*, unsigned int*);
    float potencia (float,int);
    float valorAcumulado (float,float,unsigned int,unsigned int);
    void imprime2Dec (float);

    int main (void) {

    // Variaveis
        unsigned int anos,          // Anos de Acumulo da Taxa de Juros
                     numVzs;        // Numero de vzs q a taxa eh Aplicada
        float        valor,         // Valor do Deposito Inicial
                     taxa,          // Taxa de Juros Anual em Forma Decimal
                     valorAcum;     // Valor Acumulado
        char         resposta;

    // Faca ate que a Resposta seja "nao"
        do {

    // Leitura
        leDados(&valor,&taxa,&numVzs,&anos);

    // Calculo do Valor Acumulado
        valorAcum = valorAcumulado(valor,taxa,numVzs,anos);

    // Apresentacao
        imprime2Dec(valorAcum);

    // Verificacao se Existem mais valores
        FLUSH
        printf("\n\nMais Dados (S ou N).?! ");
        scanf ("%c", &resposta);
        }

        while(toupper(resposta) != 'N');

        return 0;
    }

    void leDados(float* valor, float* taxa, unsigned int* numVzs, unsigned int* anos) {

    // Leitura
        printf("Valor Depositado: ");
        scanf ("%f", &valor);
        printf("Taxa de Juros Inicial: ");
        scanf ("%f", &taxa);
        printf("Periodicidade com que a Taxa sera Aplicada: ");
        scanf ("%u", &numVzs);
        printf("Anos em que o Valor sera Aplicado: ");
        scanf ("%u", &anos);

        return;
    }

    float potencia(float x, int n) {

    // Variaveis
        unsigned int i;
        float        produto;

        if (x == 0)
            return 0.0;
        else {
            produto = 1.0;

            for (i = 0; i < fabs(n); i++)
                 produto *= x;
                if (n >= 0)
                    return produto;
                else
                    return 1.0 / produto;
        }
    }
