	/* Papai Noel */
#include <stdio.h>
#define MX 100

int main (void) {
  int n,l,c;
  int santa[MX][MX];
   n = 5; l = c = 0;
 for (l = 0; l < n; l++)
  for (c = 0; c < n; c++)
  	santa[l][c] = 2;
 for (l = 0; l < n; l++) {
  for (c = 0; c < n; c++) {
  	if (!(l-c))
  	  santa[l][c] = 0;
  	if (l+c == 4)
  	  santa[l][c] = 0;
  	if (!l && c == n-1)
  	  santa[l][c] = 1;
  }
 } santa[3][0] = 0;
   santa[0][3] = 0;
   santa[n-1][0] = 1;
 for (l = 0; l < n; l++) {
  for (c = 0; c < n; c++) {
  	if (!(santa[l][c]-2))
  	  santa[l][c] = 1;
  }
 }
 for (l = 0; l < n; l++) {
  for (c = 0; c < n; c++) {
  	printf("%3d ", santa[l][c]);
 } printf("\n");
 }
 return 0;
}

void santa (int ) {
 if (!(p-q)) {
   perc[p] = '\0';
  printf("%s\n", perc);
 } else {
  for (fl = 0; fl < n; fl++) {
    x = sant[at][fl];
   if (x) {
     sant[at][fl] = -1;
     sant[fl][at] = -1;
    santa(sant,n,fl,perc[p] = '0'+ fl+1,p+1);
   }
  }
  return;
 }
}
