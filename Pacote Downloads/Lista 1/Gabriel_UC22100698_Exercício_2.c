#include <stdio.h>

int main(){

	char razaosocial[200], nomecompleto[200], endereco[200], complemento[200], bairro[200], estado[2], cidade[200], email[200], 
	placa1[7], placa2[7], placa3[7], modelo1[200], modelo2[200], modelo3[200], cor1[11], cor2[11], cor3[11];
	int n1, ddd, telefone, ddd2, celular, cep, cpf, cnpj, insc1, insc2, cnae, nasc, contato, telefone2, data, ano1, ano2, ano3, boleto;

	printf("DADOS DO CREDENCIADO");
	printf("\n");

    printf("Razao Social: ");
    scanf("%[^\n]s", &razaosocial);
    
    fflush(stdin);
	
	printf("Nome Completo: ");
    scanf("%[^\n]s", &nomecompleto);
    
    fflush(stdin);
	
	printf("Endereco: ");
    scanf("%[^\n]s", &endereco);
    
    fflush(stdin);
	
	printf("Numero: ");
    scanf("%i", &n1);

	fflush(stdin);
	
	printf("Complemento: ");
	scanf("%s", &complemento);

	fflush(stdin);
	
	printf("Bairro: ");
	scanf("%[^\n]s", &bairro);
	
	fflush(stdin);
	
	printf("CEP: ");
	scanf("%i", &cep);

	fflush(stdin);
	
	printf("Estado: ");
	scanf("%s", &estado);
	
	fflush(stdin);
	
	printf("Cidade: ");
	scanf("%[^\n]s", &cidade);
	
	fflush(stdin);
	
	printf("DDD: ");
	scanf("%i", &ddd);
	
	fflush(stdin);
	
	printf("Telefone Residencial ou Comercial: ");
	scanf("%i", &telefone);
	
	fflush(stdin);
	
	printf("DDD: ");
	scanf("%i", &ddd2);
	
	fflush(stdin);
	
	printf("Telefone Celular: ");
	scanf("%i", &celular);

	fflush(stdin);
	
	printf("CPF: ");
	scanf("%i", &cpf);
	
	fflush(stdin);
	
	printf("CNPJ: ");
	scanf("%i", &cnpj);

	fflush(stdin);
	
	printf("Insc. Estadual: ");
	scanf("%i", &insc1);

	fflush(stdin);
	
	printf("Insc. Municipal: ");
	scanf("%i", &insc2);
	
	fflush(stdin);
	
	printf("CNAE: ");
	scanf("%i", &cnae);
	
	fflush(stdin);
	
	printf("Data de Nasc.: ");
	scanf("%i", &nasc);
	
	fflush(stdin);
	
	printf("Deseja receber os proximos boletos por email? Nao = 0 / Sim = 1\n");
	scanf("%i", &boleto);

	fflush(stdin);
	
	printf("E-mail: ");
	scanf("%s", &email);
	
	fflush(stdin);
	
	printf("Contato do Responsavel: ");
	scanf("%i", &contato);
	
	fflush(stdin);
	
	printf("Telefone Comercial: ");
	scanf("%i", &telefone2);

	fflush(stdin);
	
	printf("Data: ");
	scanf("%i", &data);

	fflush(stdin);
	
	printf("\nDADOS DOS VEICULOS");
	printf("\n");

	printf("Placa: ");
	scanf("%s", &placa1);
	
	fflush(stdin);
	
	printf("Modelo: ");
	scanf("%s", &modelo1);
	
	fflush(stdin);
	
	printf("Ano: ");
	scanf("%i", &ano1);
	
	fflush(stdin);
	
	printf("Cor: ");
	scanf("%s", &cor1);
	
	fflush(stdin);
	
	printf("Placa: ");
	scanf("%s", &placa2);
	
	fflush(stdin);
	
	printf("Modelo: ");
	scanf("%s", &modelo2);
	
	fflush(stdin);
	
	printf("Ano: ");
	scanf("%i", &ano2);
	
	fflush(stdin);
	
	printf("Cor: ");
	scanf("%s", &cor2);
	
	fflush(stdin);
	
	printf("Placa: ");
	scanf("%s", &placa3);
	
	fflush(stdin);
	
	printf("Modelo: ");
	scanf("%s", &modelo3);
	
	fflush(stdin);
	
	printf("Ano: ");
	scanf("%i", &ano3);
	
	fflush(stdin);
	
	printf("Cor: ");
	scanf("%s", &cor3);
	
	printf("\n-=-=-=-=-=-=-=-=-=");
	
	printf("\nDADOS DO CREDENCIADO");
	printf("\n");
	
	printf("Razao Social: %s\n", razaosocial);
	
	printf("Nome Completo: %s\n", nomecompleto);
	
	printf("Endereco: %s\n", endereco);
	
	printf("Numero: %i", n1);
	
	printf(" Complemento: %s", complemento);
	
	printf(" Bairro: %s\n", bairro);
	
	printf("CEP: %i", cep);
	
	printf(" Estado: %s", estado);
	
	printf(" Cidade: %s\n", cidade);
	
	printf("DDD: %i", ddd);
	
	printf(" Telefone Residencial ou COmercial: %i", telefone);
	
	printf(" DDD: %i", ddd2);
	
	printf(" Telefone Celular: %i\n", celular);
	
	printf("CPF: %i", cpf);
	
	printf(" CNPJ: %i\n", cnpj);
	
	printf("Insc. Estadual: %i", insc1);
	
	printf(" Insc. Municipal: %i\n", insc2);
	
	printf("CNAE: %i", cnae);
	
	printf(" Data de Nascimento: %i", nasc);
	
	if (boleto == 1){
		printf(" Deseja receber os proximos boletos por e-mail? [x] SIM\n");
	}else{
		printf(" Deseja receber os proximos boletos por e-mail? [x] NAO\n");
	}																
	
	printf("E-mail: %s\n", email);
	
	printf("Contato do Responsavel: %i", contato);
	
	printf(" Telefone Comercial: %i\n", telefone2);
	
	printf("Data: %i\n", data);

	printf("\nDADOS DOS VEICULOS");
	printf("\n");
	
	printf("Placa: %s", placa1);
	
	printf(" Modelo: %s", modelo1);
	
	printf(" Ano: %i", ano1);
	
	printf(" Cor: %s\n", cor1);

	printf("Placa: %s", placa2);
	
	printf(" Modelo: %s", modelo2);
	
	printf(" Ano: %i", ano2);
	
	printf(" Cor: %s\n", cor2);
	
	printf("Placa: %s", placa3);
	
	printf(" Modelo: %s", modelo3);
	
	printf(" Ano: %i", ano3);
	
	printf(" Cor: %s\n", cor3);

	return 0;
}
