#include <stdio.h>
#include <math.h>

int main(){
	
	int input1, input2, input3, input4, cd, ab;
	
	scanf("%d", &input1);
	scanf("%d", &input2);	
	scanf("%d", &input3);
	scanf("%d", &input4);
	
	cd = input3 + input4;
	ab = input1 + input2;
	
	
	if(input4 > input1 && input2 > input3 && cd > ab && input3 > 0.0 && input4 > 0 && (input1/2) != 0){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");
	}
	
	
}
