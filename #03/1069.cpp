#include <stdio.h>
#include <string.h>
 
int main() {
 
    int times, i, j, cont;
	char text[1001];
    scanf("%d",&times);
    
    while(i < times){
        int diamonds=0;
        scanf("%s",text);

        for(j = 0; j < strlen(text); j++){
            if(text[j] == '\0'){
                break;
            }
            if(text[j] == '<'){
                for(cont = j; cont < strlen(text); cont++){
                    if(text[cont] == '>'){
                        diamonds++;
                        text[cont] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n",diamonds);
        i++;
    }
    return 0;
}
