#include <stdio.h>

int main () {
	int discagem;
	
	scanf("%d", &discagem);
	
	if(discagem == 61){
		printf("Brasilia");
	} else if(discagem == 71){
		printf("Salvador");
	} else if(discagem == 11){
		printf("Sao Paulo");
	} else if(discagem == 21){
		printf("Rio de Janeiro");
	} else if(discagem == 32){
		printf("Juiz de Fora");
	} else if(discagem == 19){
		printf("Campinas");
	} else if(discagem == 27){
		printf("Vitoria");
	} else if(discagem == 31){
		printf("Belo Horizonte");
	} else{
		printf("DDD nao cadastrado");
	}
	

return 0;
}

