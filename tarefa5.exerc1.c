/*
  Tarefa 5-  Exercicio 1. Receber um n�mero e informar se ele � negativo ou n�o � negativo. 

 Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    

   float number;
   
   

    printf("Digite um n�mero:");
    scanf("%f", &number);
    
	
	if (number<0) {
	printf("Negativo");	
	}
	else {
	printf("Positivo");
	}
	
   
    
   
    
	return 0;	
   
}
	
