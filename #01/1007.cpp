#include <stdio.h>

int main () {
	int A, B, C, D, DIFERENCA;
	
	printf("Insira o valor de A: \n");
	scanf("%d", &A);

	printf("Insira o valor de B: \n");
	scanf("%d", &B);
	
	printf("Insira o valor de C: \n");
	scanf("%d", &C);
	
	printf("Insira o valor de D: \n");
	scanf("%d", &D);
	
	DIFERENCA = ((A * B) - (C * D));
	
	printf("DIFERENCA = %d\n", DIFERENCA);	

	return 0;
}
