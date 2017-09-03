	 /* Labirinto */
#include <stdio.h>
#define MX 100

void labrinto (char[MX][MX],int,int,int,int);
void print (char[MX][MX],int,int);

int main (void) {
  int r,l,c;
  int lin,col;
 char lab[MX][MX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &lin);
   scanf("%d", &col);
  for (l = 0; l < lin; l++)
   for (c = 0; c < col; c++)
   	 scanf(" %c", &lab[l][c]);
  labrinto(lab,lin,col,0,0);
 }
 return 0;
}

void labrinto (char lab[MX][MX], int lin, int col, int l, int c) {
 if (lab[l][c] != '1')
   return;
 if (l == lin-1 && c == col-1) {
   lab[l][c] = 'x';
  print(lab,lin,col);
  printf("\n");
   lab[l][c] = '1';
  return;
 }  lab[l][c] = 'x';
  if (l)
    labrinto(lab,lin,col,l-1,c);
  if (c)
    labrinto(lab,lin,col,l,c-1);
  if (l < lin-1)
    labrinto(lab,lin,col,l+1,c);
  if (c < col-1)
    labrinto(lab,lin,col,l,c+1);
 lab[l][c] = '1';
}

void print (char lab[MX][MX], int lin, int col) {
  int l,c;
 for (l = 0; l < lin; l++) {
  for (c = 0; c < col; c++) {
    printf("%c", lab[l][c]);
  } printf("\n");
 }
 return;
}
