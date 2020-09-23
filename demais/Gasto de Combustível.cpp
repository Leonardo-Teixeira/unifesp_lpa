#include <stdio.h>

int main(){
	
	double horas, velocidade, litros ;
	
	scanf("%lf", &horas);
	scanf("%lf", &velocidade);
	
	litros = (horas * velocidade) / 12;
	printf("%.3lf\n", litros);
	return 0;
}
