#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int entrada, cont, cont2, qtd_led, tam;
    char num[110];
    
    scanf("%d", &entrada);
    for(cont = 0; cont < entrada; cont++){
    	scanf("%s", &num);
    	tam = strlen(num);
    	qtd_led = 0;
    	for(cont2 = 0; cont2 < tam; cont2++ ){
    		if(num[cont2] == '1'){
    			qtd_led += 2;
			}
			if(num[cont2] == '2'){
    			qtd_led += 5;
			}
			if(num[cont2] == '3'){
    			qtd_led += 5;
			}
			if(num[cont2] == '4'){
    			qtd_led += 4;
			}
			if(num[cont2] == '5'){
    			qtd_led += 5;
			}
			if(num[cont2] == '6'){
    			qtd_led += 6;
			}
			if(num[cont2] == '7'){
    			qtd_led += 3;
			}
			if(num[cont2] == '8'){
    			qtd_led += 7;
			}
			if(num[cont2] == '9'){
    			qtd_led += 6;
			}
			if(num[cont2] == '0'){
    			qtd_led += 6;
			}
		}
		printf("%d leds\n", qtd_led);
	}
    
    return 0;
}
