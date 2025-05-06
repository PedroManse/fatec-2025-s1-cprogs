// ex 17
#include <stdio.h>

int main() {
	int n, c, soma = 0;
	do {
		printf("Escreva quantos números vc quer somar: ");
		scanf("%d", &n);
	} while (n < 1);
	for (int i = 0; i < n; i++) {
		printf("Número:");
		scanf("%d", &c);
		soma+=c;
	}
	printf("A soma é %d\n", soma);
}

