// Programa: zerobissec.c
// Programador: Willian Xavier
// Data: 29/07/2016
// O Diálogo: Programa para calcular os zeros de uma dada função
// f de x = a até x = b usando o método da bisseção, o programa usa
// funções para ler os valores de a e b, para calcular os zeros e
// para imprimir os resultados.
// É assumido que f(a) * f(b) < 0.0
// Declaração das bibliotecas utilizadas
    #include<stdio.h> // scanf, printf
    #include<math.h>  // cos(x)

// início da função principal
    int main(void) {

// declaração das variáveis locais
    double       a,b,          // pontos inicial e final do intervalo
                 x1, x2,
                 m,            // ponto medio
                 fx1, fx2, fm, // valores da função no pontos
                 raiz=0.0,     // um zero para a função f
                 epsilon;      // diferença do intervalo

// pré: UmFloat1 UmFloat2

// Passo 1. Leia os valores da entrada
// Passo 1.1. Leia o valor do limite inferior
   //printf("Entre com o valor de a: ");
   scanf("%lf", &a);

// Passo 1.2. Leia o valor do limite superior
   /*printf("Entre com o valor de b: ");*/
   scanf("%lf", &b);

// Passo 1.3. Leia o valor de epsilon
   /*printf("Entre com o valor de epsilon: ");*/
   scanf("%lf", &epsilon);

// Passo 2. Calcule um zero da função

// Passo 2.1. Incialize os extremos do intervalo
   x1 = a;
   x2 = b;

// Passo 2.2. Enquanto o intervalo for maior que epsilon e não achou raiz faça
   while (fabs(x1 - x2) > epsilon) {

// Passo 2.2.1 Inicialize o valor da função nos extremos do intervalo
    fx1 = x1 * sin(x1) - cos(x1);
    fx2 = x2 * sin(x2) - cos(x2);

// Passo 2.2.2. Calcule o valor da função no ponto médio do intervalo
    m =  (x1 + x2) /  2.0;
    fm = m* sin(m) - cos(m);



// Passo 2.2.3. Verifique onde a função troca de sinal ou é um zero
   if (fx1 * fm < 0) {
       x2 = m;
   }

   else if (fm * fx2 < 0) {
       x1 = m;
   }

   else if (fm == 0) {
       x2 = x1;
   }
   }
// Passo 3. Atribua o valor da raiz
    raiz = m;

// Passo 4. Imprima o zero da função
   printf("%f\n", raiz);

   return 0;

// pós: raiz && f(raiz) == 0.0
} // fim da função principal
