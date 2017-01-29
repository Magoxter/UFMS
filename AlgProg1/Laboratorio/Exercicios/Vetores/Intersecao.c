// Programa: intersecao.c
// Programador: Willian Xavier
// Data: 10/08/16
// Este programa lê dois conjuntos A e B armazenados em vetores e computa
// a interseção C = A interseção B. A e B têm TAM_MAX = 25.
// Individualmente, A e B não possuem elementos repetidos, mas elementos
// de A podem ocorrer em B e vice-versa.

//Bibliotecas
    #include<stdio.h>

// Funcao Principal
    int main(){

// Variaveis
    int tamA, tamB, tamAB;
    int disA[500], disB[500], disAB[500];
    int n,i;

// Laco
    scanf("%d", &n);
    for(i=0; i<n; i++){

// Passo 1. Leia as matrículas e arrange as listas
    scanf("%d", &tamA);
    for(int a = 0; a < tamA; a++){
       scanf("%d", &disA[a]);
   }
// Passo 1.2 Leia listaB
  scanf("%d", &tamB);
  for(int a=0; a<tamB; a++){
       scanf("%d", &disB[a]);
   }
// Passo 2. Calcule interseção
   tamAB = 0;
// Passo 2.1 Para cada elemnto de disA procure em disB
   for(int a=0; a<tamA; a++){
       int j = 0;
// Passo 2.1.1 Enquanto não encontrar o elemento e tem elementos
       while(disA[a]!=disB[j] && j<tamB){
             j++;
        }
// Passo 2.2.2 Analise o fim do while acima^
       if(j<tamB){
          disAB[tamAB] = disA[a];
          tamAB++;
       }//Fim if
   }//Fim for
// Passo 3. Imprima a interseção
   if(tamAB > 0){
   for(int k=0; k<tamAB; k++){
       printf("%d ", disAB[k]);
   }
   printf("\n");
   }
   else
   printf("vazia\n");
}//Fim for

return 0;
}
