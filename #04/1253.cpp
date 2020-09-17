#include <stdio.h>

int main(){

    int num_teste, deslocamento, palavra, j, criptografia;
    char letras[50];

    scanf("%d",&num_teste);
    while(num_teste--){
            scanf("%s",&letras);
            scanf("%d",&deslocamento);
           
            for(j = 0; j < 50; j++){
                if(letras[j] == '\0'){
            		break;
				} else if((letras[j] - deslocamento) < 65){
					criptografia = (letras[j] - deslocamento) + 26;
				} else {
					criptografia = (letras[j] - deslocamento);
				}
				printf("%c", criptografia);
            }  
            printf("\n");
    }
   
    return 0;
}
