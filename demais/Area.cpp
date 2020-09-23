#include <stdio.h>

int main(){
	
	float A, B, C, AREA, AREA_C, AREA_T, AREA_Q, AREA_R;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	AREA = (A * C) / 2;
	
	AREA_C = ((C * C) * 3.14159);
	
	AREA_T = ((A + B) * C) / 2; 
	
	AREA_Q = B * B;
	
	AREA_R = A * B;
	
	printf("TRIANGULO: %.3f\n", AREA);
	printf("CIRCULO: %.3f\n", AREA_C);
	printf("TRAPEZIO: %.3f\n", AREA_T);
	printf("QUADRADO: %.3f\n", AREA_Q);
	printf("RETANGULO: %.3f\n", AREA_R);
	
	
	return 0;
}
