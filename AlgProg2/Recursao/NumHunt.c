	/* Number Hunter */
#include <stdio.h>
#define MX 100

void search (int[][MX],int,int,int);
int numerico (int[][MX],int,int,int,int,int);

int main (void) {
  int l,c,r;
  int lin,col,num;
  int mat[MX][MX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &lin);
   scanf("%d", &col);
  for (l = 0; l < lin; l++)
   for (c = 0; c < col; c++)
   	 scanf("%d", &mat[l][c]);
    scanf("%d", &num);
   search(mat,lin,col,num);
 }
 return 0;
}

void search (int mat[MX][MX],int lin,int col,int n) {
  int l,c,x;
 for (l = 0; l < lin; l++) {
  for (c = 0; c < col; c++) {
  	 x = mat[l][c];
  	if (!(x-(n%10))) {
  	 if (numerico(mat,lin,col,l,c,n)) {
  	   printf("SIM\n");
  	  return;
  	 }
  	}
  }
 } printf("NAO\n");
 return;
}

int numerico (int mat[][MX],int lin,int col,int l,int c,int n) {
  int x;
   x = mat[l][c];
 if (!(n/10) && !(x-n))
   return 1;
 if (!(x-(n%10))) {
 	  mat[l][c] = 10;

  if (l)
   if (numerico(mat,lin,col,l-1,c,n/10))
   	 return 1;
  if (c)
   if (numerico(mat,lin,col,l,c-1,n/10))
   	 return 1;
  if (c < col-1)
   if (numerico(mat,lin,col,l,c+1,n/10))
   	 return 1;
  if (l < lin-1)
   if (numerico(mat,lin,col,l+1,c,n/10))
  	 return 1;

  if (l && c < col-1)
   if (numerico(mat,lin,col,l-1,c+1,n/10))
   	 return 1;
  if (l < lin-1 && c < col-1)
   if (numerico(mat,lin,col,l+1,c+1,n/10))
   	 return 1;
  if (l < lin-1 && c)
   if (numerico(mat,lin,col,l+1,c-1,n/10))
   	 return 1;
 if (l && c)
 	if (numerico(mat,lin,col,l-1,c-1,n/10))
 		return 1;
  mat[l][c] = n %10;
 }
 return 0;
}
