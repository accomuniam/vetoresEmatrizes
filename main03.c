#include <stdio.h>
#include <stdlib.h>

int main(){
 int i, j, X[3] [3] = {1, -1, 9, 7, 14, -8, 8, -5, -5},
           Y[3] [3] = {-1, 1, -9, 7, -14, 8, 0, 5, 5};
 int resultado;


 for(i = 0; i< 3; i++)
 {
    for(j = 0; j < 3; j++)
    {  
        resultado = X[i][j] + Y[i][j];
 }
 }  

 if(resultado == 0){
    printf("\n Matrizes opostas");
 }  
 else{
    printf("\n Matrizes nao opostas");}
    return 0;

}
