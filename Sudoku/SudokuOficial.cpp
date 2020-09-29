#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int instancias, i, j, aux, cont;
  int somaTot = 285;
  int sudoku[9][9];
  int ok = 2;
  cont = 0;
  
  
  scanf("%d", &instancias);
  while(instancias--) {
    for(i = 0; i <= 8; i++)
      for(j = 0; j <= 8; j++)
        scanf("%d", &sudoku[i][j]);

        int linha[9], coluna[9], bloco[3][3];

        for (i = 0; i <= 8; i++)
          linha[i] = coluna[i] = bloco[i/3][i%3] = 0;

        for (i = 0; i <= 8; i++) {
          for (j = 0; j <= 8; j++) {
            aux = sudoku[i][j];
            aux *= aux;
            linha[i] += aux;
            coluna[j] += aux;
            bloco[i/3][j/3] += aux;

            if (i == 8 && coluna[j] != somaTot)
              break;
          }

          if (linha[i] != somaTot)
            break;
        }

        if(ok == 2)
          for (i = 0; i <= 2; i++)
            for (j = 0; j <= 2; j++)
              if (bloco[i][j] != somaTot)
                ok = 0;

        if(ok == 2)
          ok  = 1;

        cont++;
        printf("Instancia %d\n", cont);
        if(ok == 0){
          printf("NAO\n");
          printf("\n");
        }else{
          printf("SIM\n");
          printf("\n");
        }
        

        ok = 2;
    }
    
    return 0;
}
