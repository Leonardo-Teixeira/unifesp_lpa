#include <stdio.h>

int main() {

	double A, B, C;

	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);

	if (A >= B + C) {
		printf("NAO FORMA TRIANGULO\n");
	}
	else {
		if ((A*A) == ((B*B) + (C*C))){
			printf("TRIANGULO RETANGULO\n");
			if(A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}else{
				printf("TRIANGULO ISOCELES\n");	
			}
		} else if((A*A) > ((B*B) + (C*C))){
			printf("TRIANGULO OBTUSANGULO\n");
			if(A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}else{
				printf("TRIANGULO ISOCELES\n");	
			}
		} else if((A*A) < ((B*B) + (C*C))) {
			printf("TRIANGULO ACUTANGULO\n");
			if(A == B && B == C && A == C){
				printf("TRIANGULO EQUILATERO\n");
			}else{
				printf("TRIANGULO ISOCELES\n");	
			}
		}

	}

	return 0;
}
