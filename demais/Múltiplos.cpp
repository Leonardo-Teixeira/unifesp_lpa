#include <stdio.h>


int main(){
	
	int VAL1, VAL2, RESTO;
	
	
	scanf("%d %d", &VAL1, &VAL2);
	
	 if (VAL1%VAL2 == 0 || VAL2 % VAL1 == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
	

	return 0;
}

