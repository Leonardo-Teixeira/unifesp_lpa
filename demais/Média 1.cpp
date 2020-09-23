#include <stdio.h>

int main(){
	
	double input1, input2, media;
	
	scanf("%lf", &input1);
	scanf("%lf", &input2);
	
	media = ((input1 * 3.5) + (input2 * 7.5)) / 11 ;
	
	printf("MEDIA = %.5lf\n", media);
	return 0;
}
