//Nome do Hotel
//nome do hospede
//tipo do apartamento
//número de diárias
//valor unitário da diária
//valor total das diárias
//valor do consumo interno
//subtotal
//valor da taxa de serviços
//total geral
//Ler nome do hospede
//ler tipo de apartamento utilizado A, B, C ou D
//Numero de diárias utilizadas
//valor do consumo interno
//Tipo de apartamento x valor da diário A 150,00 B 100,00 C 75,00 D 50,00
// Valor da diária * qtd diária
//Subtotal = total diárias + valor consumo interno
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
