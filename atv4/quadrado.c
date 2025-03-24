#include <stdio.h>

int main(void) {
	int n, soma=0;
	printf("Número:");
	scanf("%d", &n);

	for (int i = 0; i<n; i++) {
		soma+=(2*i)+1;
	}

	printf("O quadrado de %d é %d\n", n, soma);
	return 0;
}
