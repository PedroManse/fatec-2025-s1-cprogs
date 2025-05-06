// ex 4
#include <stdio.h>

int main() {
	int a, b;

	printf("Digite um numero: ");
	scanf("%i", &a);
	
	printf("Digite outro numero: ");
	scanf("%i", &b);

	if (a<b) {
		printf("%i, %i\n", a,b);
	} else {
		printf("%i, %i\n", b,a);
	}
	return 0;
}
