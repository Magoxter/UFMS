/* Media */

// Programa: Media.c
// Programador: Willian Xavier
// Data: --/--/----
// Dialogo: Este programa calcula a media final de um aluno para
// um curso com o total de tres notas de provas e duas notas de trabalhos.
// A media da disciplina eh dada por 0.75 da media das provas somada com
// 0.25 da media dos trabalhos. O alunos pode fazer uma prova optativa
// que substitui a menor nota das provas. Caso a media do aluno seja maior
// ou igual a 6.0 e a frequencia for igual ou superior a 75% o aluno eh
// considerado aprovado (AP). Se o aluno tiver frequencia igual ou superior
// a 75%, mas a nota for menor que 6.0, o aluno eh considerado reprovado
// por nota (RN). Se o total de faltas for superior a 25% o aluno eh
// considerado reprovado por falta (RF).

// Bibliotecas
    #include<stdio.h>       // scanf, printf
    #include<stdbool.h>     // booleanas
    #include<math.h>        // roundf
    #include<string.h>      // string

// Tipo String
    typedef char String[30];

// Funcao Principal
    int main(void) {

// Variaveis
    unsigned int numero;                 // numero dos alunos
    double       prova1, prova2, prova3; // notas das provas
    double       trabalho1, trabalho2;   // notas dos trabalhos
    double       menorNota;              // menor nota das avaliaÃ§Ãµes
    double       optativa;               // nota da prova optativa
    double       somaProvas;             // soma das avaliaÃ§Ãµes
    double       somaTrabalhos;          // soma dos trabalhos
    double       mediaProvas;            // mÃ©dia das provas
    double       mediaTrabalhos;         // mÃ©dia dos trabalhos
    double       mediaDisciplina;        // media das notas das provas
    unsigned int frequencia;             // porcentagem da frequencia
    int          temp;                   // resposta do usuÃ¡rio
    bool         resposta;               // resposta do usuÃ¡rio
    String       mensagem;               // mensagem da avaliaÃ§Ã£o
    int          n, i;

// pre: UmUInt1, UmDouble1, UmFloat2, UmDouble3, UmDouble4, UmDouble5
//      (UmBool, UmDouble6) || (UmBool)  && UmUInt2
//      UmUInt1 == numero && UmDouble1 == prova1 && UmDouble2 == prova2 &&
//      UmDouble3 == prova3 && UmDouble4 == trabalho1 && UmDouble5 == trabalho2
//      UmBool == resposta && UmDouble6 == optativa && UmUInt2 == frequencia

    scanf("%d", &n);
    for (i = 0; i < n; i++){

// Passo 1. Leia o Numero e as Notas das Provas e Trabalhos

// Passo 1.1. Leia o Numero do Aluno
    printf("Leia o nÃºmero do(a) aluno(a): ");
    scanf("%u", &numero);

// Passo 1.2. Leia as notas das provas.
    printf("Entre com a nota das provas: ");
    scanf("%lf %lf %lf", &prova1, &prova2, &prova3);

// Passo 1.3. Leia as notas dos trabalhos.
    printf("Entre com a nota dos trabalhos     : ");
    scanf("%lf %lf", &trabalho1, &trabalho2);

// Passo 1.4. Leia a porcentagem da frequÃªncia
    printf("Entre com a porcentagem da frequÃªncia: ");
    scanf("%u", &frequencia);

// Passo 1.5. Leia se o aluno fez a prova optativa
    printf("O Aluno fez prova optativa (1/0)?:  ");
    scanf("%d", &temp);
    resposta = (bool) temp;

// Se o Aluno fez a Prova Optativa
    if (resposta) {
        printf("Entre com a nota da prova optativa:  ");
        scanf("%lf", &optativa);

if(optativa > prova1 || optativa > prova2 || optativa > prova3 ){

    	if(prova1 < optativa && prova1 <= prova2 && prova1 <= prova3){
   		 prova1 = optativa;

   		}else if(prova2 < optativa && prova2 <= prova1 && prova2 <= prova3){
   		 prova2 = optativa;

   		}else if(prova3 < optativa && prova3 <= prova1 && prova3 <= prova2) {
   		 prova3 = optativa;

   		}


		}


   }
// Passo 2. Calcule a mÃ©dia da disciplina
// Passo 2.1. Calcule a soma das provas e a optativa, caso a OP for maior q uma das 3, a menor será 0;
somaProvas = prova1+prova2+prova3;
// Passo 2.2. Calcule a soma dos trabalhos
somaTrabalhos = trabalho1+trabalho2;
// Passo 2.4. Calcule a mÃ©dia das provas
mediaProvas = somaProvas/3.0;

// Passo 2.5. Calcule a mÃ©dia dos trabalhos
mediaTrabalhos = somaTrabalhos/2.0;
// Passo 2.6. Calcule a mÃ©dia da disciplina
mediaDisciplina = mediaProvas*0.75 + mediaTrabalhos*0.25;
// Passo 3. Compute a mensagem de avaliaÃ§Ã£o
mediaDisciplina = roundf(mediaDisciplina);

if (mediaDisciplina >= 6.0 && frequencia >= 75){
   strcpy(mensagem, "AP");
}else if(mediaDisciplina <6.0 && frequencia >= 75){
   strcpy(mensagem, "RN");
}else if(frequencia < 75){
   strcpy(mensagem, "RF");
}


// Passo 4. Imprima a mensagem
   printf("Aluno %u: Media =%5.1f, Frequencia =%4u%% - %s\n", numero, mediaDisciplina, frequencia, mensagem);
} // fim for

   return 0;

// pÃ³s: menorNota == min{prova1, prova2, prova3} &&
//      ((mediaDisciplina == 0.75*(prova1 + prova2 + prova3)/3.0 +
//       0.25*(trabalho1+trabalho2)/2.0) ||
//      (mediaDisciplina == 0.75*(prova1+prova2+prova3-menorNota+optativa)/3.0
//       + 0.25*(trabalho1+trabalho2)/2.0)) && ((mediaDisciplina >=6.0 &&
//       frequencia >= 75 && AP) || (mediaDisciplina < 6.0
//       && frequencia >= 75 && RN) || (frequencia < 75 && RF))
} // fim da funÃ§Ã£o principal
