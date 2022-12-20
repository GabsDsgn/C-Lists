#include <stdio.h>

int main(){
	
	float salario;
	
	printf("Informe o valor do seu salario: \nR$");
	scanf("%f", &salario);
	
	if(salario <= 1000){
		printf("Voce recebera um aumento de 10 por cento e o valor do seu novo salario sera de: R$%.2f", (salario*10/100)+salario);
		
	}else{
		printf("O valor do seu salario e superior a R$1000 e por causa disso voce nao esta elegivel para receber o aumento.");
		
	}

	return 0;
}
