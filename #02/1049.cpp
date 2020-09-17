#include <stdio.h>
#include <string.h>

int main() {

	
	char tipo1[10];
	char tipo2[15];
	char tipo3[20];

	scanf("%s", &tipo1);
	scanf("%s", &tipo2);
	scanf("%s", &tipo3);
	
	if(strcmp(tipo1, "vertebrado") == 0){
		if(strcmp(tipo2, "ave") == 0){
			if(strcmp(tipo3, "onivoro") == 0){
				printf("pomba\n");
			}else{ // carnivoro
				printf("aguia\n");
			}
		}else{ // mamifero
			if(strcmp(tipo3, "onivoro") == 0){
				printf("homem\n");
			}else{ // herbivoro
				printf("vaca\n");
			}
		}
	} else { // invertebrado
		if(strcmp(tipo2, "inseto") == 0){
			if(strcmp(tipo3, "hematofago") == 0){
				printf("pulga\n");
			}else{ // herbivoro
				printf("lagarta\n");
			}
		}else{ // anelideo
			if(strcmp(tipo3, "hematofago") == 0){
				printf("sanguessuga\n");
			}else{ // onivoro
				printf("minhoca\n");
			}
		}
	}
	
	return 0;
}
