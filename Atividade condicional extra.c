//Rebeca Nunes RGM 34487565 e Flávia Viana RGM 34503889

#include <stdio.h>
#include <ctype.h>

int main(void){
	char nome[100], tipo;
	double valorDiaria, consumoInterno, subtotal, taxaServico, total;
	int diaria;
	 
	printf("Ola, voce esta no Hotel Refla! Seja bem vindo!\n");
	
	printf("Por favor, informe seu nome: ");
	scanf("%[^\n]s", nome);
	getchar();

	
	printf("\nDigite o quarto utilizado: A, B, C ou D\n");
	scanf("%s", &tipo);
	
	tipo = toupper(tipo);
	switch(tipo){
		case 'A':
			valorDiaria = 150.00;
			break;
		case 'B':
			valorDiaria = 100.00;
			break;
		case 'C':
			valorDiaria = 75.00;
			break;
		case 'D':
			valorDiaria = 50.00;
			break;
		default:
			printf("Tipo de quarto inexistente!");
		return 0;
	}	
	
	printf("Digite os dias de estadia utilizados: \n");
	scanf("%hhd", &diaria);
	
	printf("Digite o valor dos produtos consumidos no quarto: \n");
	scanf("%lf", &consumoInterno);
	
	subtotal = valorDiaria * diaria + consumoInterno;
	total = subtotal * 1.1;
	
	printf("--------------- FECHAMENTO DE ESTADIA REFLA  ---------------\n");
	printf("\nNome: %s", nome);
	printf("\nQuantidade de dias no hotel: %hhd\n", diaria);
	printf("\nO total da hospedagem ficou no valor de R$ %.2f\n", total);
	
}
