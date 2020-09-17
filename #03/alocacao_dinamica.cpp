#include <stdio.h>
#include <stdlib.h> 

int main(){
	
	int *v, qtd, *vetor;
	
	//printf("Tamanho %li em bytes\n", sizeof(v));
	
	scanf("%d", &qtd);
	
	vetor = (int * )(malloc(qtd * sizeof(v)));
	
	printf("espaco %d\n", vetor);
	
	free(vetor);
	return 0;
	
}

