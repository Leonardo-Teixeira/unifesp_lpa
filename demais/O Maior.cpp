#include <stdio.h>
#include <math.h>

int main(){
	
	int input1, input2, input3, maior12, maior23;
	
	scanf("%d", &input1);
	scanf("%d", &input2);	
	scanf("%d", &input3);
	
	maior12 = (input1+input2+abs(input1-input2)) / 2;
	
	maior23= (maior12+input3+abs(maior12-input3)) / 2;
	
	printf("%d eh o maior\n", maior23);
	
	return 0;
}
