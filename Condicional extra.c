//Nome do Hotel
//nome do hospede
//tipo do apartamento
//n�mero de di�rias
//valor unit�rio da di�ria
//valor total das di�rias
//valor do consumo interno
//subtotal
//valor da taxa de servi�os
//total geral
//Ler nome do hospede
//ler tipo de apartamento utilizado A, B, C ou D
//Numero de di�rias utilizadas
//valor do consumo interno
//Tipo de apartamento x valor da di�rio A 150,00 B 100,00 C 75,00 D 50,00
// Valor da di�ria * qtd di�ria
//Subtotal = total di�rias + valor consumo interno
//Total=resultado subtotal + 10%



#include <stdio.h>
#include <ctype.h>

int main(void){
	char nome[100], tipo;
	double valor_diaria, consumo_interno, subtotal, taxa_servico, total;
	int diaria;
	
	printf("Ola voce esta no Hotel Refla! Seja bem vindo!\n");
	
	printf("\nPor favor, informe seu nome:\n");
	scanf("%s",&nome);
	
	printf("\n Ola, Digite o quarto utilizado: A, B, C, D\n");
	Scanf("%s", &tipo);
	
	tipo = toupper(tipo);
	switch(tipo){
		case 'A':
			valor_diaria = 150.00;
			break;
		case 'B':
			valor_diaria = 100.00;
			break;
		case 'C':
			valor_diaria = 75.00;
			break; 
		case 'D':
			valor_diaria = 50.00;
			break;
		default:
			printf("Tipo de quarto inexistente");
			
		return 0;
	}

			

	}
