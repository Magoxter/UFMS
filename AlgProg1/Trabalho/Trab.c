#include <stdio.h>
#include <math.h>

void print (int[],int);

int main(void) {
	int k;          // Casos de Teste
  int i;          // Indice Vetor
  int x;          // Variavel Auxiliar
  int z;          // Variavel Auxiliar
	int n;          // Tamanho Vetor
          
  int T;          // Indice de Teste
  int I;          // Indice do Hexadecimal
 
  int dc;         // Recorrencia Decimal
  int oc;         // Recorrencia Octal
  int hx;         // Recorrencia Hexadecimal

  int pot2;       // Potencia de 2 para Binario

  int key[10];    // Vetor de Entrada

  char byt[10];   // Byte do Caractere
  char bin[10];   // Binario do Caractere

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
  for (i = 1; i <= n; i++) {

    if (i % hx == 0) {

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
    if (i % oc == 0) {
      scanf("%s", byt);
    }

    else
    if (i % dc == 0) {
      scanf("%s", byt);
    }

    else {
      scanf("%s", bin);
    }
  }

// Limpeza de byt com ...
  for (i = 0; i < 8; i++)
     byt[i] = 46;

// Decodificacao -> veio no bin

    printf("Teste %d:\n", T);
   k--;
  }
 return 0;
}
