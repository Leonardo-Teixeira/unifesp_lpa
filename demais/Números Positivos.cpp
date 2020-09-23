#include <stdio.h>

int main(){
	int cont, total;
	float input;
	total = 0;
	
	for(cont = 1; cont <= 6; cont++){
		scanf("%f", &input);
		
		if(input >= 0){
			total = total + 1; 
		}
	}	
	
	printf("%d valores positivos\n", total);
    
	return 0;
}
