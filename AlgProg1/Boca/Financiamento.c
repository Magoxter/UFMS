/* Financiamento */

// Este Programa Le um Valor de um Emprestimo
// Taxa de Juros Anual e o Pagamento Mensal e Imprime
// o Numero do Pagamento, o Juro referente ao Mes e o
// Saldo Devedor apos o Pagamento.

/* Entrada:
 .  Emprestimo;
 .  Taxa dos Juros Anuais;
 .  Pagamentos Mensal;
 */

/* Saida:
 .  Numero do Pagamento;
 .  Juro ao Mes;
 .  Saldo Devedor apos o Pagamento;
 */

// Bibliotecas
    #include <stdio.h>
    #include <math.h>

// Funcao Principal
    int main (void) {

// Variaveis
    int     i,n;
    int     mes,
            meses,
            mesExtra,
            totalMeses;
    double  emprestimo;
    float   jurosAnual,
            totalJuros;
    double  pagamento,
            saldoDevedor;

// Laco
    scanf ("%i", &n);
    for (i = 1; i <= n; i++) {

// Leitura
    scanf (".2lf%", &emprestimo);
    scanf ("%f", &jurosAnuais);
    scanf ("%.2lf", &pagamento);

// Algoritmo
    meses = emprestimo / pagamento;                         // Parcelamento da Divida
    mesExtra = 1;                                           // Soma dos Juros
    totalMeses = meses + 1;                                 // Total Meses
    saldoDevedor =

    float jurosMensal[meses];

    for (k = 0; k < meses; k++) {
        jurosMensal[k] = ((jurosAnual/12) / 100) * saldoDevedor;  // Calculo do Juros Mensal

    for (mes = 1; mes <= meses; mes++) {

// Apresentacao
    printf("Pagamento No.  Pagamento    Juros  Saldo Devedor");
    printf("================================================");
    printf("    %5d          %19.2lf     %10.2f      %14.2lf", mes, pagamento, jurosMensal, saldoDevedor);

    }

    return 0;
    }

/* Variaveis
    int tx_anual;
    int n, mes =0;
    double emprestimo, pagamento_efetuado, devedor;
    double juros=0.0, tx=0, total_juros;
 */

/* Laco
    scanf("%d", &n);
    for (int i=0; i<n; i++){
 */
	scanf("%lf %d %lf", &emprestimo, &tx_anual, &pagamento_efetuado );
	emprestimo = fabs(emprestimo);
	pagamento_efetuado = fabs(pagamento_efetuado);
	tx_anual = abs(tx_anual);
	tx = (double) tx_anual;
	devedor = emprestimo;
	total_juros = 0.0;
	mes = 0;
	printf("Pagamento No.  Pagamento    Juros  Saldo Devedor\n");
	printf("================================================\n");

	while (devedor > 0.0){

		if(devedor > pagamento_efetuado){

		juros = (devedor - pagamento_efetuado) * ((tx/12)/100);
		devedor = (devedor + juros) - pagamento_efetuado;
		mes++;
		printf("%5d %18.2f %9.2f %13.2f\n", mes, pagamento_efetuado, juros, devedor);

		}
		if(devedor < pagamento_efetuado || devedor == pagamento_efetuado){
			pagamento_efetuado = devedor;
			juros = 0.0;
			devedor = 0.0;
			total_juros = pagamento_efetuado;
			mes ++;
			printf("%5d %18.2f %9.2f %13.2f\n\n\n", mes, pagamento_efetuado, juros, devedor);
			printf("Total de Juros =%14.2f\n\n", total_juros);
		}



	}


}


return 0;
}
