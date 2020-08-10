#include <stdio.h>

int main () {
	
	
	char nome[25]; //string 
	double SALARIO, VENDAS, TOTAL;
	
	scanf("%s", &nome);	
	scanf("%lf", &SALARIO);	
	scanf("%lf", &VENDAS);	
	
	TOTAL = (0.15 * VENDAS) + SALARIO;
	
	printf("TOTAL = %0.2lf", TOTAL);
	
	return 0;
}
