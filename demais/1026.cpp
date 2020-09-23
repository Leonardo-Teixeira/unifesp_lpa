#include <stdio.h>

int main() {
    int input1, input2;
    
    
	    // ^ faz funcao de Ou-Exclusivo (XOR) 0 se entradas iguais ou 1 se diferentes
    while (scanf("%d %d", &input1, &input2) != EOF ){
    	printf("%d", (input1 ^ input2)); // SOMA MOFIZ
	}
        


    return 0;
}
