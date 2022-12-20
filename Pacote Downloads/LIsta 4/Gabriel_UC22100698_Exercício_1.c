#include <stdio.h>

int main(){
	
	
	int mes, ano;
	float metros;
	
	printf("Informe a quantidade de metros cubicos (m3) consumida por mes: \n");
	scanf("%f", &metros);
	
	fflush(stdin);
	
	printf("Informe o mes: \n");
	scanf("%d", &mes);
	
	fflush(stdin);
	
	printf("Informe o ano: \n");
	scanf("%d", &ano);
	
	if(metros < 0){
		printf("Numero invalido.");
		
	}else if(metros <= 2.1){
		printf("Consumo baixo.");
		
	}else if(metros <= 6.1){
		printf("Consumo normal.");
		
	}else if(metros <= 10.5){
		printf("Consumo alto.");
		
	}else{
		printf("Consumo exagerado.");
		
	}
	
	printf("\nMes: %d", mes);
	printf("\nAno: %d", ano);
	
	if(ano % 4 == 0 && ano % 100 != 0){
		printf("\nO ano e bissexto.");
		
	}else if(ano % 400 == 0){
		printf("\nO ano e bissexto.");
		
	}else{
		printf("\nNao e um ano bissexto.");		

	}
	
	return 0;
}
