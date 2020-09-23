#include <stdio.h>


int main(){
	
	float salario, reajuste, novo_salario;
	int percentual;
	
	
	scanf("%f", &salario);
	
	if(salario <= 400.00){
		percentual = 15;
		novo_salario =  (salario * 1.15);
		reajuste = novo_salario - salario;
	}else if(salario <= 800.00){
		percentual = 12;
		novo_salario = (salario * 1.12);
		reajuste = novo_salario - salario;
	}else if(salario <= 1200.00){
		percentual = 10;
		novo_salario = (salario * 1.10);
		reajuste = novo_salario - salario;
	}else if(salario <= 2000.00){
		percentual = 7;
		novo_salario = (salario * 1.07);
		reajuste = novo_salario - salario;
	}else{
		percentual = 4;
		novo_salario = (salario * 1.04);
		reajuste = novo_salario - salario;
	}
	
	printf("Novo salario: %.2f\n", novo_salario);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %%\n", percentual);

	return 0;
}

