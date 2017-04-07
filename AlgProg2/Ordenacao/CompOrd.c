#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10000

void troca(int *a, int *b);
void bubblesort(int n, int v[]);
void selectionsort(int n, int v[]);
void insertionsort(int n, int v[]);
void copia_tmp(int n, int v[], int tmp[]);


int main(void)
{
  int i, v[MAX], tmp[MAX];
  int n = MAX;
  clock_t inicio, fim;

  /* initialize random seed: */
  srand (time(NULL));

  for (i = 0; i < n; i++)
    v[i] = rand();

  printf("%d elementos\n", n);

  
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

  return 0;
}
