#include <stdio.h>

int main(){
	
	int valor_input, diff, cem, cinquenta, vinte, dez, cinco, dois, um;
	scanf("%d", &valor_input);
	
	//sucessivas divisoes para ir contando as moedas qtds
	diff = valor_input;
	
	cem = diff/100;
	
	diff = diff - (cem *100);
	
	cinquenta = diff / 50;
	
	diff = diff - (cinquenta *50);
	
	vinte = diff / 20;
	
	diff = diff - (vinte * 20);
	
	dez = diff / 10;
	
	diff = diff - (dez * 10);
	
	cinco = diff / 5;
	
	diff = diff - (cinco * 5);
	
	dois = diff / 2;
	
	diff = diff - (dois * 2);
	
	um = diff;
	
	//printando na tela o result
	printf("%d\n",valor_input);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinquenta);
	printf("%d nota(s) de R$ 20,00\n",vinte);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",um);
	
	
	return 0;
}
