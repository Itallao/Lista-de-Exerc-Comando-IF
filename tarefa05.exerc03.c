/*
  Tarefa 5-  Exercicio 3. Receber numerador e denominador. 
    Calcular e mostrar o resultado da divis�o, desde que poss�vel (denominador diferente de zero).
    Se n�o for poss�vel dividir, apenas escreva �n�o existe divis�o por zero�. 
 

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
    	printf("N�O EXISTE DIVIS�O POR ZERO!!");
	}
	
	else {
	   printf("\n Resultado:%.2f", div);	
	}
	
	
 
    
	return 0;	
   
}
	
