#include <stdio.h>

int main(){
	
	int n1, n2;
	
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	
	fflush(stdin);
	
	printf("Digite outro numero: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("O primeiro numero e maior.");
		
		}else{
		if(n1 == n2){
			printf("Os dois numeros sao iguais.");
			
		}else{
			printf("O segundo numero e maior.");
		
		}
	
	}

	return 0;
}
