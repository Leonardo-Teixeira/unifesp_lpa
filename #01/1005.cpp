#include <stdio.h>

int main () {
	
	double NOTA1, NOTA2, MEDIA;
	
	printf("Insira a NOTA 1: \n");
	scanf("%lf", &NOTA1);
	
	printf("Insira a NOTA 2: \n");
	scanf("%lf", &NOTA2);
	
	MEDIA = ((NOTA1 * 3.5) + (NOTA2 * 7.5)) / 11;
	
	
	printf("MEDIA = %0.1lf\n", MEDIA);
	

	return 0;
}
