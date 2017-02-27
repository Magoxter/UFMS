    /* En(Enable) */
#include <stdio.h>

void enable (void);
void en1en2 (void);
void ctrl (void);

int main (void) {
  int op;
   printf("MENU:\n");
   printf("1) En(Enable)\n");
   printf("2) En1 e En2\n");
   printf("3) Ctrl\n");
   printf("4) SAIR\n");
   printf("\n");
   printf("Operacao: ");
    scanf("%d", &op);
 while (op) {
  if (op == 1)
   enable();
  else if (op == 2)
   en1en2();
  else if (op == 3)
   ctrl();
  else {
    printf("Funcao Finalizada\n");
   break;
  }
 printf("\nOperacao: ");
  scanf("%d", &op);
 }
 return 0;
}

void enable (void) {
  int en,a,
      ctrl;
   printf("Metodo...\n");
   printf("Or(0) ou And(1): ");
    scanf("%d", &ctrl);
   printf("\n");
   printf("En: ");
    scanf("%d", &en);
 if (ctrl) {
  if (en)
    printf("X = A\n");
  else
    printf("X = 0\n");
 } else {
  if (en)
    printf("X = A\n");
  else
    printf("X = 1\n");
 }
 return;
}

void en1en2 (void) {
  int en1,en2,
      ctrl;
   printf("Metodo...\n");
   printf("XorAnd(0) ou And(1): ");
    scanf("%d", &ctrl);
   printf("\n");
   printf("En1: ");
    scanf("%d", &en1);
   printf("En2: ");
    scanf("%d", &en2);
 if (ctrl) {
  if (en1 && en2)
    printf("X = A\n");
  else
    printf("X = 0\n");
 } else {
  if (en1 ^ en2)
    printf("X = A\n");
  else
    printf("X = 0\n");
 }
 return;
}

void ctrl (void) {
  int ctrl;
   printf("Ctrl: ");
    scanf("%d", &ctrl);
  if (ctrl) {
    printf("X = A\n");
    printf("Y = 0\n");
  } else {
      printf("X = 0\n");
      printf("Y = A\n");
  }
 return;
}
