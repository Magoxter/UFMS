#include <stdio.h>
#define MAX 1000

int main () {
  int n,i,
      v[MAX];
    scanf("%d", &n);
     v[0] = 0;
   for (i = 1; i <= n; i++)
      scanf("%d", &v[i]);
    ordena(n,&v);
   for (i = 0; i < n+1; i++)
      printf("%d ", v[i]);
      printf("\n");
 return 0;
}

void ordena (int n,int v[MAX]) {
  int i,j,
      min;
    for (i = 0; i < n-1; i++) {
         min = i;
        for (j = i+1; j < n; j++) {
            if (v[j] < v[min]) {
                min = j;
             int tmp;
               tmp = v[i];
               v[i] = v[min];
               v[min] = tmp;
            }
        }
    }
}
