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
				printf("pomba");
			}else{ // carnivoro
				printf("aguia");
			}
		}else{ // mamifero
			if(strcmp(tipo3, "onivoro") == 0){
				printf("homem");
			}else{ // herbivoro
				printf("vaca");
			}
		}
	} else { // invertebrado
		if(strcmp(tipo2, "inseto") == 0){
			if(strcmp(tipo3, "hematofago") == 0){
				printf("pulga");
			}else{ // herbivoro
				printf("lagarta");
			}
		}else{ // anelideo
			if(strcmp(tipo3, "hematofago") == 0){
				printf("sanguessuga");
			}else{ // onivoro
				printf("minhoca");
			}
		}
	}

	
	return 0;
}
