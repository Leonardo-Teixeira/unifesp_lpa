#include <stdio.h>


int main(){
	
	int start_game, end_game, aux;
	
	
	scanf("%d %d", &start_game, &end_game);
	
	if(end_game <= start_game){
		end_game = end_game + 24;		
	}
	aux = end_game - start_game;
	
	printf("O JOGO DUROU %d HORA(S)\n", aux);

	return 0;
}

