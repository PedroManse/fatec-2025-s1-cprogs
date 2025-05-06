// ex 19
#include <stdio.h>
#include <limits.h>

int main() {
	int n, c;
	int maior = -INT_MAX;
	int menor = INT_MAX;
	do {
		printf("Escreva quantos números vc quer comparar: ");
		scanf("%d", &n);
	} while (n < 1);
	for (int i = 0; i < n; i++) {
		printf("Escreva um número: ");
		scanf("%d", &c);
		if (c>maior) maior=c;
		if (c<menor) menor=c;
	}
	printf("O maior foi %d, o menor foi %d\n", maior, menor);
}

