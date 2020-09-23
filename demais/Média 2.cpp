#include <stdio.h>


int main(){
	
	double input1, input2, input3, media;
	
	scanf("%lf", &input1);
	scanf("%lf", &input2);	
	scanf("%lf", &input3);
	
	media = ((input1*2) + (input2*3) + (input3*5)) / 10;
	
	printf("MEDIA = %.1lf", media);
	
	return 0;
}
