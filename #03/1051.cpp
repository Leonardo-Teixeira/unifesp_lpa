#include <stdio.h>

int main () {
	float salario, total;
	
	scanf("%f", &salario);
	
	if(salario <= 2000.0){
		printf("Isento");
	} else if(salario <= 3000.0){
		total = (salario - 2000.0) * 0.08;
		printf("R$ %0.2f\n", total);
	} else if (salario <= 4500.0){
		total = ((salario - 3000.0) * 0.18) + ( 1000.0 * 0.08);
		printf("R$ %0.2f\n", total);
	} else{
		total = ((salario - 4500.0) * 0.28) + (1000.0 * 0.08) + (1500.0 * 0.18);
		printf("R$ %0.2f\n", total);
	}
	
	
	return 0;
}

