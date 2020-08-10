#include <stdio.h>

int main () {
	
	double NOTA1, NOTA2, NOTA3, MEDIA;
	
	printf("Insira a NOTA 1: \n");
	scanf("%lf", &NOTA1);
	
	printf("Insira a NOTA 2: \n");
	scanf("%lf", &NOTA2);
	
	printf("Insira a NOTA 3: \n");
	scanf("%lf", &NOTA3);
	
	MEDIA = ((NOTA1 * 2) + (NOTA2 * 3) + (NOTA3 * 5)) / 10;
	
	
	printf("MEDIA = %0.1lf\n", MEDIA);
	

	return 0;
}
