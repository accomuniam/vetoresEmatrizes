#include <stdio.h>             
#include <string.h> 

int main()                
{

   char origem[50];
   char destino[50];
   int i;
   
    
    printf ("Digite a palavra 1: ");
    scanf ("%s" ,origem);
    
    printf ("antes de copiar: \n palavra1: %s\n ", origem);
    
		for( i=0; i<=50; i++) {
			
			destino[i] = origem[i];
		}
	
    printf ("depois de copiar: \n palavra1: %s\n palavra2: %s\n", origem, destino);
    

   }
