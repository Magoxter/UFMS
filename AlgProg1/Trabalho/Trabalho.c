#include <stdio.h>
#include <string.h>
#include <math.h>

#define MX 10

int HexaDec (char[]);
int Octal   (char[]);

void Decimal   (char[]);
void Binario   (char[]);
void Inversao  (char[]);

int Conversao (char[]);

void Decodificacao (int[],char[]);

int main (void) {
  int k;          // Casos de Teste
  int i;          // Indice Geral
  int n;          // Tamanho Vetor

  int t;          // Indice de Teste

  int dc;         // Recorrencia Decimal
  int oc;         // Recorrencia Octal
  int hx;         // Recorrencia Hexadecimal

  int num;        // Numero para Conversao Decimal

  int key[MX];    // Vetor de Entrada

//char byt[MX];   // Byte do Caractere - input
//char bit[MX];   // Byte do Caractere - output
  char bin[MX];   // Binary do Caractere
  char out[MX*MX];// Saida para o Caractere

   scanf("%d", &k);

    t = 1;

  while (k--) {
   for (i = 0; i < 8; i++)
      scanf("%d", &key[i]);

    scanf("%d", &dc);
    scanf("%d", &oc);
    scanf("%d", &hx);

    scanf("%d", &n);

  for (i = 0; i < n; i++) {
   if ((i +1) % hx == 0) {
   	if (!(HexaDec(bin)))
   		return 0;
   }
   else
   if ((i +1) % oc == 0) {
   	if (!(Octal(bin)))
   		return 0;
   }
   else
   if ((i +1) % dc == 0)
   	 Decimal(bin);
   else
   	 Binario(bin);

   	Inversao(bin);

   	Decodificacao(key,bin);

   	Inversao(bin);

   	num = Conversao(bin);
    out[i] = num;
  } out[n] = '\0';
  printf("Teste %d:\n", t++);
  printf("%s\n", out);
 }
 return 0;
}

int HexaDec (char bin[]) {
	int s;
	int z;
	int x;
	int y;
  char byt[MX];
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
 		y = pow(2,z);
 	 if (x >= y) {
 	 	if (s == 0)
 	 		bin[z +(1*4)] = '1';
    else
    	bin[z +(0*4)] = '1';
     x -= y;
   } else {
   if (s == 0)
   	 bin[z +(1*4)] = '0';
   else
   	 bin[z +(0*4)] = '0';
   } --z;
  } ++s;
 } bin[8] = '\0';
  Inversao(bin);
 return 1;
}

int Octal (char bin[]) {
	int s;
	int z;
	int x;
	int y;
  char byt[MX];
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
 	 } else {
 	 if (s == 0)
 	 	 bin[z +(2*3)] = '0';
 	 else
 	 if (s == 1)
 	 	 bin[z +(1*3)] = '0';
 	 else
 	 	 bin[z +(0*3)] = '0';
 	 } --z;
 	} ++s;
 } bin[8] = '\0';
  Inversao(bin);
 return 1;
}

void Decimal (char bin[]) {
	int z;
	int x;
	int dec;
	 scanf("%d", &dec);
	  z = 7;
 while (z >= 0) {
 	 x = pow(2,z);
 	if (dec >= x) {
 		bin[z] = '1';
 		dec -= x;
 	} else
 	    bin[z] = '0';
  --z;
 } bin[8] = '\0';
  Inversao(bin);
 return;
}

void Binario (char bin[]) {
	scanf("%s", bin);
 return;
}

void Decodificacao (int key[],char bin[]) {
  int  b;
  char bit[MX];
 for (b = 0; b < 8; b++) {
 	 bit[b] = bin[key[b]];
 } bit[8] = '\0';
  strcpy(bit,bin);
 return;
}

int Conversao (char bit[]) {
  int num;
  int w;
   num = 0;
 for (w = 0; w < 8; w++)
  if (bit[w] == '1')
  	num += pow(2,w);
 return num;
}

void Inversao (char str[]) {
  int l;
  int r;
  char aux;
   l = 0;
   r = 7;
 while (l < r) {
   aux = str[l];
   str[l] = str[r];
   str[r] = aux;
  ++l;
  --r;
 }
 return;
}
