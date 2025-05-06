#include <stdio.h>
#include <stdlib.h>

void dia_da_semana(int final) {
	switch (final) {
		case 1:
		case 2:
			printf("O dia do rodízio da sua placa, com final %d, é Segunda-feira\n", final);
			break;
		case 3:
		case 4:
			printf("O dia do rodízio da sua placa, com final %d, é Terça-feira\n", final);
			break;
		case 5:
		case 6:
			printf("O dia do rodízio da sua placa, com final %d, é Quarta-feira\n", final); 
			break;
		case 7:
		case 8:
			printf("O dia do rodízio da sua placa, com final %d, é Quinta-feira\n", final); 
			break;
		case 9:
		case 0:
			printf("O dia do rodízio da sua placa, com final %d, é Sexta-feira\n", final);  
			break;
		default:
			printf("Número inválido\n");
			exit(1);
	}
}

int main(void) {
	int placa;
	printf("Quatro dígitos da placa: ");
	scanf("%d", &placa);
	dia_da_semana(placa%10);
}
