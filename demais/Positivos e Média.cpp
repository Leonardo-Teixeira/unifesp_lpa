#include <stdio.h>

int main(){
	int cont, total, aux;
	float input, soma, media;
	total = 0;
	soma = 0;
	aux = 0;
	
	for(cont = 1; cont <= 6; cont++){
		scanf("%f", &input);
		
		if(input >= 0){
			total = total + 1; 
			aux = aux + 1;
			soma = soma + input;
		}
	}	
	media = soma/aux;
	
	printf("%d valores positivos\n", total);
	printf("%.1f\n", media);
    
	return 0;
}
