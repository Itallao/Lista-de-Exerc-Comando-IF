/*
  Tarefa 5-  Exercicio 6. Receber dois n�meros e os apresente em ordem crescente. 
    Utilize apenas a estrutura de decis�o if, ou seja, sem o opcional else. 

 AUTHOR:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
    
   	float number1, number2, troca;
    
	printf("Digite o numero 1:");
    scanf("%f", &number1);
	
	printf("Digite o n�mero 2:");
	scanf("%f", &number2);
    
    if(number2<number1){
    	
	troca    = 	number1;
	number1  =	number2;	
	number2  = 	troca;
	
	}
	
   
    printf("\n %.f %.f", number1, number2);
    
	
	return 0;	
   
}
	                                                                                                                                                                                                                                                                             
