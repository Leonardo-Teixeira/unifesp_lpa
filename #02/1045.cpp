#include <stdio.h>

int main() {

	double A, B, C, PARAM;

	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	if (A < B){ 
    	PARAM = A; A = B; B = PARAM;
	} 
	if (B < C){ 
	    PARAM = B; B = C; C = PARAM;
	} 
	if (A < B){ 
	    PARAM = A; A = B; B = PARAM;
	}
	


	if (A >= B + C) {
		printf("NAO FORMA TRIANGULO\n");
	}else {
		if ((A*A) == ((B*B) + (C*C))){
			printf("TRIANGULO RETANGULO\n");
		} else if((A*A) > ((B*B) + (C*C))){
			printf("TRIANGULO OBTUSANGULO\n");
			
		} else if((A*A) < ((B*B) + (C*C))) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		if (A == B && B == C) {
			printf("TRIANGULO EQUILATERO\n");
		} else if (A == B || B == C){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	return 0;
}
