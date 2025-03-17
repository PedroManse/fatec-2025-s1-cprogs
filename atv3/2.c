#include <stdio.h>
#include <stdlib.h>

	/*
	Segunda-feira: 1 e 2
	Terça-feira: 3 e 4
	Quarta-feira: 5 e 6
	Quinta-feira: 7 e 8
	Sexta-feira: 9 e 0
	*/
char* dia_da_semana(int final) {
	switch (final) {
		case 1:
		case 2:
			return "Segunda";
		case 3:
		case 4:
			return "Terça";
		case 5:
		case 6:
			return "Quarta";
		case 7:
		case 8:
			return "Quinta";
		case 9:
		case 0:
			return "Sexta";
		default:
			printf("Número inválido\n");
			exit(1);
	}
}

int main(void) {
	int final;
	printf("Último dígito da placa: ");
	scanf("%d", &final);
	printf("O dia do rodízio da placa com final %d é %s-feira\n", final, dia_da_semana(final));
}
