#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int i, j, soma = 0, mat[50][50],linha,coluna, soma2 = 0;
    
    printf ("Qual a quantidade de linhas?" );
    scanf ("%d" ,&linha);
    printf ("Qual a quantidade de colunas?" );
    scanf ("%d" ,&coluna);

    srand(time(NULL));

    // preenche a matriz com números entre 0 e 99
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            mat[i][j] = rand() % 100;
        }
    }

    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna ; j++){
			if(i==j){
            soma += mat[i][j]; 
            }// acumula a soma
            
            printf("%2d ", mat[i][j]); // imprime a matriz
        }
        printf("\n");
    }

    // imprime a soma dos elementos da matriz
    printf("\n\nSoma da diagonal principal: %d\n\n", soma);
    
	for(i = 0; i < linha; i++){
         soma2 += mat[i][linha - 1 - i]; 
        
    }
     printf("\n\nSoma da diagonal secundaria: %d\n\n", soma2);
    return 0;
}
