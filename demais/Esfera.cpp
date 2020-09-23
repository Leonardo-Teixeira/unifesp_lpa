#include <stdio.h>


int main(){
	
	double input, volume;
	
	scanf("%lf", &input);
	
	volume = ((4/3.0) * 3.14159 * (input * input * input));
	
	printf("VOLUME = %.3lf", volume);
	
	return 0;
}
