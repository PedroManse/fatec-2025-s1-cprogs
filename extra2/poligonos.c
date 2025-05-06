// ex 2
#include <stdio.h>

int main(void) {
	int n;
	do {
		printf("Escreva o número de lados:");
		scanf("%d", &n);
	} while (n < 3);
	printf("O número de diagonais é %d\n", n*(n-3)/2);
	return 0;
}
