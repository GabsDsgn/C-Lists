#include <stdio.h>

int main(){
	
	int idade;
	
	printf("SISTEMA ELEITORAL");
	printf("\n");
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	if (idade < 0){
		printf("\nNao nasceu");
	}else{
		if (idade <= 15){
			printf("\nNao e necessario votar");
		
		}else{
			if (idade <= 17){
				printf("Voto opicional");
			
			}else{
				if (idade == 41){
				printf("Voce ganhou o primeiro premio");
				
				}else{
					if (idade <= 64){
						printf("Voto obrigatorio");
					
					}else{
						if (idade == 82){
							printf("Voce ganhou o segundo premio");
						
						}else{
							printf("Voto opicional");
						}
					}
				}
			}
		}
	}

	return 0;
}
