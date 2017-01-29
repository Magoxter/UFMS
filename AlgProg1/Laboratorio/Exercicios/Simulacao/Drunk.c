// Programa: drunk02p.c -- versão Moodle
// Programador: Willian Xavier
// Data: 25/07/2016
// O Diálogo: Este programa simula a caminhada de um bêbado numa rua de oito
// quadras. A casa do bêbado está no quadra 8, e tem um bar na quadra 1.
// Nosso pobre bêbado começa numa quadra n, 1 < n < 8, e vagueia
// aleatoriamente, uma quadra de cada vez, em direçao de sua casa ou em
// direção do bar. Em cada esquina, ele se move em direção do bar com uma
// determinada probabilidade, digamos 2/3, e em direçaão de sua casa com uma
// determinada probabilidade, digamos 1/3. Chegando a sua casa ou ao bar,
// ele permanece lá. O programa simula 500 caminhadas na qual ele começa na
// quadra 2, outras 500 na qual ele começa na quadra 3, e assim por diante
// até a quadra 7. Para cada ponto inicial, o programa calcula e imprime a
// porcentagem das vezes que ele termina em casa e a média do número de
// quadras que ele anda em cada caminhada.
// Declaração das bibliotecas utilizadas
    #include<stdio.h> // scanf, printf
    #include<stdlib.h> // srand, rand
    #include<time.h> // time

// início da função principal
    int main(void) {

// declaração das variáveis locais
    int    quadrai;
    double casa, bar, media;
    int    quadra, walk, i;
    int    numcasa, numbar, numquadras;
    int    semente;

// pré: UmInt && UmInt == quadrai

// Passo 1. Leia a semente
   scanf("%d", &semente);
//   srand(time(NULL));
   srand(semente);

// Passo 2 Iniciando na quadra quadrai
   for (quadrai = 2; quadrai < 8; quadrai++) {	 	  	  		  	 	      	       	 	

// Passo 2.1. Inicialize as variáveis
   numquadras = 0;
   numbar = 0;
   numcasa = 0;

// Passo 2.2. Simule 500 caminhadas começando em quadrai
      for (i = 0; i < 500; i++) {
         quadra = quadrai;
         walk = 0;

// Passo 2.2.1. Enquando o bêbado não chegar no bar ou em sua casa faça
         while(quadra < 8 && quadra > 1) {
// Passo 2.2.1.1. Gere a direção a ser tomada (2/3 bar 1/3 casa)
                  // 0 caminho da casa
                  // 1 e 2 caminho do bar
                if( (rand() % 3) > 0 )
                    quadra--;
                else
                    quadra++;
// Passo 2.2.1.2. Compute o número de quadras caminhadas
             walk++;
         } // fim while
// Passo 2.2.2. Se o bêbado chegou no bar
         if( quadra == 1) {
             numbar++;
         }
         
         else {
// Passo 2.2.3. Se o bêbado chegou em casa
             numcasa++;
         }
// Passo 2.2.4. Compute o total de quadras caminhadas até i
         numquadras += walk;
      } // fim for i
// Passo 2.3. Compute a porcentagem de vezes que o bêbado chegou no bar
      bar = (double)numbar / (double)i;
// Passo 2.4. Compute a porcentagem de vezes que o bêbado chego em sua casa
      casa = (double)numcasa / (double)i;
// Passo 2.5. Compute a média de quadras caminhadas por trajeto
      media = (double)numquadras / (double)i;
// Passo 2.6. Imprima os resultados
//   printf("Saindo da quadra %d, a porcentagem que o bêbado \n", quadrai);
//   printf("chega no bar é %f e na sua casa %f \n", bar, casa);
//   printf("e a média de quadras caminhadas é %f\n", media);
      printf("%d %f %f %f\n", quadrai, bar, casa, media);
   } // fim for quadrai

   return 0;

// pós: bar && bar == % vezes que o bêbado chegou no bar
//      casa && casa == % vezes que o bêbado chegou na sua casa
//      media && media == média de quadras caminhadas
} // fim da função principal	 	  	  		  	 	      	       	 	
