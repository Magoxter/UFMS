/* Comparacao dos
   Metodos para
   Ordenacao */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000

void troca(int *a, int *b);
void bubblesort(int n, int v[]);
void selectionsort(int n, int v[]);
void insertionsort(int n, int v[]);
void copia_tmp(int n, int v[], int tmp[]);


int main(void) {
  int i, v[MAX], tmp[MAX];
  int n = MAX;
  clock_t inicio, fim;

  /* initialize random seed: */
  srand (time(NULL));

  for (i = 0; i < n; i++)
    v[i] = rand();

  printf("%d elementos\n", n);
  printf("\n");

  copia_tmp(n, v,tmp);
  inicio = clock();
  bubblesort(n, tmp);
  fim = clock();
  printf("BUBBLE: %g segundos\n", (fim - inicio) / (float) CLOCKS_PER_SEC);

  copia_tmp(n, v,tmp);
  inicio = clock();
  selectionsort(n, tmp);
  fim = clock();
  printf("SELECTION: %g segundos\n", (fim - inicio) / (float) CLOCKS_PER_SEC);
  
  copia_tmp(n, v,tmp);
  inicio = clock();
  insertionsort(n, tmp);
  fim = clock();
  printf("INSERTION: %g segundos\n", (fim - inicio) / (float) CLOCKS_PER_SEC);
  printf("\n");

  return 0;
}

void selectionsort(int n, int v[]) {
  int k,i;
  int min;
 for (i = 0; i < n-1; i++) {
   min = i;
  for  (k = i+1; k < n; k++)
    if (v[k] < v[min])
      min = k;
  if (min != i)
    troca(&v[i],&v[min]);
 }
 return;
}

void bubblesort(int n, int v[]) {
  int k,i;
 while (n--) {
  for (i = 0; i < n; i++) {
    k = i +1;
   if (v[k] < v[i])
     troca(&v[k],&v[i]);
  }
 }
 return;
}

void insertionsort(int n, int v[]) {
  int k,i;
  int num;
 for (i = 1; i < n; i++) {
   num = v[i];
   k = i -1;
  while ((k >= 0) && (v[k] > num)) {
    v[k+1] = v[k];
    k--;
  } v[k+1] = num;
 }
 return;
}

void troca(int *a, int *b) {
  int x;
    x = *a;
   *a = *b;
   *b =  x;
 return;
}

void copia_tmp(int n, int v[], int tmp[]) {
 for (int i = 0; i < n; i++)
   tmp[i] = v[i];
 return;
}
