#include <stdio.h>

double max (double a, double b) {
	if ( a > b )
		return a;
	return b;
}

int main(void) {
	if (max(3, 0) != 3) {
		printf("Teste max(3, 0) deu errado!\n");
		return 1;
	}

	if (max(0, -3) != 0) {
		printf("Teste max(0, -3) deu errado!\n");
		return 1;
	}

	if (max(-999, -3) != -3) {
		printf("Teste max(-999, -3) deu errado!\n");
		return 1;
	}

	printf("Todos os testes passaram!\n");
	return 0;
}
