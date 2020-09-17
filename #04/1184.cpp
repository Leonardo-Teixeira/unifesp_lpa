#include <stdio.h>

int main (){
	char input[5];
	int i, j;
	double array[12][12], add;
	
	add = 0.0;

	scanf("%s", &input);
	
	for(i = 0; i < 12; i ++){
		for(j = 0; j < 12; j ++){
			scanf("%lf", &array[i][j]);
		}
	}
	for(i = 1; i < 12; i ++){
		for(j = 0; j < i; j++){
			add += array[i][j];
		}
	}
	
	if(input[0] == 'M'){
		add = (add / 66.0);
		printf("%.1lf\n", add);
	}
	
	
	
	return 0;	
}
