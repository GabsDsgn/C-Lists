#include <stdio.h>

int main() {
	
	int num, soma = 0, cont = 0;
	float media;

	printf ("Digite um numero inteiro (Digite 0 para encerrar): ");
	scanf ("%d", &num);
	
	while (num!=0){
		if (num%2==0){ soma=soma+num;
		cont++;
		}
		printf ("Digite outro numero inteiro (Digite 0 para encerrar): ");
		scanf ("%d", &num);
	}
	if (cont>0){ 
		media=soma/cont;
		printf ("\nA media e %.2f\n", media);
	}else{
	printf ("\nNenhum valor foi digitado");	
	} 
	
	return 0;
}
