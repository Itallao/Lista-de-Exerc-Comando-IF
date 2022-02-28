/*
  Tarefa 5 -  Exercicio  5. Receber dois números e mostrar o maior deles. 

  Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    
   	float number1, number2;
   	
   	
    printf("Digita o N1:");
    scanf("%f", &number1);
    printf("Digite o N2:");
    scanf("%f", &number2);
    
   	if(number1>number2){
   	printf("Maior: %.f", number1);
   	}
    else{
    printf("Maior: %.f", number2);
	}
    
    
	
	return 0;	
   
}
	
