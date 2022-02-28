/*
  Tarefa 5 -  Exercicio  Receber um número e verificar se ele esta na faixa de 0 à 9. 
    Se sim, mostre uma mensagem afirmativa, caso contrário mostre uma mensagem indicando que o número não se encontra na faixa. 

  Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");	
		
	float number;
    
    printf("Digite o número:");
    scanf("%f", &number);
    
    
   	if(number<=9) {
	printf("Está entre 0 e 9 ");
   }
   	else {
   	printf("Não está entre 0 e 9");
   }
    
    
    
	return 0;	
   
}
	
