#include <stdio.h>
#include <math.h>

int main(void) {
  int k;          // Casos de Teste
  int i;          // Indice Geral
  int x;          // Variavel Auxiliar
  int y;          // Variavel Auxiliar
  int z;          // Variavel Auxiliar
  int e;          // Variavel Auxiliar
  int w;          // Variavel Auxiliar
  int d;          // Variavel Auxiliar
  int b;          // Indice Binario	
  int n;          // Tamanho Vetor

  int t;          // Indice de Teste
  int s;          // Indice do Hexadecimal e Octal 

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
  char out[100];   // Saida para o Caractere

   scanf("%d", &k);

    t = 1;

  while (k > 0) {

   for (i = 0; i < 8; i++)
      scanf("%d", &key[i]);

   scanf("%d", &dc);
   scanf("%d", &oc);
   scanf("%d", &hx);

   scanf("%d", &n);

  for (i = 0; i < n; i++) {

//Caso Hexadecimal
    if ((i +1) % hx == 0) {
      scanf("%s", byt);
       s = 0;
     while (s < 2) {
        z = 3;
        x = byt[s];
       if (x >= 48 && x <= 57)
         x -= 48;
       if (x >= 65 && x <= 90)
         x -= 45 +10;
      while (z >= 0) {
         pot2 = pow(2,z);
       if (x >= pot2) {
        if (s == 0)
          bin[z +(1*4)] = '1';
        else
          bin[z +(0*4)] = '1';
         x -= pot2;
       }
       else {
        if (s == 0)
          bin[z +(1*4)] = '0';
        else
          bin[z +(0*4)] = '0';
       }
       --z;
      }
      ++s; 
     }
     bin[8] = '\0';
        e = 0;
        d = 7;
      while (e < d) {
         aux = bin[e];
         bin[e] = bin[d];
         bin[d] = aux;
        ++e;
        --d;
      }
    }

// Caso Octal
    else
    if ((i +1) % oc == 0) {

      scanf("%s", byt);

       s = 0;
     while (s < 3) {
      if (s == 0)
        z = 1;
      else
        z = 2;
        x = byt[s];
      if (x >= 48 && x <= 55)
        x -= 48;
      else
        return 0;
      while (z >= 0) {
        y = pow(2,z);
        if (x >= y) {
         if (s == 0)
           bin[z +(2*3)] = '1';
         else
         if (s == 1)
           bin[z +(1*3)] = '1';
         else
           bin[z +(0*3)] = '1';
         x -= y;
        }
        else {
         if (s == 0)
           bin[z +(2*3)] = '0';
         else
         if (s == 1)
           bin[z +(1*3)] = '0';
         else
           bin[z +(0*3)] = '0';
        }
       --z;
      }
      ++s;
     }
     bin[8] = '\0';
        e = 0;
        d = 7;
      while (e < d) {
         aux = bin[e];
         bin[e] = bin[d];
         bin[d] = aux;
        ++e;
        --d;
      }
    }

// Caso Decimal
    else
    if ((i +1) % dc == 0) {
      scanf("%d", &dec);
       z = 7;
     while (z >= 0) {
       x = pow(2,z);
      if (dec >= x) {
        bin[z] = '1';
        dec -= x;
      }
      else
        bin[z] = '0';
      --z;
     }
     bin[8] = '\0';
        e = 0;
        d = 7;
      while (e < d) {
         aux = bin[e];
         bin[e] = bin[d];
         bin[d] = aux;
        ++e;
        --d;
      }
    }

// Caso Binario
    else {
      scanf("%s", bin);
    }

// Inversao de Bin
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
   for (b = 0; b < 8; b++) {
     bit[b] = bin[key[b]];
   } bit[8] = '\0';

// Inversao de Bit
    e = 0;
    d = 7;
  while (e < d) {
    aux = bit[e];
    bit[e] = bit[d];
    bit[d] = aux;
   ++e;
   --d;
  }

// Conversao Bit Bin-Dec
   num = 0;
  for (w = 0; w < 8; w++) {
    if (bit[w] == '1')
      num += pow(2,w);
  }

    out[i] = num;
  } out[n] = '\0';
    printf("Teste %d:\n", t);
    printf("%s\n", out);
   t++;
   k--;
  }
 return 0;
}
