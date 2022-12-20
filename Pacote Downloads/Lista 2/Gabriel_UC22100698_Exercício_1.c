#include <stdio.h>

int main(){
	
	int copias;
	float valor;
	
	printf("Informe a quantidade de copias: \n");
	scanf("%d", &copias);
	
	if(copias <= 100){
		printf("O valor a ser pago sera de R$%.2f", copias*0.25);
				
	}else{
		printf("O valor a ser pago sera de R$%.2f", copias*0.20);
		
	}
	
	return 0;
}
