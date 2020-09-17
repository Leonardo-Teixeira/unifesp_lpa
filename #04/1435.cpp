#include <stdio.h>
#include <stdlib.h>

int main (){
	int size, j, i, start_matriz, end_matrix, element;

	while (1){

		scanf("%d", &size);
		int m[size][size];
		// definir o tamanho da matriz conforme as entradas
		
		
		
		if (size == 0){
			break;
		} else{
			
			
			start_matriz = 0;
			end_matrix = size;
			element = 1;
		
		
			while(1){
				for (i = start_matriz; i < end_matrix; i++){
					for (j = start_matriz; j < end_matrix; j++){
						m[i][j] = element;
					}
				}
				
				if (end_matrix == 0){
					break;
				}
				
				start_matriz++;
				end_matrix--;
				element++;
			}
			// matriz definida por i e j
			for (i = 0; i < size; i++){
				for (j = 0; j < size; j++){
					if (j == 0){
						printf(" ");
						printf("%3d", m[i][j]);
					}else{
						printf(" ");
						printf("%3d", m[i][j]);
					}
				}
				//utilize o numero antes para das espacamento*
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}
