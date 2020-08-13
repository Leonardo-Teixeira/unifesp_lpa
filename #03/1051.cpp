#include <stdio.h>

int main () {
	float salario, imposto, diff;
	
	scanf("%f", &salario);
	
	if(salario < 2000){
		printf("Isento");
	} else if( 2000.01 < salario < 3000.00){
		diff = salario - 2000.01;
		imposto = diff * 0.08;
		printf("R$ %0.2f", &imposto);
	} else if (3000.00 < salario < 4500.00){
		if(salario > 4000.00){
			diff = 4500.00 - salario;
			imposto = 0.18 * diff;
			printf("R$ %0.2f", &imposto);
		}else{
			diff = salario - 3000.01;
			imposto = 0.08 * diff;
			printf("R$ %0.2f", &imposto);
		}
	} else if(salario > 4500.00){
		diff = salario - 4500.00;
		imposto = 0.28 * diff;
		printf("R$ %0.2f", &imposto);
	}
	
	
return 0;
}

