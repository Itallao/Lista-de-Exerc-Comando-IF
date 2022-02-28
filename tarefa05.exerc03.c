/*
  Tarefa 5-  Exercicio 3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divisão, desde que possível (denominador diferente de zero).
    Se não for possível dividir, apenas escreva “não existe divisão por zero”. 
 

  Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
   
	float numerator, denominator, div;
 	
	printf("Digite o numerador:");
	scanf("%f", &numerador);
	printf("Digite o denominador:");
	scanf("%f", &denominador);
	    

 
   	div= numerador/denominador; 
    
    if (denominador==0){
    	printf("NÃO EXISTE DIVISÃO POR ZERO!!");
	}
	
	else {
	   printf("\n Resultado:%.2f", div);	
	}
	
	
 
    
	return 0;	
   
}
	
