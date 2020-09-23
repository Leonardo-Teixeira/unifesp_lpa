#include <stdio.h>


int main(){
	
	double nota1, nota2, nota3, nota4, media, exame, media_exame;
	
	scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
	
	media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4) + ( nota4 * 1)) / 10;
	
	printf("Media: %.1f\n", media);
	
	if(media >= 7.0){
		printf("Aluno aprovado.\n");
	}else if(media >= 5.0){
		printf("Aluno em exame.\n");
		scanf("%lf", &exame);
		printf("Nota do exame: %.1f\n", exame);
		media_exame = (media + exame) / 2.0;
		if(media_exame > 5.0){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", media_exame);
	}else{
		printf("Aluno reprovado.\n");
	}
	return 0;
}

