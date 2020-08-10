#include <stdio.h>

int main () {
	
	// peca 1
	int CODIGO1, NUMERO1;
	double VALOR1, TOTAL1;
	
	//peca 2
	int CODIGO2, NUMERO2;
	double VALOR2, TOTAL2;
	
	// total
	double GERAL;
	
	//peca 1
	scanf("%d", &CODIGO1);	
	scanf("%d", &NUMERO1);	
	scanf("%lf", &VALOR1);	
	
	//peca 2
	scanf("%d", &CODIGO2);	
	scanf("%d", &NUMERO2);	
	scanf("%lf", &VALOR2);	
	
	TOTAL1 = NUMERO1 * VALOR1;
	TOTAL2 = NUMERO2 * VALOR2;
	
	GERAL = TOTAL1 + TOTAL2 ;
	
	printf("VALOR A PAGAR: R$ %0.2lf", GERAL);
	
	return 0;
}
