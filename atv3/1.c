#include <stdio.h>

int main(void) {
	int digito;
	printf("Dígito: ");
	scanf("%d", &digito);
	printf("O dígito %d é %s\n", digito, (digito % 2) ? "ímpar" : "par");
	return 0;
}
