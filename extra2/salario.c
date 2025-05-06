// ex 3
#include <stdio.h>

int main(void) {
	float salario;
	printf("Escreva o seu salario: R$ ");
	scanf("%f", &salario);
	printf("Novo salario: R$ %.2f\n", salario*1.05);
	if (salario <= 750.0) {
		printf("Mais um abono de R$ 100\n");
	}
	return 0;
}
