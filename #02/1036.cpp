#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	double A, B, C, DELTA, X1, X2;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	DELTA = B*B - 4*A*C;
	
	if(DELTA < 0) {
		printf("Impossivel calcular");
	} else {
		if(A == 0){
			printf("Impossivel calcular");
		}else{
			
		X1 = (-B + sqrt(DELTA)) / (2 * A);
		X2 = (-B - sqrt(DELTA)) / (2 * A);
		
		printf("R1 = %0.5lf \n", X1);
		printf("R2 = %0.5lf", X2);	
		}
	}
	
	return 0;
}
