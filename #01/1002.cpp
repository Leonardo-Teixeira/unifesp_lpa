#include <stdio.h>
#include <stdlib.h>


int main () {
	double raio, area;
	
	double n = 3.14159;
	
	printf("Insira o valor do raio:\n");
	scanf("%lf", &raio);
	
	area = (raio * raio) * n;
	
	printf("A = %0.4lf\n", area);


return 0;
}
