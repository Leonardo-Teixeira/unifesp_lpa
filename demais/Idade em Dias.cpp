#include <stdio.h>
#include <math.h>

int main(){
	
	int dias, diff, ano, mes, dia;
	
	scanf("%d", &dias);
	
	diff = dias;
	
	ano = diff / 365;
	
	diff = diff - (ano * 365);
	
	mes = diff / 30;
	
	diff = diff - (mes * 30);
	
	dia = diff;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano, mes, dia);
	
	return 0;
}
