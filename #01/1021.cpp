#include <stdio.h>

int main() {

	float A;
	int cont = 0;
	scanf("%f", &A);

	if (A>=0 && A<1000000.00) {
		printf("NOTAS:\n");
		while (A>=100) {
			A = A-100;
			cont++;
		} printf("%d nota(s) de R$ 100.00\n", cont);
		cont = 0;
		while (A>=50) {
			A = A - 50;
			cont++;
		}
		printf("%d nota(s) de R$ 50.00\n", cont);
		cont = 0;
		while (A>=20) {
			A = A - 20;
			cont++;
		}
		printf("%d nota(s) de R$ 20.00\n", cont);
		cont = 0;
		while (A>=10) {
			A = A - 10;
			cont++;
		}
		printf("%d nota(s) de R$ 10.00\n", cont);
		cont = 0;
		while (A>=5) {
			A = A - 5;
			cont++;
		}
		printf("%d nota(s) de R$ 5.00\n", cont);
		cont = 0;
		while (A>=2) {
			A = A - 2;
			cont++;
		}
		printf("%d nota(s) de R$ 2.00\n", cont);
		cont = 0;
		printf("MOEDAS:\n");
		while (A>=1) {
			A = A - 1;
			cont++;
		}
		printf("%d moeda(s) de R$ 1.00\n", cont);
		cont = 0;
		while (A>=0.50) {
			A = A - 0.50;
			cont++;
		}
		printf("%d moeda(s) de R$ 0.50\n", cont);
		cont = 0;
		while (A>=0.25) {
			A = A - 0.25;
			cont++;
		}
		printf("%d moeda(s) de R$ 0.25\n", cont);
		cont = 0;
		while (A>=0.10) {
			A = A - 0.10;
			cont++;
		}
		printf("%d moeda(s) de R$ 0.10\n", cont);
		cont = 0;
		while (A>=0.05) {
			A = A - 0.05;
			cont++;
		}
		printf("%d moeda(s) de R$ 0.05\n", cont);
		cont = 0;
		while (A>=0.001) {
			A = A - 0.01;
			cont++;
		}
		printf("%d moeda(s) de R$ 0.01\n", cont);
	}

	return 0;
}
