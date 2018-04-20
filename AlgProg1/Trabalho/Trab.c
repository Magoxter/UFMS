#include <stdio.h>
#include <math.h>

void print (char[]);

int main(void) {
  int k;          // Casos de Teste
  int i;          // Indice Geral
  int x;          // Variavel Auxiliar
  int z;          // Variavel Auxiliar
  int e;          // Variavel Auxiliar
  int d;          // Variavel Auxiliar
  int b;          // Indice Binario
  int n;          // Tamanho Vetor
          
  int T;          // Indice de Teste
  int I;          // Indice do Hexadecimal
 
  int dc;         // Recorrencia Decimal
  int oc;         // Recorrencia Octal
  int hx;         // Recorrencia Hexadecimal

  int aux;        // Variavel Auxiliar
  int dec;        // Variavel para o Decimal
  int num;        // Numero para Conversao Decimal
  int pot2;       // Potencia de 2 para Binario

  int key[10];    // Vetor de Entrada

  char byt[10];   // Byte do Caractere - input
  char bit[10];   // Byte do Caractere - output
  char bin[10];   // Binario do Caractere
  char out[10];   // Saida para o Caractere

   scanf("%d", &k);

    T = 0;

  while (k > 0) {

     n = 8;

   for (i = 0; i < n; i++) {
      scanf("%d", &key[i]);
   }

   scanf("%d", &dc);
   scanf("%d", &oc);
   scanf("%d", &hx);

   scanf("%d", &n);

//
  for (i = 0; i < n; i++) {

    if ((i +1) % hx == 0) {

      scanf("%s", byt);

       I = 0;
     while (I < 2) {
        z = 3;
        x = byt[I];
       if (x > 9)
         x -= 55;
       else
         x -= 48;
      while (z != 0) {
         pot2 = pow(2,z);
       if (x >= pot2) {
        if (I == 0)
          bin[z+4] = '1';
        else
          bin[z] = '1';
         x -= pot2;
       }
       else {
        if (I == 0)
          bin[z+4] = '0';
        else
          bin[z] = '0';
       }
       --z;
      }
      ++I; 
     }
    }

    else
    if ((i +1) % oc == 0) {
      scanf("%s", byt);
    }

    else
    if ((i +1) % dc == 0) {
      scanf("%d", &dec);

       z = 7;
       x = pow(2,z);
     while (z > 0) {
      if (dec > x) {
        bin[z] = '1';
        dec -= x;
      }
      else
        bin[z] = '0';
      --z;
     }
    }

    else {
      scanf("%s", bin);
    }

/* Limpeza de byt com ...
  for (i = 0; i < 8; i++)
     byt[i] = 46;
*/

// Inversao para a Entrada
   e = 0;
   d = 7;
  while (e < d) {
    aux = bin[e];
    bin[e] = bin[d];
    bin[d] = aux;
  ++e;
  --d;
  }

// Decodificacao
   for (i = 0; i < 8; i++) {
     bit[i] = bin[key[i]];
   }

// Conversao Out para Decimal/Caractere
    num = 0;
   for (b = 0; b < 8; b++) {
    if (bit[b] == '1')
      num += pow(2,b);
   } 
    out[i] = num;
  } out[i] = '\0';
    printf("Teste %d:\n", T);
    printf("%s\n", out);
   k--;
  }
 return 0;
}
