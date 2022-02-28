/*
  Tarefa -  Exercicio 4. Calcular a média de um aluno em um semestre com duas provas, onde M = (P1 + P2) / 2. 
    Se a média for maior ou igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. 


 Author:Itallo Rodrigues Moreno 
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    
   	float p1, p2, media, missed;
	   
    
    printf("Digite a Nota da P1:");
    scanf("%f", &p1);
    printf("Digite a  Nota da P2:");
    scanf("%f", &p2);
    
  	
   	media= (p1+p2)/2;
   	missed= 5-media ;
  	
    
	if(media>=5){
	printf("Aprovado");
	}
	
	else{
	printf("faltou: %.2f", missed);
	}
	
	
	return 0;	
   
}
	
