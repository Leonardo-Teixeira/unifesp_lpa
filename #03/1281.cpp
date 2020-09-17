#include <stdio.h>
#include <string.h>

// struct para as frutas
struct fruit{
    char name[100];
    float price;
};
 
int main(){
	
    int input, i, j, amount, aux1, aux2, aux3;
    char fruit_aux[100];
    float sum;
    
    scanf("%d",&input);
    
    while(i < input){
    	
        sum = 0.0;
        scanf("%d", &aux1);
        // declarando a matriz de frutas 
        struct fruit matriz[aux1];
        
        for(j = 0; j < aux1; j++){
        	//capturando o nome e preço
            scanf("%s", &matriz[j].name);
            scanf("%fruit_aux", &matriz[j].price);
        }
        
        scanf("%d", &aux2);
        for(j = 0; j < aux2; j++){
        	
            scanf("%s",&fruit_aux);
            scanf("%d",&amount);
            
            for(aux3 = 0; aux3 < aux1; aux3++){
                if(!strcmp(matriz[aux3].name, fruit_aux)){
                	sum += amount*matriz[aux3].price;
                	break;
                }
            }
        }
        printf("R$ %.2f\n",sum);
        i++;
    }
    return 0;
}
