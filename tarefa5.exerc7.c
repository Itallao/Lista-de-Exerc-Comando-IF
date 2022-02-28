/*
  Tarefa 5 -  Exercicio Implemente um programa que calcule aumento de salário no ano corrente. 
    Se o salário for de até R$ 1000.00 deve ser calculado o novo salário com aumento de 5%, para um salário maior que R$ 1000.00 o aumento é de 7%

  Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    
   	float salary;
    
	printf("Digite o salário:");
    scanf("%f", &salary);
    

    if(salary<=1000){
   	salary= salary*1.05;
    }
    
	else {
     salary= salary*1.07;
     }
    
    printf("salario= %.2f", salary );
	
	return 0;	

}
	
