/*
  Tarefa 5 -  Exercicio9. Receber um ano e se este ano for bissexto exibir na tela �Ano Bissexto�, sen�o exibir na tela �Ano N�o-Bissexto�. 
	Um ano � bissexto se for divis�vel por 4, mas n�o por 100. 
	Um ano tamb�m � bissexto se for divis�vel por 400.
 
AUTHOR: ITALLO RODRIGUES MORENO
 
*/



#include <stdio.h>  
#include <locale.h>


int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int year;
	
	printf("Digite o ano:");
	scanf("%i", &year);

	if(year% 400==0 || year%4==0 && year%100!=0){
	printf("%.i � um ano bissexto", year);
	}
	
	else {
	printf("%.i N�o � um ano bissexto", year);	
	}	
	
	return 0;	
}
