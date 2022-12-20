#include <stdio.h>

int main(){
	
	float km, gasolina;
	
	printf("Digite a distancia total percorrida: \n");
	scanf("%f", &km);
	
	fflush(stdin);
	
	printf("Digite a quantidade total de combustivel gasto: \n");
	scanf("%f", &gasolina);
	
	printf("O consumo medio do automovel foi de (km/l): %.1f", km/gasolina);	

	return 0;
}
