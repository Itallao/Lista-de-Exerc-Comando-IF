/*
  Tarefa 5 -  Exercicio 8. Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês, independente de utilizá-los integralmente ou não. 
    Porém, se você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. 
    Receber quantos minutos foram gastos no mês e calcular o valor da conta. 

  Author:Itallo Rodrigues Moreno
*/




#include <stdio.h>  
#include <locale.h> 


int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
    
   	float minutos, conta;
   	float fixo=50;
   	
	
	printf("Digite a quantidade de minutos usados no mês:");
	scanf("%f", &minutos);
     
	conta= (minutos-50)*1.50+50;
			
	if(minutos>50){ 
	printf("Valor da Conta= %.2f",conta);
	}
	
    else{
    printf("Valor da Conta: %.2f", fixo );
	}
	
	
    return 0;	
   
}
	
