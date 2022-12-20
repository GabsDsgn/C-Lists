#include <stdio.h>

int main(){
	
	int i = 0, interview = 0, c = 0, r = 0, p = 0, team2 = 0;
	char team;
	
	printf("PESQUISA DE EQUIPE MAIS PRIVILEGIADA \n");
	printf("\nInforme a quantidade de pessoas que serao entrevistadas: \n");
	scanf("%d", &i);
	
	if(i < 5){
		printf("Quantidade de pessoas insuficiente para realizacao da pesquisa.");
		
	}else{
		for(interview = 1; interview <= i; interview++){
			printf("Qual equipe foi mais privilegiada na sua opiniao?\n");
			printf("\nC = CocaCola \nR = Red Bull \nP = Pepsi \n0 = Outra equipe \n");
			scanf(" %c", &team);
			
			fflush(stdin);
			
			if(team == 'C'){
				c++;
				
			}else if(team == 'R'){
				r++;
				
			}else if(team == 'P'){
				p++;
				
			}else{
				team2++;
				
			}
			
		}
		
	}
	
	printf("\nRESULTADO DA PESQUISA\n");	
	
	printf("\n CocaCola: %d", c);
	printf("\n Red Bull: %d", r);
	printf("\n Pepsi: %d", p);
	printf("\n Outra equipe: %d \n", team2);
	
	if(team2 > c+r+p){
		printf("\n Outra equipe foi a privilegiada.");
		
	}
	
	return 0;
}
