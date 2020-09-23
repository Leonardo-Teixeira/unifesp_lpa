#include <stdio.h>

int main(){
	
	int tempo, horas, horas_em_segundos, minutos, segundos;
	
	horas_em_segundos = 3600;
	
	scanf("%d", &tempo);
	
	horas = tempo / horas_em_segundos;
	
	minutos = (tempo - (horas_em_segundos * horas )) / 60;
	
	segundos = (tempo - (horas_em_segundos * horas ) - (minutos * 60));


	printf("%d:%d:%d\n",horas, minutos, segundos);
	return 0;
}
