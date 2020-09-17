#include<stdio.h>
int main(){
	
	int dia, diaFinal, hora, horaFinal, minuto, minutoFinal, segundo, segundoFinal;
	
	scanf("Dia %d", &dia);
 	scanf("%d : %d : %d\n", &hora, &minuto, &segundo);
 	scanf("Dia %d", &diaFinal);
 	scanf("%d : %d : %d", &horaFinal, &minutoFinal, &segundoFinal);
	
	//delta de dia, hora, minuto, segundo
	dia = diaFinal - dia;
	
	hora = horaFinal - hora; 
	
	minuto = minutoFinal - minuto;
	
	segundo = segundoFinal - segundo;
	
	if(hora < 0){
		hora = hora + 24;
		dia = dia - 1;
	}
	
	if(minuto < 0){
		minuto = minuto + 60;
		hora = hora - 1;
	}
	
	if(segundo < 0){
		segundo = segundo + 60;
		minuto = minuto - 1;
	}
	
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n", hora);
 	printf("%d minuto(s)\n", minuto);
    printf("%d segundo(s)\n", segundo);
	
	return 0;
}

