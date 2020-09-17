#include <stdio.h>
#include <string.h>
int main()
{
    int cont1, cont2, size;
    char risada[60], auxiliar[60];
    
    scanf("%s", risada);
	
	cont2 = 0;
    for(cont1=0; risada[cont1]; cont1++)
    {
        if(risada[cont1] == 'a' || risada[cont1] == 'e' || risada[cont1] == 'i' || risada[cont1] == 'o' || risada[cont1] == 'u')
        {
            auxiliar[cont2] = risada[cont1];
            cont2++;
        }
    }
    auxiliar[cont2] = '\0';
    size = strlen(auxiliar);
    for(cont1 = 0, cont2 = size-1; cont1 < size; cont1++, cont2--)
    {
        if(auxiliar[cont1] != auxiliar[cont2])
        {
            printf("N\n");
            return 0;
        }
    }
    printf("S\n");
    return 0;
}
