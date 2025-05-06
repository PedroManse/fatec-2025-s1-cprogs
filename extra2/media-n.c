// ex 18
#include <stdio.h>

int main() {
	int n;
	float c, soma = 0.0;
	do {
		printf("Escreva quantos numeros vc quer para fazer a média: ");
		scanf("%d", &n);
	} while (n < 1);
	for (int i = 0; i < n; i++) {
		printf("Numero:");
		scanf("%f", &c);
		soma+=c/n;
	}
	printf("A média é %.3f\n", soma);
}

