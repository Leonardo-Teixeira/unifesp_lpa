#include <stdio.h>

int main () {
	int NUMERO, HORAS;
	double SALARY, SALARIO;
	
	scanf("%d", &NUMERO);
	scanf("%d", &HORAS);
	scanf("%lf", &SALARY);
	
	SALARIO = HORAS * SALARY;

	
	printf("NUMBER = %d\n", NUMERO);	
	printf("SALARY = U$ %0.2lf\n", SALARIO);	

	return 0;
}
