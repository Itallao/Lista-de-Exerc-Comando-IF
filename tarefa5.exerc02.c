/*
  Tarefa 5 -  Exercicio  Receber um n�mero e verificar se ele esta na faixa de 0 � 9. 
    Se sim, mostre uma mensagem afirmativa, caso contr�rio mostre uma mensagem indicando que o n�mero n�o se encontra na faixa. 

  Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");	
		
	float number;
    
    printf("Digite o n�mero:");
    scanf("%f", &number);
    
    
   	if(number<=9) {
	printf("Est� entre 0 e 9 ");
   }
   	else {
   	printf("N�o est� entre 0 e 9");
   }
    
    
    
	return 0;	
   
}
	
