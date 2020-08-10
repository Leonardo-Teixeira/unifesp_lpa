#include <stdio.h>

int main() {

	double LADO1, LADO2, LADO3, PERIMETRO, AREA;
	
	scanf("%lf", &LADO1);
	scanf("%lf", &LADO2);
	scanf("%lf", &LADO3);
	
	if(LADO1 + LADO2 > LADO3 && LADO2 + LADO3 > LADO1 && LADO1 + LADO3 > LADO2){
		PERIMETRO = LADO1 + LADO2 + LADO3;
		printf("PERIMETRO = %0.1lf", PERIMETRO);
	} else {
		AREA = ((LADO1 + LADO2) * LADO3) / 2;
		printf("AREA = %0.1lf", AREA);
	}
	
	return 0;
}
