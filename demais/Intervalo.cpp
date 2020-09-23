#include <stdio.h>

int main(){
	double input;
	
	scanf("%lf", &input);
	
	if( input < 0.00 || input > 100.00 ){
		printf("Fora de intervalo\n");
	}else if( input <= 25.0){
		printf("Intervalo [0,25]\n");
	}else if( input <= 50.0){
		printf("Intervalo (25,50]\n");
	}else if( input <= 75.0){
		printf("Intervalo (50,75]\n");
	}else if( input <= 100.0){
		printf("Intervalo (75,100]\n");
	}
	return 0;
}
