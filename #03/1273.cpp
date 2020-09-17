#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
	char text[51];
} string;


int main (){

	unsigned short cases, aux;
	unsigned short cont, aux2, word;
	
	scanf("%hu\n", &cases);
	while (cases != 0){
		aux2 = cases;
		string values[aux2];
		cont = 0;
		while (cases--){
            scanf(" %s", values[cont++].text);
        }
        
		aux = 0;
		for(cont = 0; cont < aux2; cont++){	
			word = strlen(values[cont].text);
			if (word > aux)
				aux = word;

		}
		
		for (cont = 0; cont < aux2; cont++){
            printf("%*s\n", aux, values[cont].text);
        }
			
		scanf("%hu", &cases);
		
		if (cases != 0){
            printf("\n");
        }
	}	
	return 0;
}
