#include <stdio.h>
#include <string.h>

int main(){
	
	int testes, cont, cont2, sizeTexto1, sizeTexto2, num;
	char texto1[50], texto2[2];
	
	scanf("%d", &testes);
	
	for(cont = 0; cont < testes; cont++){
		scanf("%s", &texto1);
		scanf("%s", &texto2);
		
		sizeTexto1 = strlen(texto1);
		sizeTexto2 = strlen(texto2);
		
		if(sizeTexto1 < sizeTexto2){
			num = sizeTexto2;
		}else{
			num = sizeTexto1;
		}
		
		for(cont2 = 0; cont2 < num; cont2++){
			if(cont2 < sizeTexto1){
				printf("%c", texto1[cont2]);
			}else if(cont2 < sizeTexto2){
				printf("%c", texto2[cont2]);
			}
			//printf("\n");
		}
	}
	return 0;
}

