
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
