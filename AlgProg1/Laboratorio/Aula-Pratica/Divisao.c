// Programa: divisao.c
// Programador: Willian Xavier
// Data: 17/06/2016
// Este programa lê dois números inteiros a e b e calcula a
// divisão do maior pelo menor. O programa imprime o
// quociente e o resto da divisão.

// Bibliotecas Utilizadas
    #include<stdio.h> // printf, scanf

// início da função principal
    int main(void) {

// Declaração das variáveis locais
    int a, b, maior, menor; // dois números inteiros
    int quociente, resto;  // quociente e resto da divisão de maior por menor

// pré: UmInt1 UmInt2 && UmInt1 == a e UmInt2 == b

// Passo 1. Leia os inteiros
    printf("Leia um Inteiro A: ");
    scanf("%d", &a);
    printf("Leia um Inteiro B: ");
    scanf("%d", &b);

// Passo 2. Calcule o maior (b) e o menor (a)
    if (a > b) {
        maior = a;
        menor = b;
    }

    else {
        maior = b;
        menor = a;
     }

// Passo 3. Calcule o quociente e o resto de maior por menor
    quociente = maior / menor;
    resto = maior % menor;

// Passo 4. Imprima os resultados
   printf("%d / %d = %d e %d %% %d = %d\n", maior, menor, quociente, maior, menor, resto);

   return 0;

// pós: quociente == maior / menor && resto = maior % menor
} // fim da função main
