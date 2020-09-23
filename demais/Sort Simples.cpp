#include <stdio.h>


int main(){
	
	int A, B, C, COPYA, COPYB, COPYC, AUX;

	
	scanf("%d %d %d", &A, &B, &C);
	
	COPYA = A;
	COPYB = B;
	COPYC = C;
	
	if(COPYA > COPYB){
		AUX = COPYA;
		COPYA = COPYB;
		COPYB = AUX;
	}
	
	if(COPYA > COPYC){
		AUX = COPYA;
		COPYA = COPYC;
		COPYC = AUX;
	}
	
	if(COPYB > COPYC){
		AUX = COPYB;
		COPYB = COPYC;
		COPYC = AUX;
	}
	
	printf("%d\n%d\n%d\n", COPYA, COPYB, COPYC);
	printf("%\n");
	printf("%d\n%d\n%d\n", A, B, C);

	return 0;
}

