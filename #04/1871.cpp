#include <stdio.h>
#include <string.h>

int main(){
	
	long int entrada1, entrada2, cont, matriz, soma; // devido ao 999.999.999
	
	char result[11];
	
	scanf("%d %d",&entrada1,&entrada2);
	
	if(entrada1 == 0 && entrada2 == 0){
		//valores iguais a 0, condicao do enunciado
	}else{
		soma = entrada1 + entrada2;
		matriz = sprintf(result, "%d", soma); //grava em uma matriz
		result[matriz+1]='\0';
		for(cont = 0; cont < matriz; cont++){
			if(result[cont] != '0')
			printf("%c", result[cont]);
		}
	}
	
	
	return 0;
}
