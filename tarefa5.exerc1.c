/*
  Tarefa 5-  Exercicio 1. Receber um número e informar se ele é negativo ou não é negativo. 

 Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    

   float number;
   
   

    printf("Digite um número:");
    scanf("%f", &number);
    
	
	if (number<0) {
	printf("Negativo");	
	}
	else {
	printf("Positivo");
	}
	
   
    
   
    
	return 0;	
   
}
	
