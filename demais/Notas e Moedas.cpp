#include <stdio.h>

int main(){
	
	double valor_input, aux, aux_notas;
	int diff, cem, cinquenta, vinte, dez, cinco, dois, um, aux_moedas, um_moeda, cinq_moeda, vinte_cinco_moeda, dez_moeda, cinco_moeda, zero_um_moeda;
	
	scanf("%lf", &valor_input);
	
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
	
	//moedas
	
	aux = valor_input * 100;
	
	aux_moedas = (int) aux;
	
	diff = aux_moedas % 100;
	
    cinq_moeda = diff/50; 
    
    diff = diff%50;
    
    vinte_cinco_moeda = diff/25; 
    
    diff = diff%25;
    
    dez_moeda = diff / 10; 
    
    diff = diff % 10; 
    
    cinco_moeda = diff / 5; 
    
    zero_um_moeda = diff % 5; 
	
	
	
	//printando na tela o result
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinquenta);
	printf("%d nota(s) de R$ 20,00\n",vinte);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",cinq_moeda);
    printf("%d moeda(s) de R$ 0.25\n",vinte_cinco_moeda);
    printf("%d moeda(s) de R$ 0.10\n",dez_moeda);
    printf("%d moeda(s) de R$ 0.05\n",cinco_moeda);
    printf("%d moeda(s) de R$ 0.01\n",zero_um_moeda);
	
	
	return 0;
}

