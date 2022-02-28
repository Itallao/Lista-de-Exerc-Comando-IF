/*
  Tarefa 5 -  Exercicio9. Receber um ano e se este ano for bissexto exibir na tela “Ano Bissexto”, senão exibir na tela “Ano Não-Bissexto”. 
	Um ano é bissexto se for divisível por 4, mas não por 100. 
	Um ano também é bissexto se for divisível por 400.
 
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
	printf("%.i É um ano bissexto", year);
	}
	
	else {
	printf("%.i Não é um ano bissexto", year);	
	}	
	
	return 0;	
}
