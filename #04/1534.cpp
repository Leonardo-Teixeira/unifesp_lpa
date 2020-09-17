#include <stdio.h>

int main (){
	int input, i, j;
	
	while(1 == scanf("%d", &input)){
		for(i = 1; i <= input; i++){
			for(j = 1; j <= input; j++){
				if(i+j == input+1){
					printf("2");
				}else if(i == j){
					printf("1");
				}else{
					printf("3");
				}
			}
			printf("\n");
		}
	}

	return 0;
}

