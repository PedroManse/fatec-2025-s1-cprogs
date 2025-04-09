#include <stdio.h>

char *rodizio(int fim_da_placa) {
	switch (fim_da_placa) {
		case 1:
		case 2:
			return "Segunda";
		case 3:
		case 4:
			return "Terca";
		case 5:
		case 6:
			return "Quarta";
		case 7:
		case 8:
			return "Quinta";
		case 9:
		case 0:
			return "Sexta";
	}
}

int main(void) {
	int placa;
	printf("Numeros da placa:");
	scanf("%d", &placa);
	printf("A placa %d tem rodizio toda %s-feira", placa, rodizio(placa%10));	
}
