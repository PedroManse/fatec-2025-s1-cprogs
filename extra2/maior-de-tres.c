// ex 5
#include <stdio.h>

int main() {
	int a, b, c;

	printf("Digite outro numero: ");
	scanf("%i", &a);

	printf("Digite outro numero: ");
	scanf("%i", &b);

	printf("Digite outro numero: ");
	scanf("%i", &c);

	int maior;
	if (a > b) {
		maior = a;
	} else {
		maior = b;
	}
	if (maior<c) {
		maior = c;
	}
	printf("O maior numero = %d\n", maior);

	return 0;
}
