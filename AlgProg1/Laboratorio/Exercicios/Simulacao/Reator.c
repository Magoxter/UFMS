// Programa: reator03p.c
// Programador: Willian Xavier
// Data: 25/07/16
// Este programa simula nêutrons num reator nuclear. O reator é isolado
// com muro de chumbo para proteção do reator nuclear. Um nêutron
// entra no muro no ponto E e então segue um caminho aleatório 
// movimentando-se para frente, para trás, à direita e à esquerda, em 
// saltos de uma unidade. Uma mudança de direção é interpretada como uma 
// colisão com um átomo de chumbo. Suponha que após 10 dessas colisões 
// a energia do nêutron é dissipada e que ele morre dentro da proteção 
// de chumbo, providenciando que ele não volte para dentro do reator ou 
// atravesse o muro de chumbo. O programa lê a espessura do muro de
// chumbo e simula n nêutrons entrando em qualquer ponto nesta 
// proteção, e calcula quantos deles sairão fora do reator com energia. 
// O muro de proteção é circular e os nêutrons só conseguem sair para 
// fora do muro de proteção, voltar para dentro do reator ou morrer 
// dentro do muro da proteção.
// Declaração das biliotecas utilizadas
#include<stdio.h> // scanf, printf
#include<stdlib.h> // srand, rand
#include<math.h>   // pow
#include<time.h> // time
//#include<unistd.h> // sleep

// início da função principal
int main(void) { 
// declaração das variáveis locais
int espessura, j;
int neutrons;
int energia,
    muro,
    direcao,
    anterior,
    reator, 
    dissipa, 
    sai;
int semente;

// pré: UmInt && UmInt == espessura 

// Passo 1, Leia espessura, neutrons, semente e inicialize as variáveis
// Passo 1.1. Leia a espessura e o número de nêutrons
//   printf("Entre a espessura do muro de chumbo: ");
   scanf("%d", &espessura);
// Passo 1.2. Leia a espessura e o número de nêutrons
//   printf("Entre o número de nêutrons: ");
   scanf("%d", &neutrons);
// Passo 1.3 Leia a semente
   scanf("%d", &semente);
// Passo 1.4. Inicialize as variáveis
   reator = 0;
   dissipa = 0;
   sai = 0;
// Passo 2. Simule neutrons vezes
   for (j = 0; j < neutrons; j++) {	 	  	  		  	 	      	       	 	
// Passo 2.1. Gere a semente
      semente = semente + pow(2,j) - 11;
      srand(semente);
//   srand(time(NULL));
// Passo 2.2. Incialize as variáveis
      anterior = 3; // 0 = reator, 1 = direita, 2 = esquerda e 3 = saída
      energia = 10;
      muro = espessura - 1;
// Passo 2.3. Calcule o trajeto do nêutron e verifique se ele sai do muro
      while (muro > 0 && energia > 0 && muro <= espessura) {
// Passo 2.3.1. Gere a direção a ser pelo nêutron 
            direcao = rand() % 4;
//         printf("%d ", direcao);
// Passo 2.3.2. Se direção for != da anterior o nêutron perde energia
            if( direcao != anterior)
                energia--;
// Passo 2.3.3. Se direção for 0 volta em direção ao reator
            if( direcao == 0)
                muro++;
                        // 0 direção do reator
// Passo 2.3.4. Se direção for 3 caminha no muro em direção a saída
            if( direcao == 3)
                muro--;
                   // 3 direção da saída
// Passo 2.3.5. Atualize a direção anterior
            anterior = direcao;
      } // fim while
//      printf("\n");
// Passo 2.4. Verifique se o nêutron saiu do muro com energia
   if(energia > 0 && muro <= 0)
   {
       sai++;
   }
// Passo 2.5. Verifique a energia do nêutron dissipou
   else if(energia <= 0 )
       dissipa++;
// Passo 2.6. Verifique se nêutron voltou para o reator
   else
        reator++;

   } // fim for
// Passo 3. Imprima os resultados
//   printf("%d nêutrons\n", neutrons);
//   printf("Saindo do reator %d\n", sai);
//   printf("dissipando no muro %d\n", dissipa);
//   printf("e voltando para o reator %d\n", reator);
   printf("%d %d %d %d\n", neutrons, reator, dissipa, sai);

   return 0;

// pós: reator && reator == num vezes que o nêutron volta ao reator
//      dissipa && dissipa == num vezes que o nêutron fica no chumbo
//      sai && sai == num de vezes que o nêutron sai para o ambiente
//      externo  
} // fim da função CD
