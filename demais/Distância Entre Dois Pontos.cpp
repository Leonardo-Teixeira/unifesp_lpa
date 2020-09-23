#include <stdio.h>
#include <math.h>

int main(){
	float X1, X2, Y1, Y2, DIST;
	
	
	scanf("%f %f", &X1, &Y1);
	scanf("%f %f", &X2, &Y2);
	
	DIST = sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1 ) * (Y2 - Y1)));
	
	printf("%.4f", DIST);
	
	return 0;
}
