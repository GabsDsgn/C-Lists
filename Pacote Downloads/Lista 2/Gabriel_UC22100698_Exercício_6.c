#include <stdio.h>

int main() {
	
	int par=0, num, i; 

	for (i=1; i<=10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &num); 
			if (num%2==0) { par=par+1;
			}	
	}		

	printf("Numeros pares: %d\n", par);
	printf("Numeros impares: %d", 10-par);
	printf("\n");
	
	return 0;
}
